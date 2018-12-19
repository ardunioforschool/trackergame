int sensor = 4;
int buzzer = 5;
int LEDR = 6;
int LEDG = 7;
int reset = 9;

void setup() {
  Serial.begin(9600);
  digitalWrite(reset, LOW);
  pinMode(sensor, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(reset, OUTPUT);
}

void loop() {
  Serial.println(digitalRead(4));
  delay(100);
  if (digitalRead(4) == LOW)
  {
  digitalWrite(LEDG, HIGH);
  delay(100);
  digitalWrite(LEDG, LOW);
  }
  if (digitalRead(4) == HIGH)
  {
    digitalWrite(buzzer, HIGH);
    digitalWrite(LEDR, HIGH); 
    delay(100);
    digitalWrite(LEDR, LOW);
    digitalWrite(buzzer, LOW);
    digitalWrite(reset, HIGH);
  }
}

