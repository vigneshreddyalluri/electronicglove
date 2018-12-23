int pin1 = 4;
int pin2 = 5;
int pin3 = 6;
int pin4 = 7;
char pin='x';
int isObstacle = HIGH;
void setup() {
  pinMode(pin1, INPUT);
  pinMode(pin2, INPUT);
  pinMode(pin3, INPUT);
  pinMode(pin4, INPUT);
  Serial.begin(9600);
  
}

void loop() {
  int count=0;
   pin='x';
  while(1){
    if(digitalRead(pin1)==LOW){
      isObstacle = digitalRead(pin1);
      pin='1';
      break;
    }
    else if(digitalRead(pin2)==LOW){
      isObstacle = digitalRead(pin2);
      pin='2';
      break;
    }
    else if(digitalRead(pin3)==LOW){
      isObstacle = digitalRead(pin3);
      pin='3';
      break;
    }
    else if(digitalRead(pin4)==LOW){
      isObstacle = digitalRead(pin4);
      pin='4';
      break;
    }
    
  if (isObstacle == LOW)
  {
    count+=1;
  }
  else
  {
    break;
    
  }
  delay(200);
  }
  if(count>=2){
    if(pin=='1'){
      Serial.println("I AM IN DANGER");
    }
    else if(pin=='2'){
      Serial.println("I AM  HUNGRY");
    }
    else if(pin=='3'){
      Serial.println("I AM THIRSTY");
    }
    else if(pin=='4'){
      Serial.println("I AM UNABLE TO UNDERSTAND");
    }
    
  }
  else if(count>=1){
    if(pin=='1'){
      Serial.println("PLEASE HELP ME !");
    }
    else if(pin=='2'){
      Serial.println("I WANT FOOD");
    }
    else if(pin=='3'){
      Serial.println("GIVE ME WATER");
    }
    else if(pin=='4'){
      Serial.println("REPEAT IT AGAIN");
    }
   
  
}

}
   


