
//Motor1
const int MotorPin1 = 5;
const int MotorPin2 = 6;
//Motor2
const int MotorPin3 = 10;
const int MotorPin4 = 9;

void setup() {
  // put your setup code here, to run once:
  pinMode(MotorPin1, OUTPUT);
  pinMode(MotorPin2, OUTPUT);
  pinMode(MotorPin3, OUTPUT);
  pinMode(MotorPin4, OUTPUT);
}

void loop() {
  // put your main the code here, to run repeatedly:
  //Turn on Motor1 in clockwise for 3 second
  digitalWrite(MotorPin1, HIGH);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, LOW);
delay(2000);

  //Turn on Motor1 in anti-clockwise for 3 second
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, HIGH);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, LOW);
delay(2000);

  //Turn on Motor2 in clockwise for 3 second
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, HIGH);
  digitalWrite(MotorPin4, LOW);
delay(2000);

  //Turn on motor2 in Anti-clockwise for 3 second
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, HIGH);
delay(2000);

//Turn on motor1 and motor2 in clockwise for 3 second
  digitalWrite(MotorPin1, HIGH);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, HIGH);
  digitalWrite(MotorPin4, LOW);
delay(2000);

//Turn on motor1 and motor2 in anti-clockwise for 3 second
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, HIGH);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, HIGH);
delay(2000);

//Turn off motor1 and motor2 for 5 second
  digitalWrite(MotorPin1, LOW);
  digitalWrite(MotorPin2, LOW);
  digitalWrite(MotorPin3, LOW);
  digitalWrite(MotorPin4, LOW);
}
