#include <DHT.h>

// Define the DHT sensor
#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(115200);
  dht.begin();
}

void loop() {
  // Read temperature from DHT11
  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
    return;
  }

  // Read humidity from DHT11
  float humidity = dht.readHumidity();

  if (isnan(humidity)) {
    Serial.println("Failed to read humidity from DHT sensor!");
    return;
  }

  // Print temperature and humidity to Serial
  
  //Serial.print("Temperature: ");
  Serial.println(temperature);
  //Serial.print("Humidity: ");
  Serial.println(humidity);

  // Send temperature and humidity to Node-RED
  // sendDataToNodeRED(temperature, humidity);

  // Wait for a short duration
  delay(1000);
}

// Function to send data to Node-RED
void sendDataToNodeRED(float temperature, float humidity) {
  // Replace the following lines with your own code to send data to Node-RED
  // You may use MQTT, HTTP, or any other communication protocol supported by Node-RED
  // Example using Serial for simplicity
  Serial.print("Temperature sent to Node-RED: ");
  Serial.println(temperature);
  Serial.print("Humidity sent to Node-RED: ");
  Serial.println(humidity);
}
