byte sensorPin = 3;
byte indicator = 12;

void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(indicator, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (digitalRead(sensorPin) == HIGH) {
    Serial.println("Intrusion detecte");
    digitalWrite(indicator, HIGH);
  }
  if (digitalRead(sensorPin) == LOW) {
    Serial.println("Pas de présence");
    digitalWrite(indicator, LOW);
  }
}
