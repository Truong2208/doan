#include "Pop3ClientCLI.h"
#include "Display.h"

int main(){
	Display dp;
	dp.home_screen();

	Pop3ClientCLI client;
	client.initCmd();
	client.run();
	return 0;
}