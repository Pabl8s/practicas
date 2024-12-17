// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);//encende o led verde
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);//apaga o led verde
  delay(4000); // Wait for 4000 millisecond(s)
  digitalWrite(12, HIGH);//encende o led vermello
  digitalWrite(11, HIGH);//excita o rele que encende a bombilla
  delay(10000); // Wait for 10000 millisecond(s)
  digitalWrite(12, LOW);//apaga o led vermello
  digitalWrite(11, LOW);//apaga o rele que encende a bombilla
  delay(4000); // Wait for 4000 millisecond(s)
}
