int led = 13;
char x;

void setup() 
{
  
  pinMode(led, OUTPUT);
  Serial.begin(9600); 
  
}

void loop() 
{

  if(Serial.available()>0){
   
    x = Serial.read();

   switch (x){
   case 'L':
      digitalWrite(led, LOW);
   break;
    
   case 'H':
     digitalWrite(led, HIGH);
   break;

   default:
   break; 
  }
   }

}