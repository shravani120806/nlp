
#define led 11
//int input;
void setup()
{
  pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop()
{
 int pot =analogRead(A0);
  pot=map(pot,0,1023,0,255);
  analogWrite(led,pot);
  Serial.println(pot);
}