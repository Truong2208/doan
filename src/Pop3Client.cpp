#include "Pop3Client.h"

Pop3Client::Pop3Client()
{
    connected = false;
};

void Pop3Client::connect(const string &hostname, const string &port, CmdLineInterface *callback)
{
  

}
void Pop3Client::close(CmdLineInterface *callback)
{
  
}
bool Pop3Client::is_connected()
{
    return this->connected;
}




void Pop3Client::login(const string &username, const string &password, CmdLineInterface *callback)
{

}
