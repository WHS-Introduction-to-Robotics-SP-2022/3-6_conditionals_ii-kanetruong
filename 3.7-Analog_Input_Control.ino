int pin = A0;
//begin
void setup() {
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}
//first
void loop() {
  pin = analogRead(0);
  if(pin < 146){
  analogWrite(9,255);
  analogWrite(10,0);
  analogWrite(11, 200);
  
    //second
  }
  else{
  if(pin < 292){
  analogWrite(9,0);
  analogWrite(10,0);
  analogWrite(11, 255);
 //third
  }
  else{
  if(pin < 438){
  analogWrite(9,51);
  analogWrite(10,198);
  analogWrite(11, 255);
  
    //forth
  }
  else{
  if(pin < 584){
  analogWrite(9,0);
  analogWrite(10,255);
  analogWrite(11, 255);
  
    //fifth
  }
  else{
  if(pin < 730){
  analogWrite(9,0);
  analogWrite(10,255);
  analogWrite(11, 0);
  
    //sixth
  }
  else{
  if(pin < 876){
  analogWrite(9,255);
  analogWrite(10,0);
  analogWrite(11, 0);
 
    //seventh
    //end
  }
  else{
  if(pin < 1022){
  analogWrite(9,255);
  analogWrite(10,0);
  analogWrite(11, 255);}
    
  }
    
  }
    
  }
    
  }
    
  }
    
  }
  
}
