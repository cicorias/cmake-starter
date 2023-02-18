#include <iostream>

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
#include <MQTTClient.h>
#include <MQTTAsync.h>


#define ADDRESS     "tcp://broker.emqx.io:1883"
#define CLIENTID    "ExampleClientPub"
#define TOPIC       "testtopic/shawn"
#define QOS         1
#define TIMEOUT     10000L

int main(int, char**) {
    std::cout << "Hello, world!\n";


    MQTTClient client;
    MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
    MQTTClient_message pubmsg = MQTTClient_message_initializer;
    MQTTClient_deliveryToken token;
    int rc;


    MQTTClient_create(&client, ADDRESS, CLIENTID, MQTTCLIENT_PERSISTENCE_NONE, NULL);
    conn_opts.keepAliveInterval = 20;
    conn_opts.cleansession = 1;

    if ((rc = MQTTClient_connect(client, &conn_opts)) != MQTTCLIENT_SUCCESS)
    {
        printf("Failed to connect, return code %d\n", rc);
        exit(-1);
    }


    pubmsg.payload = (void*)"Hello world!";
    pubmsg.payloadlen = strlen((const char *)pubmsg.payload);
    pubmsg.qos = QOS;
    pubmsg.retained = 0;

    MQTTClient_publishMessage(client, TOPIC, &pubmsg, &token);
    printf("Waiting for publication of %s on topic %s for client with ClientID: %s\n",
           pubmsg.payload, TOPIC, CLIENTID);
    rc = MQTTClient_waitForCompletion(client, token, TIMEOUT);
    printf("Message with delivery token %d delivered\n", token);

    MQTTClient_disconnect(client, 10000);
    MQTTClient_destroy(&client);
    return rc;

    // const std::string SERVER_ADDRESS("tcp://localhost:1883");
    // const std::string CLIENT_ID("client-id");

    // MQTTAsync_createOptions createOptions = MQTTAsync_createOptions_initializer;

    // mqtt::async_client client(SERVER_ADDRESS, CLIENT_ID);
}
