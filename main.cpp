#include <iostream>
#include <string>
#include <thread>
#include <cstring>
#include <sstream>
#include "LegosUtils.h"


using namespace std;
char* messageType = "0";
char* macFuente = "legos3";
char* macDestino = "legos1";
char* logicalIp = "192.168.100.100";
char* networkId = "legos3";
char* realIp = "255.255.255.255";
char* realPort = "8080";



char * dispatcherRegistry() {
    stringstream ss;
    ss<<messageType<<";";
    ss<<macFuente<<";";
    ss<<macDestino<<";";
    ss<<logicalIp<<";";
    ss<<networkId<<";";
    ss<<realIp<<";";
    ss<<realPort<<";";
    string temporal = ss.str();
    return (char*) temporal.c_str();
}



int main() {
    std::cout << "Hello, World!" << std::endl;
    LegosUtils* legosUtil = new LegosUtils();
    struct physicalLayerMessage* message;
    char* buffer = "0;legos3;legos0;192.168.100.100;legos3;255.255.255.255;8080;";
    message = legosUtil->unpackPhysicalMessage(buffer);


    return 0;
}

