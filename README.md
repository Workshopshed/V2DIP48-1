# V2DIP48-1
V2DIP48-1 Firmware for a HID Keyboard

Based on the USBHostHIDKbd example that is installed with the FTDI Vinculum IDE 2.0.2-SP2 but with the IO Multilplexor settings corrected for the V2DIP48-1 1.1 USB Host module.

Swapped the parameters for usbhost_init so that the second USB port was used as that is what is wired up on this module.

`usbhost_init(-1, VOS_DEV_USBHOST_2, &usbhostContext);`

Added UART ioctl request to open_drivers and passed the defaults in via USBHostHIDKbd.h note that flow control has been swapped to "None" so that you don't need to have a MCU connected to debug/test the code.

Both green lights will flash if it is enumerating, just one light with flash of there is an issue with one of the commands. See code for details.

The data from sent out on the serial is the 8 binary values raw HID data from your keyboard.

Note, does not currently support keyboard lights as that data would be sent from the MCU back to the  USB Host.
