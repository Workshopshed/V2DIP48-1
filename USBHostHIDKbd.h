/*
** Filename: USBHostHIDKbd.h
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

#ifndef _USBHostHIDKbd_H_
#define _USBHostHIDKbd_H_

#include "vos.h"

/* FTDI:SHF Header Files */
#include "USB.h"
#include "USBHost.h"
#include "ioctl.h"
#include "UART.h"
#include "GPIO.h"
#include "stdlib.h"
#include "USBHID.h"
#include "USBHostHID.h"
/* FTDI:EHF */

/* FTDI:SDC Driver Constants */
#define VOS_DEV_USBHOST 0
#define VOS_DEV_UART 1
#define VOS_DEV_USBHOST_HID 2
#define VOS_DEV_GPIO_PORT_A 3
#define VOS_NUMBER_DEVICES 4
/* FTDI:EDC */

/* Default settings for UART interface */
#define DEF_UART_BAUD		UART_BAUD_9600
#define DEF_UART_DATA_BITS	UART_DATA_BITS_8
#define DEF_UART_FLOW		UART_FLOW_NONE
#define DEF_UART_STOP_BITS	UART_STOP_BITS_1
#define DEF_UART_PARITY		UART_PARITY_NONE

/* FTDI:SXH Externs */
/* FTDI:EXH */

#define GPIO_MODE_OUTPUT	1

#endif /* _USBHostHIDKbd_H_ */
