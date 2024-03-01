// code by @Endruvz on Youtube

int led1 = 7; 
int led2 = 8;
int led3 = 9;
int led4 = 10;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1,  OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int read = digitalRead(10); // checks if you pressed the button
  if (read==1)
  {
    AllOnOff(); // you can add more funcitons to make the show last longer
    LeftRight();
    RightLeft();
    Checkered();
  }
  delay(200);


}

  void AllOnOff() // turns every single led on and off
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(500);
  }

  void LeftRight() // turns leds on and off from left to right 
  {
    digitalWrite(led1, HIGH);
    delay(100);
    digitalWrite(led2, HIGH);
    delay(100);
    digitalWrite(led3, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
    delay(100);
    digitalWrite(led2, LOW);
    delay(100);
    digitalWrite(led3, LOW);
    delay(500);
  }

  void RightLeft() // turns leds on and off from right to left
  {
    digitalWrite(led3, HIGH);
    delay(100);
    digitalWrite(led2, HIGH);
    delay(100);
    digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led3, LOW);
    delay(100);
    digitalWrite(led2, LOW);
    delay(100);
    digitalWrite(led1, LOW);
    delay(500);
  }

  void Checkered() // turns leds on and off in a checkered pattern
  {
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(150);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    delay(150);
    digitalWrite(led1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, HIGH);
    delay(150);
    digitalWrite(led1, LOW);
    digitalWrite(led2, HIGH);
    digitalWrite(led3, LOW);
    delay(150);
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    delay(500);
  }

