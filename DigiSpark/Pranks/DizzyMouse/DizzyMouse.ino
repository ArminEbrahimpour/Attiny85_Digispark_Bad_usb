#include<DigiKeyboard.h>

void setup() {
  // put your setup code here, to run once:
  #define KEY_TAB 43
  #define KEY_ARROW_RIGHT 0x4F
}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.println("main.cpl");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  for(int i = 0 ; i < 5 ; i++){
    DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT);
  }
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(200);
  for(int i =0 ; i < 3 ; i++){
    DigiKeyboard.sendKeyStroke(KEY_TAB, MOD_SHIFT_LEFT);
    DigiKeyboard.delay(300);
  }
  DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  for (int i = 0; i < 5 ; i++){
    DigiKeyboard.sendKeyStroke(KEY_ARROW_RIGHT);
  }
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyPress(KEY_SPACE);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  digitalWrite(1, HIGH);
  for(;;){
    // Zzzzzzzzzz
  }



  
}
