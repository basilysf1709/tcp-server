#include "TCPClientServiceManager.h"

/*
 * Constructor Function for TCPClientServiceManager
*/
TCPClientServiceManager::TCPClientServiceManager(TCPServerController *tcp_server_controller) {
  this->tcp_server_controller = tcp_server_controller;

}

TCPClientServiceManager::~TCPClientServiceManager() {
  
}

void TCPClientServiceManager::StartTCPClientServiceManagerThread() {
  
}