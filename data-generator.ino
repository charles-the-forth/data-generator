uint16_t messageId = 0;
uint16_t year = 2019;
uint8_t month = 3;
uint8_t day = 19;
uint8_t hour = 0;
uint8_t minute = 0;
uint8_t second = 0;

void setup() {
  Serial.begin(57600);
}

void loop() {
  float temperature = random(239, 256) / 10.0;
  float pressure = random(9959, 10105) / 10.0;
  float humidity = random(1, 1000) / 10.0;
  uint32_t lightIntensity = random(1000, 5000);
  float altitude = random(2390, 10000) / 10.0;
  uint8_t numberOfSatellites = random(0, 6);
  uint16_t latInt = 5002;
  uint16_t lonInt = 1546;
  uint32_t latAfterDot = 2308;
  uint32_t lonAfterDot = 79412;

  Serial.print("START;" + String(messageId) + ";" + String(temperature) + ";" + String(pressure) + ";" + String(humidity) + ";" + String(lightIntensity) + ";" + String(altitude) + ";" + String(numberOfSatellites) + ";");
  Serial.println(String(year) + ";" + String(month) + ";" + String(day) + ";" + String(hour) + ";" + String(minute) + ";" + String(second) + ";" + String(latInt) + ";" + String(lonInt) + ";" + String(latAfterDot) + ";" + String(lonAfterDot) + ";END");

  second++;

  if (second >= 60) {
    second = 0;
    minute++;
  }


  if (minute >= 60) {
    minute = 0;
    hour++;
  }

  if (hour >= 24) {
    hour = 0;
    day++;
  }

  messageId++;

  delay(1000);
}
