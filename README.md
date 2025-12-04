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
[STM32G4 Hardware Configuration](https://www.st.com/resource/en/application_note/an5093-getting-started-with-stm32g4-series--hardware-development-boards-stmicroelectronics.pdf)
- [2x] [Ceramic capacitor 100nF](https://www.mouser.ca/ProductDetail/TAIYO-YUDEN/MAJCH168BB7104KTEA01?qs=ZcfC38r4PovaTBrG0IdezQ%3D%3D)
- [1x] [Ceramic capacitor 4.7uF](https://www.mouser.ca/ProductDetail/TAIYO-YUDEN/LMK107BJ475KA-T?qs=PzICbMaShUfCoRlxZeLF0g%3D%3D)
- [3x] [Ceramic capacitor 1uF (No CAD Found)](https://www.mouser.ca/ProductDetail/Murata-Electronics/GCM188M8EH105KE08D?qs=ZcfC38r4Posf7JVKT9w1zw%3D%3D)
- [1x] [Ceramic capacitor 10nF](https://www.mouser.ca/ProductDetail/KYOCERA-AVX/06035A103JAT2A?qs=Cw3yY7soYCOJ7MBOLgA8ng%3D%3D)
- [2x] [Ceramic capacitor 6.8pF (No CAD Found)](https://www.mouser.ca/ProductDetail/KYOCERA-AVX/0603YA6R8CAT2A?qs=Q0wCMCRSJ1u%252BWh5kh2d1zQ%3D%3D)
- [2x] [Ceramic capacitor 20pF](https://www.mouser.ca/ProductDetail/KYOCERA-AVX/06031A200KAT2A?qs=vKkcnSRGkVsINiHJTia7rw%3D%3D)
- [1x] [Ferrite beads (No CAD Found)](https://www.mouser.ca/ProductDetail/TE-Connectivity-Sigma-Inductors/BMC-Q1E0000H?qs=IKkN%2F947nfDSkH2nnTPyEw%3D%3D)
- [1x] [Quartz 24MHz (No CAD Found)](https://www.mouser.ca/ProductDetail/KYOCERA-AVX/CX3225FB24000C0FZZH1?qs=Tc%252BHE9vUsnugTp3oEWKKRg%3D%3D)
- [1x] [Quartz 32.764kHz](https://www.mouser.ca/ProductDetail/Vishay-Dale/XT1312HHRXX32K76E?qs=jcD%2FCkGBYeMqyUz9UpSqCw%3D%3D)
- [1x] [Resistor 390Ω](https://www.mouser.ca/ProductDetail/Vishay-Beyschlag/MCT0603MD3900BP500?qs=sGAEpiMZZMtlubZbdhIBIONtIqra%2FA5Yq8ULjaRtKpA%3D)
- [3x] [Resistor 10kΩ](https://www.mouser.ca/ProductDetail/TE-Connectivity-Holsworthy/RA73F1J10KBTDF?qs=sGAEpiMZZMtlubZbdhIBIJBDgjsVQBFl0L0uqFOGEF8%3D)
- [1x] [ST-Link Debugger (STLINK-V3MINIE)](https://www.mouser.ca/ProductDetail/STMicroelectronics/STLINK-V3MINIE?qs=sGAEpiMZZMuqBwn8WqcFUipNgoezRlc4V9M2rz8Us%252BfpLfxQapoDpA%3D%3D)
- [1x] [ST-Link debugger connector (LibraryLoader didn't work)](https://www.digikey.ca/en/products/detail/samtec-inc/FTSH-107-01-F-DV-K/2650001?gclsrc=aw.ds&gad_source=1&gad_campaignid=17336435733&gbraid=0AAAAADrbLlhq2OpxPLWAyTiYmFA62M8dN&gclid=CjwKCAiAuIDJBhBoEiwAxhgyFisN6L1oPr3EJV2HRn68eJmM_TwOISw0mEKeCH2g0jNCqzJe0RDupRoCn4cQAvD_BwE)
- [1x] [STM32G484QET6](https://www.mouser.ca/ProductDetail/STMicroelectronics/STM32G484QET6?qs=uwxL4vQweFOef65amZQ%252BrA%3D%3D)
- [1x] [Switch (No CAD Found)](https://mou.sr/4ixqZ2V)
- [1x] [Pushbutton](https://www.mouser.ca/ProductDetail/CK/PTS125SM73SMTR21M-LFS?qs=t7xnP681wgVp4NpaUUvA%252Bw%3D%3D)

### Power
- [1x] [CR2032 Battery](https://www.mouser.ca/ProductDetail/Murata-Electronics/CR2032?qs=gTYE2QTfZfQ%2FQrgScp89FQ%3D%3D)
- [1x] [CR2032 Connector](https://www.mouser.ca/ProductDetail/Renata/SMTU2032-C?qs=UxeAxwACbqkmlMDdDbz%2FoA%3D%3D)
- [1x] [Power on LED Green](https://www.mouser.ca/ProductDetail/ams-OSRAM/KT-EELP41.12-S2U1-25-2X4X-5-R18?qs=sGAEpiMZZMvVL5Kk7ZYykaXDR74jB6yftoFsk4g727SHxqbUeiiZww%3D%3D)
- [1x] [Resistor 100Ω (for LED) (No CAD Found, Not Requested)](https://www.mouser.ca/ProductDetail/TE-Connectivity-Holsworthy/RT73F1J100RBTD?qs=sGAEpiMZZMtlubZbdhIBIOStsStSd9IEZF4WybNbkN0%3D)
- [1x] [Ceramic capacitor 10uF](https://www.mouser.ca/ProductDetail/KYOCERA-AVX/0603YD106MAT2A?qs=%252BdQmOuGyFcGTGabFXpuZrg%3D%3D)

### Display
[Screen's circuit diagram (Make manually)](https://cdn-shop.adafruit.com/product-files/6393/P6393+C22273-001_datasheet_ZJY296152-0266EABMFGN-R.pdf)
- [1x] [E-Ink display tri-colour 2.66In diagonal](https://www.adafruit.com/product/6393)
- [9x] [Ceramic capacitor 1uF](https://www.mouser.ca/ProductDetail/TAIYO-YUDEN/MAJCT168BB7105KTEA01?qs=ZcfC38r4PotKRnvquyYkSA%3D%3D)
- [1x] [Resistor 2.2Ω (No CAD Found, Not Requested)](https://www.mouser.ca/ProductDetail/Wurth-Elektronik/560112116088?qs=mELouGlnn3eIPFCFgc7e7A%3D%3D)
- [3x] [Diode](https://www.mouser.ca/ProductDetail/onsemi/MBR0530T1G?qs=3JMERSakeboS%2FFOxJUMWeg%3D%3D)
- [1x] [NMOS](https://www.mouser.ca/ProductDetail/Nexperia/NX3008NBKS115?qs=N31o%252Bt096gvSMWdFEcaa8A%3D%3D)
- [1x] [Inductor 47uH (No CAD Found, Not Requested)](https://www.mouser.ca/ProductDetail/Sumida/CDRH2D18-LDNP-470NC?qs=mT6umqgwvA1P4peHEoEcxg%3D%3D)
- [1x] [Screen connector (Downloaded, Add Manually)](https://www.digikey.ca/en/products/detail/w%C3%BCrth-elektronik/687124149022/5047796)

### Controls
- [1x] [Accelerometer](https://www.mouser.ca/ProductDetail/Analog-Devices/ADXL345BCCZ?qs=WIvQP4zGanhoa7YOkGtvEg%3D%3D)
- [1x] [Ceramic capacitor 100nF](https://www.mouser.ca/ProductDetail/TAIYO-YUDEN/MAJCH168BB7104KTEA01?qs=ZcfC38r4PovaTBrG0IdezQ%3D%3D)
- [1x] [Tantalum capacitor 1uF](https://www.mouser.ca/ProductDetail/KYOCERA-AVX/TACL105K010FTA?qs=sGAEpiMZZMtZ1n0r9vR22f0Jgorj1M1u11EugVUWwzY%3D)
- [2x] [Potentiometer 10KΩ (Create Manually)](https://www.adafruit.com/product/3395)
- [2x] [Potentiometer cap](https://www.adafruit.com/product/2057)
- [2x] [Pushbutton](https://www.mouser.ca/ProductDetail/CK/PTS125SM73SMTR21M-LFS?qs=t7xnP681wgVp4NpaUUvA%252Bw%3D%3D)
- [2x] [Resistor 10kΩ](https://www.mouser.ca/ProductDetail/TE-Connectivity-Holsworthy/RA73F1J10KBTDF?qs=sGAEpiMZZMtlubZbdhIBIJBDgjsVQBFl0L0uqFOGEF8%3D)

### Connectivity
- [1x] [WiFi Module (Make Manually, Base off of pin headers)](https://www.adafruit.com/product/4201)
- [3x] [Pin header (Sets of 4)](https://www.mouser.ca/ProductDetail/HARTING/14120416050000?qs=sGAEpiMZZMvlX3nhDDO4ADo1TeYw%2F5hz1M8q0I2khik%3D)