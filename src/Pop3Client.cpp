#include "Pop3Client.h"
Response Pop3Client::receiver()
{
    char buffer[600];
    int bytes = tcpSocket.recv(buffer, 600);
    buffer[bytes] = 0;
    return Extensions::convert_buffer_to_response(buffer);
}
Pop3Client::Pop3Client()
{
    connected = false;
};

void Pop3Client::connect(const string &hostname, const string &port)
{
    try
    {
        tcpSocket.connect(hostname, port);
        this->connected = true;
    }
    catch (...)
    {
        throw CustomizeException("Connect Error");
    }
}
void Pop3Client::close()
{
}
bool Pop3Client::is_connected()
{
    return this->connected;
}

void Pop3Client::login(const string &username, const string &password)
{
    try
    {
        string request = "USER " + username + "\r\n";
        tcpSocket.send(request);
        Response res = receiver();
        cout << res.getMessage();
    }
    catch (...)
    {
        throw CustomizeException("Login Error");
    }
}
