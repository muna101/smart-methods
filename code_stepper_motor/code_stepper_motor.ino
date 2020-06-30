#include <Stepper.h>

int PinA1 = 3;
int PinB1 = 4;
int PinC1 = 5;
int PinD1 = 6;

int PinA2 = 8;
int PinB2 = 9;
int PinC2 = 10;
int PinD2 = 11; 
 
void setup()
{
  pinMode(PinA1, OUTPUT);
  pinMode(PinB1, OUTPUT);
  pinMode(PinC1, OUTPUT);
  pinMode(PinD1, OUTPUT);

  pinMode(PinA2, OUTPUT);
  pinMode(PinB2, OUTPUT);
  pinMode(PinC2, OUTPUT);
  pinMode(PinD2, OUTPUT);

  
}
 
void loop()
{
  
   digitalWrite(3, HIGH);digitalWrite(4, LOW); digitalWrite(5, LOW); digitalWrite(6, LOW);  
  delay(1000);            
  digitalWrite(3, LOW);digitalWrite(4,HIGH); digitalWrite(5, LOW); digitalWrite(6, LOW);  
  delay(1000);  
  digitalWrite(3, LOW);digitalWrite(4,LOW); digitalWrite(5, HIGH); digitalWrite(6, LOW);  
  delay(1000); 
  digitalWrite(3, LOW);digitalWrite(4,LOW); digitalWrite(5, LOW); digitalWrite(6, HIGH); 
  delay(1000);
   digitalWrite(8, HIGH);digitalWrite(9, LOW); digitalWrite(10, LOW); digitalWrite(11, LOW);  
  delay(1000);            
  digitalWrite(8, LOW);digitalWrite(9,HIGH); digitalWrite(10, LOW); digitalWrite(11, LOW);  
  delay(1000);  
  digitalWrite(8, LOW);digitalWrite(9,LOW); digitalWrite(10, HIGH); digitalWrite(11, LOW);  
  delay(1000); 
  digitalWrite(8, LOW);digitalWrite(9,LOW); digitalWrite(10, LOW); digitalWrite(11, HIGH);
  delay(1000);
}
