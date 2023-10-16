#ifndef __TCPNewConnectionAcceptor__
#define __TCPNewConnectionAcceptor__

#include <cstdint>
#include <iostream>
#include <string>
#include <pthread.h>

using namespace std;

class TCPServerController;

class TCPNewConnectionAcceptor {
  private:
    // accept file descriptor
    int accept_fd;
    pthread_t *accept_new_connection_thread;
  public:
    TCPServerController *tcp_server_controller;
    TCPNewConnectionAcceptor(TCPServerController *);
    ~TCPNewConnectionAcceptor();

    void StartTCPNewConnectionAcceptorThread();
  
};

#endif