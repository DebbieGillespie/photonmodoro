int led = D7;
int button = D0;
int pullup = D2;
int ledOn = LOW;
int toggle = LOW;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pullup, OUTPUT);
  digitalWrite(pullup, HIGH);
  pinMode(button, INPUT_PULLDOWN);
}

void loop() {

    if(digitalRead(button)) {
        toggle = HIGH;
    } else {
        toggle = LOW;
    }

    digitalWrite(led, ledOn);

    if(toggle) {
        ledOn = toggleState(ledOn);
        toggle = LOW;
    }

    delay(1);
}

int toggleState(int currentState) {
  if (currentState) {
    return LOW;
  }
  else {
    return HIGH;
  }
}
