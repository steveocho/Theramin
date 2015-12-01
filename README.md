# Theremin
**About**

This repository gathers together current open source information concerning audio amplification, arduino programming of serial input and output, and sensor analysis into a fun project that imitates a Theremin but with more ease of use.

We hope to see it expanded on and possibly made into a product that can be enjoyed inside and outside of the open source community.

**Code**

pitches.h - Defined pitch constants found on the Arduino site:
https://www.arduino.cc/en/Tutorial/ToneMelody?from=Tutorial.Tone

theremin.ino - Arduino file that connects sensor values to output duration and distance in cm.

**Parts List**

* Capacitors (x2) - 1 uF each
* Resistor (x3)
* MOSFET (2N7000)
* Arduino Microcontroller (Uno)

**Audio Amplifier Circuit**

![](http://i.cmpnet.com/audiodesignline/2010/discrete_audio_amplifier_basics_fig9.13.jpg)

**Procedure**

HKN Open Source Project

**TODO**
* Implement volume control via sensor
* Design and optimize amplifier circuit specialized to this project
