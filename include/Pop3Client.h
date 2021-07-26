
#ifndef FTPCLIENT_H // include guard
#define FTPCLIENT_H

#include <cstdint>
#include <iostream>
#include <windows.h> 
#include "tcpsocket.h"
#include "Extensions.h"
#include "cli.h"
#include "CustomizeException.h"
#include "constants.h"
#include "Response.h"
#include <fstream>

class Pop3Client;


    class Pop3Client{
       protected:
            TcpSocket tcpSocket;
            bool connected;
        public:
            Pop3Client();
            void connect(const string &hostname, const string &port, CmdLineInterface *callback);
            void echo(const string &msg);
            void login(const string &username, const string &password, CmdLineInterface *callback);
            void close(CmdLineInterface *callback);
            bool is_connected();
            bool is_login();
    };

#endif