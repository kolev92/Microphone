const int micPin = A0;
const int redLed = 3;
const int greenLed = 5;

int micVal;

void setup() {
  Serial.begin(9600);
  pinMode(redLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
}

void loop() {
  micVal = analogRead(micPin);

  if (micVal > 500) {
    digitalWrite(redLed, HIGH);
    digitalWrite(greenLed, LOW);
    delay(80);
  }
  else {
    digitalWrite(redLed, LOW);
    digitalWrite(greenLed, HIGH);
    delay(80);
  }
}
