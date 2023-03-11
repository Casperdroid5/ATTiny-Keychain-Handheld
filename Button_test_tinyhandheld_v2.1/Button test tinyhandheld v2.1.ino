void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if ((analogRead(A0) >= 750) && (analogRead(A0) < 950)) { // left
      digitalWrite(4, HIGH);
    delay(200);
    digitalWrite(4, LOW);
  }
  if ((analogRead(A0) > 500) && (analogRead(A0) < 750)) {  // right
    digitalWrite(4, HIGH);
    delay(100);
    digitalWrite(4, LOW);
  }
  if ((analogRead(A3) >= 750) && (analogRead(A3) < 950)) {  // down
    digitalWrite(4, HIGH);
    delay(400);
    digitalWrite(4, LOW);
  }

  if ((analogRead(A3) > 500) && (analogRead(A3) < 750)) {  // up
    digitalWrite(4, HIGH);
    delay(300);
    digitalWrite(4, LOW);
  }
  if ((digitalRead(1) == 0))
  {
    digitalWrite(4, HIGH);
    delay(1);
    digitalWrite(4, LOW);
  }
}