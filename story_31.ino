
int ledPin=12;
int ledPin2=11;
int ledPin3=10;
int ledPin4=5;
int ledPin5=4;
int ledPin6=3;

void setup()
{
    pinMode(ledPin,OUTPUT);  
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
    pinMode(ledPin4,OUTPUT);
  pinMode(ledPin5,OUTPUT);
    pinMode(ledPin6,OUTPUT);
}
void loop()
{  
    digitalWrite(ledPin,HIGH); 
    delay(1000);               
    digitalWrite(ledPin,LOW);  
    delay(0);               

    digitalWrite(ledPin2,HIGH);
    delay(1000);               
    digitalWrite(ledPin2,LOW);  
    delay(0);               
  
    digitalWrite(ledPin3,HIGH); 
    delay(1000);               
    digitalWrite(ledPin3,LOW);  
    delay(0); 
  
      digitalWrite(ledPin4,HIGH); 
    delay(1000);               
    digitalWrite(ledPin4,LOW);  
    delay(0);   
  
      digitalWrite(ledPin5,HIGH); 
    delay(1000);               
    digitalWrite(ledPin5,LOW);  
    delay(1000);   
  
      digitalWrite(ledPin4,HIGH); 
    delay(1000);               
    digitalWrite(ledPin4,LOW);  
    delay(0);   
  
      digitalWrite(ledPin3,HIGH); 
    delay(1000);               
    digitalWrite(ledPin3,LOW);  
    delay(0);   
} 
