int adc = 0;
int pwm = 0; 

void setup() 
{
 Serial.begin(9600);
 pinMode(A0, OUTPUT); 

} // end setup 

void loop() 
{
  adc = analogRead(A0); // 0 5V 0 1023
  Serial.println("Hello World!");
  pwm = map(adc, 0, 1023, 0, 255);
  Serial.println(adc);
  Serial.println(pwm);
  
  delay(600);

}
