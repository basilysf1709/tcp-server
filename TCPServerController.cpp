#include <iostream>
#include <assert.h>
#include "TCPServerController.h"
#include "TCPClientDbManager.h"
#include "TCPClientServiceManager.h"
#include "TCPNewConnectionAcceptor.h"
#include "network_utils.h"

using namespace std;

/*
 * Constructor Function for TCPServerController
*/
TCPServerController::TCPServerController(string ip_address, uint16_t port_number, string name) {
  this->ip_address = network_covert_ip_p_to_n(ip_address.c_str());
  this->port_number = port_number;
  this->name = name;


  this->tcp_new_connection_acceptor = new TCPNewConnectionAcceptor(this);
  this->tcp_client_db_manager = new TCPClientDbManager(this);
  this->tcp_client_service_manager = new TCPClientServiceManager(this);
}


void TCPServerController::Start() {
  this->tcp_new_connection_acceptor->StartTCPNewConnectionAcceptorThread();
  this->tcp_client_service_manager->StartTCPClientServiceManagerThread();
  this->tcp_client_db_manager->StartTCPClientDbInit();

  cout << "TCP Server is up and running at: \nIP Address: " << network_convert_ip_n_to_p(this->ip_address, 0) 
    << "\nPort Number: " << this->port_number << endl;
}