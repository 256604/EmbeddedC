Build | Cppcheck | Codacy
----- | -------- | ------
[![Compile-Linux](https://github.com/256604/EmbeddedC/actions/workflows/Build.yml/badge.svg)](https://github.com/256604/EmbeddedC/actions/workflows/Build.yml) | [![Cppcheck](https://github.com/256604/EmbeddedC/actions/workflows/CodeQuality.yml/badge.svg)](https://github.com/256604/EmbeddedC/actions/workflows/CodeQuality.yml) | [![Codacy Badge](https://app.codacy.com/project/badge/Grade/ed0f9216597a4e67bca06f300c95be67)](https://www.codacy.com/gh/256604/EmbeddedC/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=256604/EmbeddedC&amp;utm_campaign=Badge_Grade) |
# CASE STUDY: SEAT TEMPERATURE CONTROL USING AVR PROGRAMMING(Atmegha 328)
# Activity 1 

#              1.To monitor whether the seat is occupied or not.
#              2.To check the status of heater. 
#              3.Indicate it using LED actuator.

Inputs/Outputs | Description | Port pin used 
-------------- | ----------- | -------------
Input 1-Switch |Switch that gets **closed** when the person occupies the seat inside the car|B0
Input 2-Switch |Switch that gets **closed** when the person turns ON the heater|B6
Output 1-LED   |LED **glows** when both the inputs are high(i.e B0 and B1)|B5

# Activity 2

#               1.To interface temperature sensor with microcontroller. 
#               2.To read the temperature value set by the user.
#               3.To convert the Analog value of temperature to digital value.

Inputs/Outputs | Description | Port pin used 
-------------- | ----------- | -------------
Input 1-Temperature sensor |Temperature sensor to **set** the seat temperature by the user |C0

# Activity 3

#               1.To generate PWM pulses with varying duty cycle based on the temperature value set by the user.

Inputs/Outputs | Description | Port pin used 
-------------- | ----------- | -------------
Output 1-Oscilloscope |Oscilloscope to **view** the PWM pulse corresponding to temperature value |B1

# Activity 4

#               1.To Send the temperature data to the serial monitor using USART communication protocol.

Inputs/Outputs | Description | Port pin used 
-------------- | ----------- | -------------
Output 1-Serial monitor |Serial monitor to **view** the temperature value |-

# Simulation Result

# Circuit in OFF condition

![image](https://github.com/256604/EmbeddedC/blob/main/simulation/Seat_heat_OFF.png)

# Circuit in ON condition

![image](https://github.com/256604/EmbeddedC/blob/main/simulation/Seat_heat__ON.png)

