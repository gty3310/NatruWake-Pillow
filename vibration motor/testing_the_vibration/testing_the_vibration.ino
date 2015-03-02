const int motorPin = 3;
int val=0;
void setup()
{
  Serial.begin(9600);
  pinMode(motorPin, OUTPUT);
}

void loop()
{
  val = Serial.read();
  analogWrite(motorPin, val);
  delay(1000);

}

