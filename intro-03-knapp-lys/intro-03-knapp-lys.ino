int knapp = 1;
int led = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  Serial.println("Programmet har starta.");
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
}
