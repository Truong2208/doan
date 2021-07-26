#ifndef FTPCLIENT_CLI_H // include guard
#define FTPCLIENT_CLI_H

#include "cli.h"
#include "tcpsocket.h"
#include "Pop3Client.h"
#include "iostream"
#include <iomanip>
#include <sstream>
#include <stdlib.h>
#include "constants.h"

class Pop3ClientCLI: public CmdLineInterface{
        public:
            Pop3Client pop3Client;
            Pop3ClientCLI();
            virtual void initCmd();
        protected:
            string hostname;
            string user;
            string cWorkingDirectory;

        private:
            
            void doClose(char* cmd_argv[], int cmd_argc);
            void doHelp(char* cmd_argv[], int cmd_argc);
            void doConnect(char* cmd_argv[], int cmd_argc);
            void doClear(char* cmd_argv[], int cmd_argc);
            void doLogin(char* cmd_argv[], int cmd_argc);
           
            
};

#endif