const int TRAFFIC_LIGHT1_DATA_PIN = 4;
const int TRAFFIC_LIGHT2_DATA_PIN = 8;

// state of traffic lights
String trafficLight1 = "RED";
String trafficLight2 = "RED";

int greenLightInterval = 50000;
unsigned long int greenLightTimer = 0 - greenLightInterval;

void stateMachineSetup() {
  buttonSetup(4);
  buttonSetup(8);
  ledControlSetup();

  // set traffic lights to red
  setTrafficLightRed("trafficLight1");
  setTrafficLightOrange("trafficLight2");
}

void stateMachineLoop() {
  if (checkTrafficLightsRed()) {
    // check if a button is pressed
    if (buttonPressed(TRAFFIC_LIGHT1_DATA_PIN)) {
      setTrafficLightGreen("trafficLight1");

      //Serial.println("Button 1 pressed");
    } else if (buttonPressed(TRAFFIC_LIGHT2_DATA_PIN)) {
      setTrafficLightGreen("trafficLight2");

      //Serial.println("Button 2 pressed");
    }
  }
}
