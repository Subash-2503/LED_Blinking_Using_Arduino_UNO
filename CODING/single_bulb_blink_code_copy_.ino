int led1=13;
void setup() 
{
 pinMode(13,OUTPUT);
}

void loop()
 {
digitalWrite(led1,HIGH);
delay(1000);
digitalWrite(led1,LOW);
delay(2000);
}
