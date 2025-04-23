#define RGB_RED 11
#define RGB_BLUE 10
#define RGB_GREEN 9
#define POTENTIOMETER A0

void digitalWriteRGB(byte red, byte blue, byte green)
{
  digitalWrite(RGB_RED, red);
  digitalWrite(RGB_BLUE, blue);
  digitalWrite(RGB_GREEN, green);
}

void setup()
{
  pinMode(RGB_RED, OUTPUT);
  pinMode(RGB_BLUE, OUTPUT);
  pinMode(RGB_GREEN, OUTPUT);
}

void loop()
{
  int potentiometerValue = analogRead(POTENTIOMETER);
  int mode = map(potentiometerValue, 0, 1023, 0, 6);
  
  switch (mode) {
    case 0:
      digitalWriteRGB(HIGH, LOW, LOW);
      break;
    case 1:
      digitalWriteRGB(LOW, HIGH, LOW);
      break;
    case 2:
      digitalWriteRGB(LOW, LOW, HIGH);
      break;
    case 3:
      digitalWriteRGB(HIGH, HIGH, LOW);
      break;
    case 4:
      digitalWriteRGB(HIGH, LOW, HIGH);
      break;
    case 5:
      digitalWriteRGB(LOW, HIGH, HIGH);
      break;
    case 6:
      digitalWriteRGB(HIGH, HIGH, HIGH);
      break;
    default:
      digitalWriteRGB(LOW, LOW, LOW);
      break;
  }
}
