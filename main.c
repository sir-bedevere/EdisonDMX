#include "stdio.h"
#include "mraa.h"

int dmxVALS[512];

int main(int argc, char **argv){

	mraa_uart_context uart;
	uart = mraa_uart_init(1);

	if (uart == NULL) {
		fprintf(stdout, "UART1 failed to setup\n");
	}



	mraa_deinit();

	return 0;
}
