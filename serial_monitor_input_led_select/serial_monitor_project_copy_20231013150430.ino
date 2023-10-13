int redLED = 6;
int greenLED = 5;
int whiteLED = 4;

String userInput;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(whiteLED, OUTPUT);
  Serial.begin(9600);

  Serial.println("Choose an LED to turn on from the list below:");
  
}

void loop() {

  Serial.println("Choose an LED to turn on from the list below:");
  Serial.println("1 - red");
  Serial.println("2 - green");
  Serial.println("3 - white");

  while (Serial.available() == 0) {

  }

  int optionChoice = Serial.parseInt();

  switch (optionChoice){
    case 1:
        digitalWrite(redLED, HIGH);
        digitalWrite(greenLED, LOW);
        digitalWrite(whiteLED, LOW);
        break;
    case 2:
        digitalWrite(redLED, LOW);
        digitalWrite(greenLED, HIGH);
        digitalWrite(whiteLED, LOW);
        break;
    case 3:
        digitalWrite(redLED, LOW);
        digitalWrite(greenLED, LOW);
        digitalWrite(whiteLED, HIGH);
        break;
    default:
      Serial.println("Please choose a valid selection");
  }
}