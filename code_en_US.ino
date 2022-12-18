// C++ code
//

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 8, 6, 7);

#define green 4
#define yellow 3
#define red 2
int sgs_green = 15;
int sgs_yellow = 5;
int sgs_red = 15;

void setup()
{
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  lcd.begin(16,2);
}

void loop()
{
  //Clean the screen
  lcd.clear();
 
  // Turn off the red LED and turn on the green
  digitalWrite(red, 0); // This line is to the second Loop
  digitalWrite(green, 1);
  for (int sg=0; sg<=sgs_green; sg++){
    lcd.setCursor(3, 0);
  	lcd.print("GREEN");
    
    lcd.setCursor(3, 1);
  	lcd.print("PROCEED");
    
  	lcd.setCursor(10, 0);
  	lcd.print(sgs_green-sg);
    
    delay(1000);
    lcd.clear();
  }
  // Turn off the green LED and turn on the yellow
  digitalWrite(green, 0);
  digitalWrite(yellow, 1);
  for (int sg=0; sg<=sgs_yellow; sg++){
    lcd.setCursor(2, 0);
  	lcd.print("YELLOW");
    
    lcd.setCursor(2, 1);
  	lcd.print("BE CAREFUL");
    
  	lcd.setCursor(10, 0);
  	lcd.print(sgs_yellow-sg);
    
    delay(1000);
    lcd.clear();
  }
  // Turn off the yellow LED and turn on the red
  digitalWrite(yellow, 0);
  digitalWrite(red, 1);
  for (int sg=0; sg<=sgs_red; sg++){
    lcd.setCursor(2, 0);
  	lcd.print("RED");
    
    lcd.setCursor(2, 1);
  	lcd.print("STOP");
    
  	lcd.setCursor(11, 0);
  	lcd.print(sgs_red-sg);
    
    delay(1000);
    lcd.clear();
  }

}
