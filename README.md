This is an application meant to run on an STM32F072 which acts as a HID game controller when plugged into a computer's USB port. While it is a generic HID game controller and can be used for anything, it is intended to be used to control radios and other avionics devices in flight simulators. Eight of the connected buttons (S11-S18) control the device's mode, which determines which logical buttons are activated by two concentric rotary quadrature encoders (though the encoders are not yet implemented), which are used to e.g. select which radio the encoder will tune. The remaining buttons are treated as normal buttons and sent directly to the simulator to activate functions on the radio or GPS.

To do list:
- Implement encoder reading and send appropriate signals to the computer
