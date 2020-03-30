void buttonSetup(const int BUTTON_PIN) {
  pinMode(BUTTON_PIN, INPUT);
}

boolean buttonPressed(const int BUTTON_PIN) {
  int buttonState = digitalRead(BUTTON_PIN);
  // Is button pressed?
  if (buttonState == LOW) {
    return true;
  } else {
    return false;
  }
}
