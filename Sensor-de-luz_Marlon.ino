const int LDR = A0;
const int r = 13;
const int y = 12;
const int g = 11;
int leitura = 0;

void setup()
{
  pinMode(LDR, INPUT);
  pinMode(r, OUTPUT);
  pinMode(y, OUTPUT);
  pinMode(g, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  leitura = analogRead(LDR);
  Serial.println(leitura);

  if(leitura < 100) {
    digitalWrite(r, HIGH);
    digitalWrite(y, LOW);
    digitalWrite(g, LOW);
  }
  else if(leitura < 500 && leitura >= 101) {
    digitalWrite(r, LOW);
    digitalWrite(y, HIGH);
    digitalWrite(g, LOW);
  }
  else if(leitura >= 500) {
    digitalWrite(r, LOW);
    digitalWrite(y, LOW);
    digitalWrite(g, HIGH);
  }

  delay(10);
}
