#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Constructor de la librería de LCD 16x2
// Aquí se configuran los pines asignados a la pantalla del PCF8574
LiquidCrystal_I2C lcd(0x3F, 16, 2); // Dirección I2C 0x27, pantalla de 16x2

void setup()
{
  // Iniciar la comunicación I2C
  Wire.begin(21, 22);

  // Inicializar la pantalla LCD
  lcd.begin(16, 2);
  lcd.setBacklight(HIGH); // Si la pantalla tiene retroiluminación, establece LOW para apagarla

  // Imprimir "Hola Mundo" en la primera línea
  lcd.setCursor(0, 0);
  lcd.print("Hola Mundo");

  // Imprimir "GEEKFACTORY" en la segunda línea
  lcd.setCursor(0, 1);
  lcd.print("GEEKFACTORY");

  delay(2000); // Esperar 2 segundos
}

void loop()
{
  // Desplazar la pantalla a la izquierda
  lcd.scrollDisplayLeft();
  delay(500);

  // Desplazar la pantalla a la derecha
  lcd.scrollDisplayRight();
  delay(500);
}