#include <iostream>
#include <thread>
#include <common/mavlink.h>
#include "serial_port.h"

int main (int argc, char **argv) {
	Generic_Port *port = new Serial_Port("/dev/ttyUSB0", 57600);

	return 0;
}

