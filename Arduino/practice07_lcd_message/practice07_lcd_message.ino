#include <LiquidCrystal.h>

LiquidCrystal lcd(2,11,4,5,6,7);

char caracter;     
String palabra = ""; 

void setup() {
  lcd.begin(16, 2);           
  lcd.setCursor(0, 0);        
  Serial.begin(9600);         
}

void loop() {
  while (Serial.available() > 0) {
    caracter = Serial.read(); 

    if (caracter == '/') {
      lcd.clear();            
      break;                  
    }

    palabra.concat(caracter); 
    delay(1);                
  }

  Serial.print(palabra);    
  lcd.print(palabra);       
  
  delay(50);             
  palabra = "";            
}
