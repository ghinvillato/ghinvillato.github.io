
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int switchPin = 6;
int switchState = 0;
int prevSwitchState = 0;
int reply;

void setup() {
  lcd.begin(16, 2);
  pinMode(switchPin, INPUT);

  
  lcd.print("Ask");
 
  lcd.setCursor(0, 1);
 
  lcd.print("Me!");
}

void loop() {
  
  switchState = digitalRead(switchPin);

  if (switchState != prevSwitchState) {
    
    if (switchState == LOW) {
     
      reply = random(8);
      
      lcd.clear();
     
      lcd.setCursor(0, 0);
      
      lcd.print("Hello:");
      
      lcd.setCursor(0, 1);

     
      switch (reply) {
        case 0:
          lcd.print("I am Ghin");
          break;

        case 1:
          lcd.print("I like You");
          break;

        case 2:
          lcd.print("How are You");
          break;

        case 3:
          lcd.print("Good Day");
          break;

        case 4:
          lcd.print("It's ok ");
          break;

        case 5:
          lcd.print("Hope You are well");
          break;

        case 6:
          lcd.print("Be Safe");
          break;

        case 7:
          lcd.print("Thank You");
          break;
      }
    }
  }

  prevSwitchState = switchState;
}
