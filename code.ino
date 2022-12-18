// C++ code
//

#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 8, 6, 7);

#define verde 4
#define amarelo 3
#define vermelho 2
int sgs_verde = 15;
int sgs_amarelo = 5;
int sgs_vermelho = 15;

void setup()
{
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
  lcd.begin(16,2);
}

void loop()
{
  //Limpa a tela
  lcd.clear();
 
  // Desliga o led vermelho e liga o verde
  digitalWrite(vermelho, 0); // Para o 2° looping
  digitalWrite(verde, 1);
  for (int sg=0; sg<=sgs_verde; sg++){
    lcd.setCursor(3, 0);
  	lcd.print("VERDE");
    
    lcd.setCursor(3, 1);
  	lcd.print("PROSSIGA");
    
  	lcd.setCursor(10, 0);
  	lcd.print(sgs_verde-sg);
    
    delay(1000);
    lcd.clear();
  }
  // Desliga o led verde e liga o amarelo
  digitalWrite(verde, 0);
  digitalWrite(amarelo, 1);
  for (int sg=0; sg<=sgs_amarelo; sg++){
    lcd.setCursor(2, 0);
  	lcd.print("AMARELO");
    
    lcd.setCursor(2, 1);
  	lcd.print("CUIDADO");
    
  	lcd.setCursor(10, 0);
  	lcd.print(sgs_amarelo-sg);
    
    delay(1000);
    lcd.clear();
  }
  // Desliga o amarelo e liga o vermelho
  digitalWrite(amarelo, 0);
  digitalWrite(vermelho, 1);
  for (int sg=0; sg<=sgs_vermelho; sg++){
    lcd.setCursor(2, 0);
  	lcd.print("VERMELHO");
    
    lcd.setCursor(2, 1);
  	lcd.print("PARE");
    
  	lcd.setCursor(11, 0);
  	lcd.print(sgs_vermelho-sg);
    
    delay(1000);
    lcd.clear();
  }

}
