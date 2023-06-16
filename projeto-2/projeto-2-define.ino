#define led_vermelho 8
#define led_amarelo 9
#define led_verde 10

void setup() {
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
}

void red(int tmp) {
  digitalWrite(led_vermelho, HIGH);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, LOW);
  delay(tmp*1000);
}

void green(int tmp) {
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, HIGH);
  delay(tmp*1000);
}

void yellow(int tmp) {
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, HIGH);
  digitalWrite(led_verde, LOW);
  delay(tmp*1000);
}

void loop() {
  red(7);
  green(9);
  yellow(2);
}
