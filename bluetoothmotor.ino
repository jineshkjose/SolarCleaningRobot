// C++ code
//
void setup()
{
  pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
   Serial.begin(9600);
}

void loop()
{
  
   char inChar = (char)Serial.read();
  
  if(inChar=='a')
  {
  Serial.println("anti clock");
  
  
  digitalWrite(6, HIGH);
  digitalWrite(7,LOW);
  delay(5000); // Wait for 1000 millisecond(s)inChar=' ';
  }
  
  else if(inChar=='b')
  {
  Serial.println("motor off");
  
  digitalWrite(6, LOW);
  digitalWrite(7,LOW);
  delay(5000); // Wait for 1000 millisecond(s)
     inChar=' ';
  }
  else if(inChar=='c')
  {
  Serial.println("clock");
  digitalWrite(6, LOW);
  digitalWrite(7,HIGH);
  delay(5000); // Wait for 1000 millisecond(s)
     inChar=' ';
  }
  
  else
  {
    Serial.println("wrong selection");
     inChar=' ';
  }
    

}
