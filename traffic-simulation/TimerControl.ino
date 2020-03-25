boolean timerIsPassed(unsigned long timer, unsigned long interval) {
  return millis() - timer >= interval;
}

unsigned long timerReset() {
  return millis();
}
