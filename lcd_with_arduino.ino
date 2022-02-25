   /*  you can use 16x2 or 20x4 lcd screen
lcd 16 x 2 screen cod
pin connection to arduino nano or uno or mega
SDA --> A4
SCL --> A5
GND --> GND
VCC --> 5V
arduino uno or mega
SDA --> SDA
SCL --> SCL
GND --> GND
VCC --> 5V

you will also intall LiquidCrystal_I2C library on arduino official web site
*/

#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27, 16, 2); //if you use 16x2 lcd screen don't forget to change 16,2 to 20,4

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.begin (16, 2);//if you use 16x2 lcd screen don't forget to change 16,2 to 20,4
}

void loop() {
  lcd.setCursor(0, 0); //satır ayarları
  lcd.print("birinci satir");//yazi
  lcd.setCursor(0,1);
  lcd.print("ikinci satir");

}
