#include <iostream>
#include "TCPServerController.h"

int main (int argc, char **argv) {

  TCPServerController *server1 = new
    TCPServerController("127.0.0.1", 40000, "Default TCP Server");
  server1->Start();
  scanf("\n");
  return 0;
}