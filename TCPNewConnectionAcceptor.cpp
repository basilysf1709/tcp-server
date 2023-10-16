#include <sys/socket.h>
#include <netinet/in.h>
#include "TCPServerController.h"
#include "TCPNewConnectionAcceptor.h"

/*
 * Constructor Function for TCPNewConnectionAcceptor
*/
TCPNewConnectionAcceptor::TCPNewConnectionAcceptor(TCPServerController *tcp_server_controller) {

  this->accept_fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

  if (this->accept_fd < 0) {
    cout << "Error: Could not create Accept ID" << endl;
    exit(0);
  }
  this->accept_new_connection_thread = (pthread_t *) calloc(1, sizeof(pthread_t));
  this->tcp_server_controller = tcp_server_controller;

}

TCPNewConnectionAcceptor::~TCPNewConnectionAcceptor() {
  
}

void TCPNewConnectionAcceptor::StartTCPNewConnectionAcceptorThread() {

}