
int ledPin=12;
int ledPin2=11;
void setup()
{
    pinMode(ledPin,OUTPUT);  
  pinMode(ledPin2,OUTPUT);//Set the digital 8 port mode, OUTPUT: Output mode
}
void loop()
{  
    digitalWrite(ledPin,HIGH); //HIGH is set to about 5V PIN8
    delay(1000);               //Set the delay time, 1000 = 1S
    digitalWrite(ledPin,LOW);  //LOW is set to about 5V PIN8
    delay(0);               //Set the delay time, 1000 = 1S

    digitalWrite(ledPin2,HIGH); //HIGH is set to about 5V PIN8
    delay(1000);               //Set the delay time, 1000 = 1S
    digitalWrite(ledPin2,LOW);  //LOW is set to about 5V PIN8
    delay(0);               //Set the delay time, 1000 = 1S
} 
