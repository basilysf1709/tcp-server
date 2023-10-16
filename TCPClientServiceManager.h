#ifndef __TCPClientServiceManager__
#define __TCPClientServiceManager__

#include <cstdint>
#include <iostream>
#include <string>
#include <list>

using namespace std;

class TCPServerController;
class TCPClient;

class TCPClientServiceManager {
  private:

  public:
    TCPServerController *tcp_server_controller;
    TCPClientServiceManager(TCPServerController *);
    ~TCPClientServiceManager();

    void StartTCPClientServiceManagerThread();
};

#endif