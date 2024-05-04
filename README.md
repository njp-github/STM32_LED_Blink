# STM32_LED_Blink
STM32 Blue Pill (Arduino IDE) program for LED Blink and Serial Monitor Application

Prerequisites:
  - STM32 Blue Pill
  - ST-LINK/V2
  - USB-TTL Adapter
  - STM32 Software Suite installed and configured
  - Arduino IDE

STM32F103 Pinout - https://lh6.googleusercontent.com/wYhAmRIfTgBSWtNt7KT8db70NY2XtEbobHzeHcdPY3SFLKqqIdhgkFJfxikIP2G-J9E6-mFcK-SjpiPfQuUv9yWdaE79o6oB-nglBWmMOmzwL2evWBQ9_uPq08BurhDM0pPziF4

Use "HardwareSerial.h" library to activate USART2 and USART3.

Installing STM32 Add-on in Arduino IDE - https://www.sgbotic.com/index.php?dispatch=pages.view&page_id=48

Arduino IDE configurations (in the "Tools" menu):
  - Debug symbols and core logs: "None"
  - Optimize: "Smallest (-Os default)"
  - Board part number: "BluePill F103C8"
  - C Runtime Library: "Newlib Nano (default)"
  - Upload method: "STM32CubeProgrammer (SWD)"
  - USB support (if available): "None"
  - U(S)ART support: "Enabled (generic 'Serial)"
  - USB speed (if available): "Low/Full Speed"


