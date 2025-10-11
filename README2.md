# Etch-a-sketch Concept

## High Level Features
- Draw images onto the screen
- Control X-axis and Y-axis of drawing cursor using input from two different potentiometers
- Change between 3 different colours using one button
- Clear the screen when shaken
- Wirelessly connect to computer to save and load drawings

## Low Level Requirements
### Draw images onto the screen
- Implement ribbon cable connector on etch-a-sketch PCB for connecting [E-Ink Display](https://www.adafruit.com/product/6382#technical-details)
- Develop a driver for communicating with the [SSD1683](https://www.laskakit.cz/user/related_files/ssd1683.pdf) via 4-wire SPI

### Control X-axis and Y-axis of drawing cursor using input from two different potentiometers
- Use 2 [Panel Mount 10K potentiometer](https://www.adafruit.com/product/562) with [these knobs](https://www.adafruit.com/product/2057) and connect them, such that each of them are wired into their own separate voltage divider circuit.
- Use the STM32G474RE's onboard ADC(s) to convert the analog voltage input into an X and Y coordinate on a 300x400 pixel screen.

### Change between 3 different colours using one button
- Implement circuit for pull-up resistor and button. Connect to a GPIO Input pin.
- Write firmware for reading GPIO input.
- Implement colour changing on SSD1683 driver.

### Clear the screen when shaken
- Implement circuitry necessary for housing a [ADXL343BCCZ-RL7](https://www.digikey.ca/en/products/detail/analog-devices-inc/ADXL343BCCZ-RL7/3542894) onboard.
- Write driver for interfacing with this accelerometer over 4-wire SPI.
- Implement screen clearing on SSD1683 driver (memory wipe).

### Wirelessly connect to comuter to save and load drawings
- Implement circuitry necessary for a button with a pull-up resistor connected to a GPIO input.
- Implement circuitry necessary for communicating with and programming a [nRF52832 Bluetooth Low Energy Module](https://www.adafruit.com/product/4077).
- Write driver for STM32G474RE for interfacing with the bluetooth module over SPI.

## System Design Notes

### MCU
- Use stm32g474ret3 lqfp64

### Power
- [CR2032 Coincell Battery Holder](https://www.digikey.ca/en/products/detail/te-connectivity-linx/BAT-HLD-001/1577235)

### Accelerometer
- Use ADXL343BCCZ-RL7
- Communicate with MCU via SPI 4-wire

### Display
- Use 4.2" 300x400 Tri-Color eInk / ePaper - Bare Display - SSD1683
- Use 2 Potentiometers for controlling the cursor coordinates
  - [Panel Mount 10K potentiometer (Breadboard Friendly) - 10K Linear](https://www.adafruit.com/product/562)
  - [Slim Metal Potentiometer Knob - 10mm Diameter x 15mm - T18](https://www.adafruit.com/product/2057)
  - Communicates with MCU via MCU's ADC
- Communicates with MCU via SPI 4-wire
- Communicates with external temperature sensor via I2C (optional)

### Bluetooth
- Use attachable HC06 Bluetooth Module
- Communicates with MCU via UART

<!-- ## Parts List
- 1x [STM32G474RET3-LQFP64](https://www.digikey.ca/en/products/detail/stmicroelectronics/STM32G474RET3/11590973)
- 1x [E-Ink Display](https://www.adafruit.com/product/6382#technical-details)
- 1x [24-pin FPC Connector](https://www.digikey.ca/en/products/detail/te-connectivity-amp-connectors/2-2495219-4/26862642)
- 2x [Panel Mount 10K potentiometer](https://www.adafruit.com/product/562)
- 2x [these knobs](https://www.adafruit.com/product/2057)
- 2x [Momentary Push Buttons](https://www.adafruit.com/product/504) (1 Red, 1 Green) with [Button Caps](https://www.adafruit.com/product/4228)
- 2x [10K Resistors](https://www.adafruit.com/product/2784) for pull-ups
- 1x [ADXL343BCCZ-RL7](https://www.digikey.ca/en/products/detail/analog-devices-inc/ADXL343BCCZ-RL7/3542894) accelerometer
- 1x [Adafruit Bluefruit LE SPI Friend - Bluetooth Low Energy (BLE)](https://www.adafruit.com/product/2633)
- 1x [CR2032 Coincell Battery Holder](https://www.digikey.ca/en/products/detail/te-connectivity-linx/BAT-HLD-001/1577235)
- 3x [0603B105K250XD 1uF Ceramic Capacitor (25V)](https://www.digikey.ca/en/products/detail/nextgen-components/0603B105K250XD/14670931)
- 3x [MBR0530 Diode](https://www.digikey.ca/en/products/detail/smc-diode-solutions/MBR0530/16692306)
- 1x [CDRH2D18/LDNP-470NC 47uH Inductor](https://www.digikey.ca/en/products/detail/sumida-america-components-inc/cdrh2d18-ldnp-470nc/3946958)
- 1X [NX3008NBKVL N-Type MOSFET](https://www.digikey.ca/en/products/detail/nexperia-usa-inc/NX3008NBKVL/9671435)
- 1x [RMCF0805FT2R20 2.2Ohms Resistor](https://www.digikey.ca/en/products/detail/stackpole-electronics-inc/RMCF0805FT2R20/1760344) -->

## Resources
- [E-Ink display datasheet](https://cdn-shop.adafruit.com/product-files/6382/6382+C22266-001+datasheet+ZJY400300-042CABMFGN-R.pdf)