const int LED=13;  //onboard arduino LED pin is 13

void setup()
{
  pinMode(LED,OUTPUT);

  Serial.begin(9600);
}

void loop() 
{
  int Temperature = analogRead(A0);    // sensor connected to Arduino Analog pin A0
  int Temperature_Temp = (( Temperature/1024.0 )*5000 ) / 10;  // Convert the analog value to temperature in degrees Celsius

  Serial.print("Temperature: ");
  Serial.print(Temperature_Temp);
  Serial.println(" °C");
  
if(Temperature_Temp < 30) // Check if the temperature is below 30 degrees Celsius
{
  digitalWrite(LED,HIGH);
  delay(250);
  digitalWrite(LED,LOW);
  delay(250);
}
else
{
  digitalWrite(LED,HIGH);
  delay(500);
  digitalWrite(LED,LOW);
  delay(500);
}
}
