// Arduino pin numbers
const int SW_pin = 13; // digital pin connected to switch output
const int X_pin = 1; // analog pin connected to X output
const int Y_pin = 2; // analog pin connected to Y output
int Y = 513;
int X = 504;
int S = 1;



void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  //Serial.begin(115200);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop() {
  S = digitalRead(SW_pin);
  X = analogRead(X_pin);
  Y = analogRead(Y_pin);

  if ( X >= 1015 && Y >= 258 && Y <= 768) {
    //Serial.print("Up");
    digitalWrite(5, LOW);
    delay(1);
    digitalWrite(3, LOW);
    delay(50);
    digitalWrite(5, HIGH);
    delay(1);
    digitalWrite(3, HIGH);


  }

  if ( X >= 758 && X <= 1023 && Y >= 0 && Y <= 258) {
    //Serial.print("Upleft");
    digitalWrite(5, LOW);
    delay(5);
    digitalWrite(5, HIGH);
  }

  if ( X >= 255 && X <= 758 && Y <= 8) {
    //Serial.print("Left");
    digitalWrite(5, LOW);
    delay(1);
    digitalWrite(2, LOW);
    delay(50);
    digitalWrite(5, HIGH);
    delay(1);
    digitalWrite(2, HIGH);

  }

  if ( X <= 255 && Y <= 258) {
    //Serial.print("Downleft");
    digitalWrite(4, LOW);
    delay(5);
    digitalWrite(4, HIGH);
  }
  if ( X <= 8 && Y >= 258 && Y <= 768 ) {
    //Serial.print("Down");
    digitalWrite(2, LOW);
    delay(1);
    digitalWrite(4, LOW);
    delay(50);
    digitalWrite(2, HIGH);
    delay(1);
    digitalWrite(4, HIGH);

  }
  if ( X >= 0 && X <= 255 && Y >= 768 && Y <= 1023) {
    //Serial.print("DownRight");
    digitalWrite(2, LOW);
    delay(5);
    digitalWrite(2, HIGH);
  }
  if ( Y >= 1015 && X >= 255 && X <= 759) {
    //Serial.print("Right");
    digitalWrite(3, LOW);
    delay(1);
    digitalWrite(4, LOW);
    delay(45);
    digitalWrite(3, HIGH);
    delay(1);
    digitalWrite(4, HIGH);


  }
  if ( X >= 759 && X <= 1023 && Y >= 768 && Y <= 1023) {
    //Serial.print("UpRight");
    digitalWrite(3, LOW);
    delay(5);
    digitalWrite(3, HIGH);
    //}
    //if ( S == 0) {
    //Serial.print("Honk");
  }
}
