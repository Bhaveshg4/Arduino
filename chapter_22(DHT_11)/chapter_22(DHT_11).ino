
#include <DHT.h>
#define DHT_SENSOR_PIN  23
#define DHT_SENSOR_TYPE DHT11
DHT dht_sensor(DHT_SENSOR_PIN, DHT_SENSOR_TYPE);
void setup() {
  Serial.begin(9600);
  pinMode(18,OUTPUT);
  dht_sensor.begin(); 
}

void loop() {
  
  float humi  = dht_sensor.readHumidity();
  // read temperature in Celsius
  float tempC = dht_sensor.readTemperature();
  // read temperature in Fahrenheit
  float tempF = dht_sensor.readTemperature(true);

  // check whether the reading is successful or not
  if ( isnan(tempC) || isnan(tempF) || isnan(humi)) {
    Serial.println("Failed to read from DHT sensor!");
  } else {
    Serial.print("Humidity: ");
    Serial.print(humi);
    Serial.print("%");

    Serial.print("  |  ");

    Serial.print("Temperature: ");
    Serial.print(tempC);
    Serial.print("°C  ~  ");
    Serial.print(tempF);
    Serial.println("°F");
  }
  if(tempC>40){
    digitalWrite(18,HIGH);
    delay(2000);
    digitalWrite(18,LOW);
    delay(200);    
  }

  // wait a 2 seconds between readings
  delay(2000);
}
