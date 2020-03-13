
#define trigPin 12

#define echoPin 11


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);


Serial.begin (9600);

pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);


  
}

//void loop(){
//  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
//  delay(1000);                       // wait for a second
//  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
//  delay(1000);  
//}


// the loop function runs over and over again forever
void loop() {

  long duration, distance;
  
  digitalWrite(trigPin, LOW);
  
  delay(2);
  
  digitalWrite(trigPin, HIGH);
  
  delay(10);
  
  digitalWrite(trigPin, LOW);
  
  duration = pulseIn(echoPin, HIGH);
  
  distance = (duration/2) / 29.1;

  Serial.print("\n");

  Serial.print(distance);
  
  Serial.println(" cm");

  for(int i = 0; i < distance && distance < 200; i++){
      
      if (i / 2) Serial.print("'");

  }
  
  
  
  delay(500);

  
}
