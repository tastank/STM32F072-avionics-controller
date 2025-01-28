This is an application meant to run on an STM32F072 which acts as a HID game controller when plugged into a computer's USB port. While it is a generic HID game controller and can be used for anything, it is intended to be used to control radios and other avionics devices in flight simulators. Eight of the connected buttons (S11-S18) control the device's mode, which determines which logical buttons are activated by two concentric rotary quadrature encoders (though the encoders are not yet implemented), which are used to e.g. select which radio the encoder will tune. The remaining buttons are treated as normal buttons and sent directly to the simulator to activate functions on the radio or GPS.

The majority of this application was generated by STM32CubeIDE. My main contributions include:
- Core/Src/main.c: The main program entry point and initialization
- Core/Src/stm23f0xx.c: Interrupt service routines, including the "main loop" (triggered by a 1ms interrupt from one of the STM32's timers)
- USB_DEVICE/App/usb_device.c: Exposed the ability to send HID reports to the main program files
- USB_DEVICE/App/usbd_custom_hid_if.c: the HID report descriptor
- USB_DEVICE/App/usbd_desc.c: Manufacturer string/product string 

To do list:
- Implement encoder reading and send appropriate signals to the computer
