


#include "Display.h"


void Display::home_screen(){
    system("cls");
    std::cout<<"Pop3 Client"<< std::endl; 
    std::cout << "Commands may be abbreviated.  Commands are:" << std::endl << std::endl;
    std::cout <<  std::setw(30) << std::left << "connect <hostname> <port>";
    std::cout <<  std::setw(20) << std::left << "Connect to FTP server" << std::endl;
    std::cout <<  std::setw(30) << std::left << "help";
    std::cout <<  std::setw(20) << std::left << "Print local help information" << std::endl;
    std::cout <<  std::setw(30) << std::left << "clear";
    std::cout <<  std::setw(20) << std::left << "Clears the screen" << std::endl;
    std::cout <<  std::setw(30) << std::left << "quit";
    std::cout <<  std::setw(20) << std::left << "Exit the program." << std::endl;
}