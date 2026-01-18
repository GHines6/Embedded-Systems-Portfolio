#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int Potentiometer = 34;
LiquidCrystal_I2C lcd(0x27,16,2);


void setup() {
  Serial.begin(115200);

  Wire.begin(21,22);
  lcd.init();
  lcd.backlight();
  lcd.clear();
}

void loop() {
  int value = analogRead(Potentiometer);

  lcd.setCursor(0,0);
  lcd.print("Amount: ");
  Serial.println(value);
  lcd.print("     ");
  
  int bars = map(value,0,4095,0,16);
  lcd.setCursor(0,1);
  for (int i = 0; i <16; i++) {
    lcd.print(i < bars ? (char)255 : ' ');
  }
  delay(100);
}