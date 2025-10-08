# Etch-A-Sketch-Concept

## Core Features
- Uses a STM32G4xx as an MCU (with FreeRTOS)
- E-Ink screen for displaying content
  - [4.2" 300x400 Tri-Color eInk / ePaper - Bare Display - SSD1683](https://www.adafruit.com/product/6382)
- Potentiometers for controlling x-axis and y-axis of pen coordinates
  - [Panel Mount 10K potentiometer (Breadboard Friendly) - 10K Linear](https://www.adafruit.com/product/562)
  - [Slim Metal Potentiometer Knob - 10mm Diameter x 15mm - T18](https://www.adafruit.com/product/2057)
- Shake detection for erasing data
  - [ADXL343BCCZ-RL7](https://www.digikey.ca/en/products/detail/analog-devices-inc/ADXL343BCCZ-RL7/3542894) [[Datasheet](https://www.analog.com/media/en/technical-documentation/data-sheets/ADXL343.pdf)]
- Power via CR203
  - [Single CR2032 / 20mm Coin Cell Battery Holder with Switch](https://www.adafruit.com/product/4856)
  - Implement a sleep mode for the device

## Why Choose Potentiometers over Rotary Encoders?
When deciding which knob input to use, I was torn between the chose of potentiometers or rotary encoders.More specifically, I was debating between the use of the [Panel Mount 10K potentiometer (Breadboard Friendly) - 10K Linear](https://www.adafruit.com/product/562) by Adafruit and the [Rotary Encoder + Extras](https://www.adafruit.com/product/377?srsltid=AfmBOop5DxCaqUYnVy1SkmyahhtAul5qqD05KIC7WQzzpXI21l9Knx5w) by Adafruit. Both have their own pros and cons that I'll list below:
| Component | Pros | Cons |
| ---------------- | ---------------- | ---------------- |
| Potentiometer | - Easy to control using an ADC</br>- Automatically stores the coordinates</br>- T18 connect is compatible with premium looking metal potentiometer caps | - Roughly 270° of rotation rather than a full 360° rotation</br>- Less control over sensitivity of rotational inputs |
| Rotary Encoder | - Allows for >360° rotation</br>- Package already comes with knob caps<br>- Allows for more sensitivity control | - Difficult to control</br>- Doesn't automatically store the last inputs coordinates</br>- D-shaft connector isn't compatible with premium metal connectors I want to use |

Ultimately I chose to use potentiometers over rotary encoders due to their ease of use and compatibility with the knob caps I wanted to use. Choosing a component based on the knob caps may sound silly, but I want this project to look premium and feel ergonomic. The sacrifices made have minimal effect on the overall functionality. With that said, I believe that the overall feel and usability of the product will be greatly increased through these knob caps.

## Optional Features
- Colour selection (Black, Red, White)
  - Default colour is black but by pressing the function you can switch between black, red and white

- Desktop application interfacing via bluetooth
  - Function button for saving drawing data to computer
  - Desktop application for reading this data and then storing it in a txt file
  - When etch-a-sketch is blank, function button loads previous drawing
  - Include pin headers on the PCB for an attachable HC06 Bluetooth module
  - Potential expansion could include multi user canvases

## Firmware
- Makefile project created by STM32CubeMX
- Use FreeRTOS for adding concurrency

## Hardware
Below is a list of stuff to include on the main PCB
- 1 STM32G474RET3 LQFP48 MCU
  - Note that I'll use the onboard clock
- 2 Potentiometers
- 1 Accelerometer
- Pin headers a debugger board connector (One of the Alumapower debugger boards)
- Ribbon cable connector for E-Ink screen
- Pin headers for HC06 Bluetooth Module
- Two function buttons using MCU's internal pull-down resistors
- Passive components like resistors and capacitors (TBD)

![Etch-a-Sketch Circuit Board Diagram]("./images/etchasketch_circuit_board_diagram.jpeg")


## Mechanical
I'll use Fusion360 and make a simple box to house all the electronics. 

<!-- ## Development Timeline
As of September 28, 2025, there are 10 weeks and 2 days until the project must be complete. The timeline for this project is listed below

### Week 1 - Planning and basic code
- Get planning document reviewed by experienced team member
- Setup project template
  - FreeRTOS and STM32G474RE
  - STM32 Makefile project
  - Write driver for potentiometer control
- Order necessary prototyping equipment
  - STM32G474RE Dev Board (1)
  - Panel Mount 10K potentiometer (2)
  - Slim Metal Potentiometer Knob - 10mm Diameter x 15mm - T18 (2)
  - 4.2" 300x400 Tri-Color eInk / ePaper - Bare Display - SSD1683 (1)
  - ADXL343 - Triple-Axis Accelerometer (+-2g/4g/8g/16g) w/ I2C/SPI - STEMMA QT / Qwiic (1)

### Week 2 - Prototyping
- Design breakout board for prototyping with E-Ink display
  - One side contains a connector for the ribbon cable and the other side contains pin headers.
- Write driver for interfacing with the accelerometer

Weeks 3 and beyond will be decided as of Week 1. -->