# IOT-Weather-station-Airship
An IoT weather station airship is a type of instrument equipped with sensors and communication technology to collect meteorological data and transmit it in real-time. These airships are designed to be deployed into the atmosphere to gather information such as temperature, humidity, air pressure, wind speed, and air quality at various altitudes.

### Introduction:
Every person's existence involves a great deal of weather monitoring.Numerous problems arise as a result of the state of the environment in a number of industries, including construction, agriculture, and more. However, the quantifiable influence mostly happens in farming and business. Farmers might benefit from weather monitoring with the use of a weather monitoring system. A weather station is a technological breakthrough that uses amazing devices and sensors to collect data related to the weather.The objective of this project is to demonstrate how the Arduino microcontroller platform can be used to measure the temperature and humidity of your environment using a DHT22 sensor display. For this project, we will
be using the 16×2 LCD display module to display the temperature and humidity readings
gathered from the environment using the DHT22 temperature and humidity sensor.

### Components Required:
1. Arduino Uno <br>
2. DHT22 Temperature and humidity sensor< br>
3. 16×2 LCD <br>
4. Breadboard <br>
5. Jumper wires<br>
6. Resistor 1k

### Components Description:
1. Arduino Uno:<br>
The Arduino UNO is a standard board of Arduino. Arduino UNO is a microcontroller board based on the ATmega328P. It has 14 digital input/output pins (of which 6 can be used as PWM outputs),
6 analog inputs, a 16 MHz ceramic resonator, a USB connection, a power jack, an ICSP header and a reset button. It contains everything needed to support the microcontroller.


   ![Arduino](https://github.com/vaishpanse/IOT-Weather-station-Airship/assets/140835509/a8906527-c310-4a3a-a224-f3ce7c50b527)

2. DHT22 Sensor:<br>
It is a digital Humidity and Temperature sensor.Its temperature measuring range is from -40°C to +125°C with +-0.5 degrees accuracy also it has better humidity
measuring range, from 0 to 100% with 2-5% accuracy.

   ![DHT22](https://github.com/vaishpanse/IOT-Weather-station-Airship/assets/140835509/aec785c0-a035-4510-ab6d-5c6fe755d82d)

   Pin Description:<br>
    1. VCC - Positive voltage<br>
    2. DATA - Digital data pin (input/output)<br>
    3. NC- Not connected<br>
    4. GND - Ground

3. LCD :<br>
A 16×2 LCD display is an electronic device that is used to display data and messages. It includes 16 Columns & 2 Rows so it can display 32 characters (16×2=32) in total &
every character will be made with 5×8 (40) Pixel Dots.

   ![LCD](https://github.com/vaishpanse/IOT-Weather-station-Airship/assets/140835509/316115d9-4ffe-4d41-8700-9e5edaf635d4)

### Procedure:
1. Do all the connections as mentioned below:<br>
● LCD Connection:<br>
Pin 1(VSS) - GND <br>
Pin 2(VDD) - 5V <br>
Pin 3(Vo) - D8 pin of arduino <br>
Pin 4(RS) - D7 pin of arduino <br>
Pin 5(RW) - GND <br>
Pin 6(E) - D6 <br>
Pin 7-10 - No connection <br>
Pin 11 - D5 <br>
Pin 12 - D4 <br>
Pin 13 - D3 <br>
Pin 14 - D2 <br>
Pin 15 - 5V <br>
Pin 16 - GND 

● DHT22 Connection:<br>
VCC - 5V <br>
DATA - D9 pin of Ardunio <br>
GND - GND

2.For writing code Download Arduino IDE

3.Download libraries of LCD and DHT

4.After connecting all the components correctly write a code on IDE

5.Give power supply to Arduino and upload the code.

### Schematic:

![Schematic](https://github.com/vaishpanse/IOT-Weather-station-Airship/assets/140835509/6f808ca7-b280-491c-b58b-8816fc60f67f)

### Future scope:
● This weather monitoring system will monitor the temperature and humidity of the surrounding area.<br>
● This Arduino weather station system can be used to monitor the temperature of remote areas where you can not survive or stay. So, this weather station using arduino
 can help there.<br>
● This system can be used for measuring atmospheric conditions to provide information for weather forecasts and to study the weather and climate.<br>
● A simple home weather device can help you better maintain your home through the changing seasons and can help you safeguard your home from any kind of weather damage.<br>
● Monitoring of weather’s condition would help farmers with the help of a weather monitoring system.

   

