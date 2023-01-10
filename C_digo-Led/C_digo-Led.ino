int Led = 22;

void setup() {
  pinMode(Led, OUTPUT); // Atribui o Led(pino 22) como saída.
}

void loop() {
  digitalWrite(pino, HIGH); // Acende o Led
  delay(500);
  digitalWrite(pino, LOW); // Apaga o Led
  delay(500);
}
