int messageId = 0;

#define Serial SerialUSB

void setup() {
  Serial.begin(57600);
}

void loop() {
  messageId++;

  uint32_t lightIntensity = random(1000,5000);
  float temperatureCanSat = random(239,256) / 10.0;
  float temperatureExternal = random(239,256) / 10.0;
  float ambientTemp = random(239,256) / 10.0;
  float objectTemp = random(239,256) / 10.0;
  float humidityCanSat = random(1,1000) / 10.0;
  float humidityExternal = random(1,1000) / 10.0;
  float pressureCanSat = random(9959,10105) / 10.0;
  float pressureExternal = random(9959,10105) / 10.0;
  float altitudeCanSat = random(2390,10000) / 10.0;
  float altitudeExternal = random(2390,10000) / 10.0;
  uint8_t numberOfSatellites = random(0, 6);
  uint16_t latInt = 5002;
  uint16_t lonInt = 1546;
  uint32_t latAfterDot = 2308;
  uint32_t lonAfterDot = 79412;
  int co2SCD30 = 100;
  int co2CCS811 = 200;
  int tvoc = 20;
  float o2Concentration = random(100,1000) / 10.0;
  int rssi = random(0, 60) - 90;


  Serial.print("START;" + String(messageId) + ";" + String(lightIntensity) + ";" + String(temperatureCanSat) + ";" + String(temperatureExternal) + ";" + String(ambientTemp) + ";" + String(objectTemp) + ";");
  Serial.print(String(humidityCanSat) + ";" + String(humidityExternal) + ";" + String(pressureCanSat) + ";" + String(pressureExternal) + ";" + String(altitudeCanSat) + ";" + String(altitudeExternal) + ";");
  Serial.println(String(numberOfSatellites) + ";" + String(latInt) + ";"  + String(lonInt) + ";"  + String(latAfterDot) + ";" + String(lonAfterDot) + ";" + String(co2SCD30) + ";"  + String(co2CCS811) + ";"  + String(tvoc) + ";"  + String(o2Concentration) + ";"  + String(rssi) + ";END");

  if (messageId > 1000) {
    messageId = 0;  
  }
  
  delay(500);
}
