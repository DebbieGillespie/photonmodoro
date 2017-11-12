int led = D7;
int button = D0;
int pullup = D2;
int ledOn = LOW;
int stateChangable = HIGH;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pullup, OUTPUT);
  digitalWrite(pullup, HIGH);
  pinMode(button, INPUT_PULLDOWN);
}

void loop() {

    if(digitalRead(button)) {
        if(stateChangable) {
            ledOn = toggleState(ledOn);
            stateChangable = LOW;
        }
    } else {
        stateChangable = HIGH;
    }

    digitalWrite(led, ledOn);
}

int toggleState(int currentState) {
  if (currentState) {
    return LOW;
  }
  else {
    return HIGH;
  }
}
