#include "TCPClientDbManager.h"

/*
 * Constructor Function for TCPClientDbManager
*/
TCPClientDbManager::TCPClientDbManager(TCPServerController *tcp_server_controller) {
  this->tcp_server_controller = tcp_server_controller;

}

TCPClientDbManager::~TCPClientDbManager() {
  
}

void TCPClientDbManager::StartTCPClientDbInit() {

}