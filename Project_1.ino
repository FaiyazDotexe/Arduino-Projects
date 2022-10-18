/*16 Oct. 2022
For ICT Steam project, using automation
*/

// the setup function runs once when you press reset or power the board

#define trigPin 4
#define echoPin 2

float duration, distance;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(9, OUTPUT);
}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2)*0.0343;

  Serial.print("Distance =  ");
  if (distance >= 200 || distance <=2) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
    delay(500);
  }
  delay(500);


  for (distance <=30 && distance >20) {
    digitalWrite(9, HIGH);          
  }  

  for (distance <=20 && distance >10) {
    digitalWrite(10, HIGH);  
  }

  for (distance <=10 && distance >0) {
    digitalWrite(11, HIGH);
  }
  
  if { distance >30 || distance <=0)
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
  }




  /*digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
  delay(300);
  digitalWrite(10, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(10, LOW);    // turn the LED off by making the voltage LOW
  delay(300);
  digitalWrite(11, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  digitalWrite(11, LOW);    // turn the LED off by making the voltage LOW
  delay(300);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH); 
  delay(1000);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);  
  delay(300);   */                   // wait for a second
}
