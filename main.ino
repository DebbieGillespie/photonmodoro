int led = D7;
int button = D0;
int pullup = D2;
int val = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pullup, OUTPUT);
  digitalWrite(pullup, HIGH);
  pinMode(button, INPUT_PULLDOWN);
}

void loop() {
    val = digitalRead(button);

    if(val == HIGH) {
        digitalWrite(led, HIGH);
    } else {
      digitalWrite(led, LOW);
    }
}
