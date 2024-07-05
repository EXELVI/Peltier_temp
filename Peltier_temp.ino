

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define ONE_WIRE_BUS 2

OneWire oneWire(ONE_WIRE_BUS);

DallasTemperature sensors(&oneWire);

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

  sensors.begin();
}

void loop()
{

  sensors.requestTemperatures();

  Serial.println(sensors.getTempCByIndex(0));
}
