
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(41, INPUT);
  pinMode(52, INPUT);
  pinMode(51, INPUT);
  pinMode(50, INPUT);
  pinMode(45, OUTPUT);
  pinMode(43, OUTPUT);
  pinMode(42, OUTPUT);
  pinMode(40, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int motorpin1 = 1;
  int motorpin2 = 1;
  int motorpin3 = 1;
  int motorpin4 = 1;
  motorpin1 = digitalRead(41);
  motorpin2 = digitalRead(52);
  motorpin3 = digitalRead(51);
  motorpin4 = digitalRead(50);


  if (motorpin1 == 0) {
    digitalWrite(40, HIGH);
      
  }
  if (motorpin1 == 1) {
    digitalWrite(40, LOW);
  }



  if (motorpin2 == 0) {
    digitalWrite(45, HIGH);
       
  }
  if (motorpin2 == 1) {
    digitalWrite(45, LOW);
  }


  if (motorpin3 == 0) {
    digitalWrite(42, HIGH);
   
  }
  if (motorpin3 == 1) {
    digitalWrite(42, LOW);
  }

  
 if (motorpin4 == 0) {
    digitalWrite(43, HIGH);
     
  }
  if (motorpin4 == 1) {
    digitalWrite(43, LOW);
  }
}
