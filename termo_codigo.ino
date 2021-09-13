float V= 0.0;
float T=0.0;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  Serial.begin(9600);

}

void loop() 
{
  // put your main code here, to run repeatedly:
  V = analogRead(A0);
  T= ((V*145)/1023);
  Serial.print("La Temperatura es: ");
  Serial.print(T);
  Serial.println("°C");
  delay(1000);
}
