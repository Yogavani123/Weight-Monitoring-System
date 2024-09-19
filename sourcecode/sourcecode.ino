#include <Ultrasonic.h>
#include <HX711.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define TRIGGER_PIN 14
#define ECHO_PIN 12
#define LOADCELL_DOUT_PIN 46
#define LOADCELL_SCK_PIN 45
#define SDA_PIN 8
#define SCL_PIN 9

LiquidCrystal_I2C lcd(0x27, 16, 2); 
Ultrasonic ultrasonic(TRIGGER_PIN, ECHO_PIN);
HX711 scale;

void setup() {
  Serial.begin(9600);
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  scale.set_scale(1.0);  // Reset the scale to 1.0 (no calibration factor applied)
  scale.tare();
  lcd.init();                      
  lcd.backlight();                
  lcd.clear(); 
}

void loop() {
  // Read distance from ultrasonic sensor
  long distance = ultrasonic.distanceRead(CM);
  
  // Read weight from load cell
  float weight = scale.get_units();

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print(" cm, Weight: ");
  lcd.setCursor(0, 0);
  lcd.print("Distance: ");
  lcd.print(distance);
  lcd.print(" cm");

  Serial.print(weight);
  Serial.println(" Kg");
  lcd.setCursor(0, 1); 
  lcd.print("Weight: ");
  lcd.print(weight);
  lcd.print(" Kg"); 

  delay(1000); // Delay for 1 second
}