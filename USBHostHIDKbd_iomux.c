/*
** Filename: USBHostHIDKbd_iomux.c
**
** Automatically created by Application Wizard 1.4.2
**
** Part of solution USBHostHIDKbd in project USBHostHIDKbd
**
** Comments:
**
** Important: Sections between markers "FTDI:S*" and "FTDI:E*" will be overwritten by
** the Application Wizard
*/
#include "vos.h"

void iomux_setup(void)
{
	/* FTDI:SIO IOMux Functions */
	unsigned char packageType;
	
	packageType = vos_get_package_type();
	
	if (packageType == VINCULUM_II_48_PIN)
	{
		// Debugger to pin 11 as Bi-Directional.
		vos_iomux_define_bidi(199, IOMUX_IN_DEBUGGER, IOMUX_OUT_DEBUGGER);
		// GPIO_Port_A_1 to pin 16 IO5 as Output  
		vos_iomux_define_output(16, IOMUX_OUT_GPIO_PORT_A_1);  
		// GPIO_Port_A_2 to pin 18 IO6 as Output  
		vos_iomux_define_output(18, IOMUX_OUT_GPIO_PORT_A_2);  
		// UART_TXD to pin 31 as Output.
		vos_iomux_define_output(31, IOMUX_OUT_UART_TXD);
		// UART_RXD to pin 32 as Input.
		vos_iomux_define_input(32, IOMUX_IN_UART_RXD);
		// UART_RTS_N to pin 43 as Output.
		vos_iomux_define_output(43, IOMUX_OUT_UART_RTS_N);
		// UART_CTS_N to pin 44 as Input.
		vos_iomux_define_input(44, IOMUX_IN_UART_CTS_N);
		// UART_DTR_N to pin 41 as Output.
		vos_iomux_define_output(41, IOMUX_OUT_UART_DTR_N);
		// UART_DSR_N to pin 36 as Input.
		vos_iomux_define_input(36, IOMUX_IN_UART_DSR_N);
		// UART_DCD to pin 33 as Input.
		vos_iomux_define_input(33, IOMUX_IN_UART_DCD);
		// UART_RI to pin 34 as Input.
		vos_iomux_define_input(34, IOMUX_IN_UART_RI);
		// UART_TX_Active to pin 35 as Output.
		vos_iomux_define_output(35, IOMUX_OUT_UART_TX_ACTIVE);	
	}
	/* FTDI:EIO */

}
