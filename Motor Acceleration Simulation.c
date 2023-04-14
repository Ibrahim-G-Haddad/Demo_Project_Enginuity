// Code works with Arduino
int motorPin = 3;  

void setup(){
    
    pinMode(motorPin, OUTPUT);  
}

void loop(){
	motorAcceleration();
}

void motorAcceleration(){
  int delayTime = 50; //milliseconds between each speed step
  
  //Accelerates the motor
  for(int i = 0; i < 256; i++){ //goes through each speed from 0 to 255
    analogWrite(motorPin, i);   //sets the new speed
    delay(delayTime);           // waits for delayTime milliseconds
  }
  
  //Decelerates the motor
  for(int i = 255; i >= 0; i--){ //goes through each speed from 255 to 0
    analogWrite(motorPin, i);   //sets the new speed
    delay(delayTime);           // waits for delayTime milliseconds
  }
//Test//////
}
