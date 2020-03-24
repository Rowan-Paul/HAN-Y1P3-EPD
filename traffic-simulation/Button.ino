const int BUTTON_PIN = 4;

void buttonSetup() {
  pinMode(BUTTON_PIN, INPUT);
}

boolean buttonPressed() {
  int buttonState = digitalRead(BUTTON_PIN);
  // Is button pressed?
  if (buttonState == LOW) {
    Serial.println("Aan");
    return true;
  } else {
    Serial.println("Uit");
    return false;
  }
}
