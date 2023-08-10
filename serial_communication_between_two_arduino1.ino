
int botton = 7;
bool bottonValue = LOW;
char x;

void setup() {
  
  pinMode(botton, INPUT_PULLUP);
  Serial.begin(9600);
  
}

void loop() 
{

  bottonValue = digitalRead(botton);

  switch (bottonValue)
  {
   case HIGH:
     Serial.println("H");
   break;

   case LOW:
      Serial.println("L");
   break;

   default:
   break; 
  }

}  