void stateMachineSetup() {
  buttonSetup(4);
  buttonSetup(8);
  ledControlSetup();
}

void stateMachineLoop() {
  if (buttonPressed(4)) {
    // check if all other lights are red and change light to green
    Serial.println("Button 1 presssed");
    ledControlSetLedOn(5);
    ledControlSetLedOff(7);
  } else if (buttonPressed(8)) {
    // check if all other lights are red and change light to green
    Serial.println("Button 2 pressed");
    ledControlSetLedOn(9);
    ledControlSetLedOff(11);
  } else {
    ledControlSetLedOff(5);
    ledControlSetLedOn(7);
    ledControlSetLedOff(9);
    ledControlSetLedOn(11);
  }
}
