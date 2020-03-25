const int LEDPINSIZE = 8;
const int LEDPINARRAY [LEDPINSIZE] = {5, 6, 7, 9, 10, 11};

void ledControlSetup() {
  for (int ledNumber = 0; ledNumber < LEDPINSIZE; ledNumber++) {
    pinMode(LEDPINARRAY[ledNumber], OUTPUT);
  }
}

void ledControlSetLedOn(int ledNumber) {
  digitalWrite(ledNumber, HIGH);
}

void ledControlSetLedOff(int ledNumber) {
  digitalWrite(ledNumber, LOW);
}

void ledControlSetAllLedsOn() {
  for (int ledNumber = 0; ledNumber < LEDPINSIZE; ledNumber++) {
    digitalWrite(LEDPINARRAY[ledNumber], HIGH);
  }
}

void ledControlSetAllLedsOff() {
  for (int ledNumber = 0; ledNumber < LEDPINSIZE; ledNumber++) {
    digitalWrite(LEDPINARRAY[ledNumber], LOW);
  }
}
