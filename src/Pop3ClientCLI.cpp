/*
    
    Spirity Company. Inc
    Copyright by HoanDo.

*/
#include "Pop3ClientCLI.h"

Pop3ClientCLI::Pop3ClientCLI() : CmdLineInterface("62pm2@spirity> "){};

void Pop3ClientCLI::initCmd()
{

    addCmd("connect", CLI_CAST(&Pop3ClientCLI::doConnect));
    addCmd("help", CLI_CAST(&Pop3ClientCLI::doHelp));
    addCmd("clear", CLI_CAST(&Pop3ClientCLI::doClear));
    addCmd("login", CLI_CAST(&Pop3ClientCLI::doLogin));
    addCmd("exit", CLI_CAST(&Pop3ClientCLI::doClose));
}

void Pop3ClientCLI::doConnect(char *cmd_argv[], int cmd_argc)
{
    try
    {
        std::string hostname;
        std::string port;
        std::stringstream ss;

        ss << cmd_argv[1];
        ss >> hostname;
        ss.clear();
        ss << cmd_argv[2];
        ss >> port;
        pop3Client.connect(hostname, port);
        std::cout << "connect succeeded" << endl;
    }
    catch (CustomizeException e)
    {
        std::cout << e.what() << endl;
    }
}
void Pop3ClientCLI::doHelp(char *cmd_argv[], int cmd_argc)
{

    std::cout << "Commands may be abbreviated.  Commands are:" << endl
              << endl;
    std::cout << std::setw(30) << std::left << "connect <hostname> <port>";
    std::cout << std::setw(20) << std::left << "Connect to Pop3 server" << std::endl;
    std::cout << std::setw(30) << std::left << "help";
    std::cout << std::setw(20) << std::left << "Print local help information" << std::endl;
    std::cout << std::setw(30) << std::left << "clear";
    std::cout << std::setw(20) << std::left << "Clears the screen" << std::endl;
    std::cout << std::setw(30) << std::left << "quit";
    std::cout << std::setw(20) << std::left << "Exit the program." << std::endl;
    std::cout << "Commands may be abbreviated.  Commands are:" << endl
              << endl;
    std::cout << std::setw(30) << std::left << "login";
    std::cout << std::setw(20) << std::left << "login to ftp server" << std::endl;
    std::cout << std::setw(20) << std::left << "Logout." << std::endl;
}
void Pop3ClientCLI::doClose(char *cmd_argv[], int cmd_argc)
{
}

void Pop3ClientCLI::doClear(char *cmd_argv[], int cmd_argc)
{
    system("cls");
}

void Pop3ClientCLI::doLogin(char *cmd_argv[], int cmd_argc)
{
    try
    {
        string username, password;
        std::cout << "Username:";
        std::cin >> username;
        std::cout << "Password:";
        std::cin >> password;
        pop3Client.login(username, password);
    }
    catch (CustomizeException e)
    {
        cout << e.what() << endl;
    }
}
