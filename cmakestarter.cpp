#include <iostream>
#include <cstring>
#include <mosquitto.h>

const char* BROKER_ADDRESS = "localhost";
const int BROKER_PORT = 1883;
const char* CLIENT_ID = "ExampleClientPub";
const char* TOPIC = "test";
const int QOS = 1;

int main(int argc, char* argv[])
{
    mosquitto_lib_init();
    // mosquitto* client = mosquitto_new(CLIENT_ID, true, NULL);
    // if (!client) {
    //     std::cerr << "Error: Failed to create Mosquitto client instance" << std::endl;
    //     return 1;
    // }

    // int rc = mosquitto_connect(client, BROKER_ADDRESS, BROKER_PORT, 60);
    // if (rc != MOSQ_ERR_SUCCESS) {
    //     std::cerr << "Error: Failed to connect to MQTT broker" << std::endl;
    //     return 1;
    // }

    // std::string payload = "Hello world!";
    // rc = mosquitto_publish(client, NULL, TOPIC, payload.size(), payload.c_str(), QOS, false);
    // if (rc != MOSQ_ERR_SUCCESS) {
    //     std::cerr << "Error: Failed to publish message" << std::endl;
    //     return 1;
    // }

    // std::cout << "Message published: " << payload << std::endl;

    // mosquitto_disconnect(client);
    // mosquitto_destroy(client);
    // mosquitto_lib_cleanup();

    return 0;
}
