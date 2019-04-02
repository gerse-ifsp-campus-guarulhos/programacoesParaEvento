char val;

void setup() 
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
}

void loop() 
{
  if(Serial.available())
  {
    val=Serial.read();
  }
  
  if(val=='B') digitalWrite(6,1);
  else digitalWrite(6,0);
  
  if(val=='F') 
  {
    digitalWrite(10,1);
    digitalWrite(9,1);
    }
  
  if(val=='R') 
  {
    digitalWrite(10,1);
    digitalWrite(9,0);
  }
  
  if(val=='L') 
  {
    digitalWrite(10,0);
    digitalWrite(9,1);
  }
  if(val!='F' && val!='R' && val!='L' && val!='G' && val!='I') 
  {
    digitalWrite(10,0);
    digitalWrite(9,0);
  }
  if(val=='I') 
  {
    digitalWrite(10,1);
    analogWrite(9,120);
  }
  if(val=='G') 
  {
    analogWrite(10,120);
    digitalWrite(9,1);
  }

 }
