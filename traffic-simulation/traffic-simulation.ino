void setup() {
  Serial.begin(9600);
  stateMachineSetup();
}

void loop() {
  stateMachineLoop();
}
