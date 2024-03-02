// code by @Endruvz on Youtube

int led1 = 7; 
int led2 = 8;
int led3 = 9;
int pin1 = 10;

bool pressed = false;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1,  OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(pin1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pin1) == 1) // checks if you pressed the button
  {
    pressed = true;
  }

  
  if (pressed)
  {
    AllOnOff(); // you can add more funcitons to make the show last longer
    LeftRight();
    RightLeft();
    Checkered();
    pressed = false;
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

