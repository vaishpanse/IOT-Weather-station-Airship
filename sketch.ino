//Libraries
#include <DHT.h>;
#include <LiquidCrystal.h>

//Constants
#define DHTPIN 9     //  pin we're connected to
#define DHTTYPE DHT22   //  Type of DHT
DHT dht(DHTPIN, DHTTYPE); // Initialize DHT sensor for normal 16mhz Arduino

int Contrast=20; // Setting contrast level of LCD
LiquidCrystal lcd(7,6, 5, 4, 3, 2); // pin connection to LCD

void setup()
{
  analogWrite(8,Contrast); // Initializing pin which is set for contrast
  lcd.begin(16,2); //LCD begin method, passing in the LCD size which is a 16×2
  lcd.print("Reading sensor"); // Printing messege on LCD
  dht.begin(); // Calling dht begin method
 
}

void loop() 
{
  float temperature, humidity; // Creating variables

  humidity = dht.readHumidity(); // read humidity
  temperature = dht.readTemperature(); // read temprature
  delay(2000); 
  lcd.clear();
  
  //Print Output on LCD Screen 
  lcd.setCursor(0,0);
  lcd.print(String("Temperature:") + (temperature));
  lcd.setCursor(0,1);
  lcd.print(String("Humidity:") + (humidity));
  
}
