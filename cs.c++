//asd
int red_buttonstate =4;
int blue_buttonstate =3;
int green_buttonstate =2;
void setup() {
 pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  
  pinMode(9, OUTPUT);
  pinMode (8,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() 
{
red_buttonstate = digitalRead(4);
  blue_buttonstate = digitalRead(3);
 green_buttonstate = digitalRead(2);
  
  if (red_buttonstate == HIGH) {
    
    digitalWrite(9, HIGH);
  } else {
    
    digitalWrite(9, LOW);
  }
  delay(10); // 
if (green_buttonstate == HIGH) {
    
    digitalWrite(7, HIGH);
  } else {
    
    digitalWrite(7, LOW);
  }
  delay(10); // 
  if (blue_buttonstate == HIGH) {
    
    digitalWrite(8, HIGH);
  } else {
    
    digitalWrite(8, LOW);
  }
  delay(10); // 
}
  
