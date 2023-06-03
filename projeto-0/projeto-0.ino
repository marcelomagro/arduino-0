void setup() {
  pinMode(13, OUTPUT);//OUTPUT = Saída -- INPUT = Entrada
}

void loop() {
  digitalWrite(13, HIGH);//HIGH = Ligada(5v) -- LOW = Desligada(0v)
  delay(3000);
  digitalWrite(13, LOW);
  delay(3000);
}
