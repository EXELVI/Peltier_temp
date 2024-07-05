

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

byte sensorPin = A0;

#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

void setup()
{
  Serial.begin(9600);

  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 9);
  display.println("Starting");
  display.display();
  delay(250);
  display.setCursor(0, 9);
  display.println("Starting.");
  display.display();
  delay(250);
  display.setCursor(0, 9);
  display.println("Starting..");
  display.display();

  delay(1000);
}

void loop()
{

  float analoggg;
  float Resistance;
  analoggg = analogRead(sensorPin);
  Resistance = (1023 / analoggg) - 1;
  Resistance = 10000 / Resistance;
  Serial.print(analoggg);
  Serial.print(": ");
  Serial.print(Resistance);
  Serial.println(" Ohm");

  float celsi;
  celsi = Resistance / 10000;
  celsi = log(celsi);
  celsi /= 3950;
  celsi += 1.0 / (25 + 273.15);
  celsi = 1.0 / celsi;
  celsi -= 273.15;

  Serial.print(celsi);
  Serial.println(" C");

  
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 9);
  display.println(String(celsi) + " C");
  display.setTextSize(1);
  display.println(String(Resistance) + " Ohm");
  display.display();

}
