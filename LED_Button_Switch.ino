const int BUTTON_PIN = 35;
const int LED_PIN    = 33;

int ledState = LOW;          
int lastButtonState = HIGH;  

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  int buttonState = digitalRead(BUTTON_PIN);

  if (lastButtonState == HIGH && buttonState == LOW) {
    ledState = !ledState;
  }
  
  digitalWrite(LED_PIN, ledState);
  lastButtonState = buttonState;
}

