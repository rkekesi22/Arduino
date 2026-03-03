const int red = 10;
const int orange = 9;
const int green = 8;

const int walk_red = 2;
const int walk_green = 4;

const int button = 7;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(orange, OUTPUT);
  pinMode(green, OUTPUT);

  pinMode(walk_red, OUTPUT);
  pinMode(walk_green, OUTPUT);

  pinMode(button, INPUT_PULLUP);

  digitalWrite(green, HIGH);
  digitalWrite(walk_red, HIGH);

}

void loop() {
  if( digitalRead(button) == LOW)
  {
    digitalWrite(green, LOW);
    digitalWrite(orange, HIGH);

    delay(2000);

    digitalWrite(orange, LOW);
    digitalWrite(red, HIGH);

    digitalWrite(walk_red, LOW);
    digitalWrite(walk_green, HIGH);

    delay(5000);

    digitalWrite(walk_green, LOW);
    digitalWrite(walk_red, HIGH);

    delay(1000);
    
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
  }

}
