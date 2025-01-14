#include<LiquidCrystal.h>  // include the LCD library
 
const int rs = PB11, en = PB10, d4 = PA4, d5 = PA3, d6 = PA2, d7 = PA1; //STM32 Pins to which LCD is connected 
LiquidCrystal lcd(rs, en, d4, d5, d6, d7); //Initialize the LCD
 
#include<DHT.h>                     //Library for using DHT sensor 
#define DHTPIN PA0 
#define DHTTYPE DHT11
 
DHT dht(DHTPIN, DHTTYPE);     //initilize object dht for class DHT with DHT pin with STM32 and DHT type as DHT11
 
void setup()
{
  // initialize the LCD
  lcd.begin(16,2);
  dht.begin();                                  
  lcd.print("DHT11 with STM32");
  delay(3000);
  lcd.clear();
}
 
void loop()
{
  float h = dht.readHumidity();       //Gets Humidity value
  float t = dht.readTemperature();    //Gets Temperature value
  lcd.setCursor(0,0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" C");
  lcd.setCursor(0,1);
  lcd.print("Humid: ");
  lcd.print(h);
  lcd.print(" %");
}