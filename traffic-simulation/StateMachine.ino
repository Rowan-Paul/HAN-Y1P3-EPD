void stateMachineSetup() {
  buttonSetup();
  ledControlSetup();
}

void stateMachineLoop() {
  if (buttonPressed(4 /* or 8 */)) {
    // check if all other lights are red and change light to green
    Serial.println("Knop ingedrukt");
  }
}
