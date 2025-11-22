# Etchasketch Concept
This project is designed to be a concept of what an etchasketch could be. It'll allow for modern features that aid artist ability, and truly allow them to *Draw the Future*.

## Requirements
In no particular order, the requirements are as follows:
1. Display has at least 3 colours (white counts as a colour).
2. Display can update at least once per second.
3. Users can control the drawing cursor of the display using rotary inputs which read input a minimum of every 10ms*.
4. The product should be at most 77mm by 100mm by 40mm.
5. Users can save the current drawing on the display on a laptop.
6. Different devices can share a given drawing session to collaborate on designs.

*Note that the rate in which an input is processed is independent of the rate in which the screen will be updating.

## Specifications
* [1] E-Ink display capable of displaying 3 different colours.
* [1] Single button for cycling between colours.
* [2] E-Ink screen uses effective partial updating algorithm for reducing.
* [3] Two potentiometers for reading user inputs.
* [4] PCB has width of 100mm and length of 77mm.
* [5/6] PCB contains a [pre-certified WiFi module](https://www.adafruit.com/product/4201).
* [5/6] Desktop app for managing drawing sessions and saving drawing state.

## Component Selection
Sorted by sub-system.

### Processing
- [1x] [STM32G484QET6](https://www.mouser.ca/ProductDetail/STMicroelectronics/STM32G484QET6?qs=uwxL4vQweFOef65amZQ%252BrA%3D%3D)
- [2x] [Ceramic capacitor 100nF](https://www.mouser.ca/ProductDetail/TAIYO-YUDEN/MAJCH168BB7104KTEA01?qs=ZcfC38r4PovaTBrG0IdezQ%3D%3D)
- [1x] [Ceramic capacitor 4.7uF](https://www.mouser.ca/ProductDetail/TAIYO-YUDEN/LMK107BJ475KA-T?qs=PzICbMaShUfCoRlxZeLF0g%3D%3D)
- [3x] [Ceramic capacitor 1uF](https://www.mouser.ca/ProductDetail/Murata-Electronics/GCM188M8EH105KE08D?qs=ZcfC38r4Posf7JVKT9w1zw%3D%3D)
- [1x] [Ceramic capacitor 10nF](https://www.mouser.ca/ProductDetail/KYOCERA-AVX/06035A103JAT2A?qs=Cw3yY7soYCOJ7MBOLgA8ng%3D%3D)
- [2x] [Ceramic capacitor 6.8pF](https://www.mouser.ca/ProductDetail/KYOCERA-AVX/0603YA6R8CAT2A?qs=Q0wCMCRSJ1u%252BWh5kh2d1zQ%3D%3D)
- [2x] [Ceramic capacitor 20pF](https://www.mouser.ca/ProductDetail/KYOCERA-AVX/06031A200KAT2A?qs=vKkcnSRGkVsINiHJTia7rw%3D%3D)
- [1x] [Ferrite beads](https://www.mouser.ca/ProductDetail/TE-Connectivity-Sigma-Inductors/BMC-Q1E0000H?qs=IKkN%2F947nfDSkH2nnTPyEw%3D%3D)
- [1x] [Quartz 24MHz](https://www.mouser.ca/ProductDetail/KYOCERA-AVX/CX3225FB24000C0FZZH1?qs=Tc%252BHE9vUsnugTp3oEWKKRg%3D%3D)
- [1x] [Quartz 32.764kHz](https://www.mouser.ca/ProductDetail/Vishay-Dale/XT1312HHRXX32K76E?qs=jcD%2FCkGBYeMqyUz9UpSqCw%3D%3D)
- [1x] [Resistor 390Ω](https://www.mouser.ca/ProductDetail/Vishay-Beyschlag/MCT0603MD3900BP500?qs=sGAEpiMZZMtlubZbdhIBIONtIqra%2FA5Yq8ULjaRtKpA%3D)
- [3x] [Resistor 10kΩ](https://www.mouser.ca/ProductDetail/TE-Connectivity-Holsworthy/RA73F1J10KBTDF?qs=sGAEpiMZZMtlubZbdhIBIJBDgjsVQBFl0L0uqFOGEF8%3D)
- [1x] [Switch](https://www.mouser.ca/ProductDetail/EAO/19.03201.01?qs=sGAEpiMZZMvYP4PlKbaZF5wNPmZ5WaKxFLnfzSV3PvVIFzsx%252BXULUg%3D%3D)
- [1x] [Pushbutton](https://www.mouser.ca/ProductDetail/Soldered/101111?qs=%252BXxaIXUDbq05T1Vr5nLouw%3D%3D)

### Power
- The battery and switches and voltage protection

### Display
- Screen, controls for screen (pots and buttons)

### Connectivity
- WiFi module