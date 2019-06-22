int messageId = 0;

#define Serial SerialUSB

void setup() {
  Serial.begin(57600);
}

void loop() {
  messageId++;

  uint32_t lightIntensity = random(1000,5000);
  float uvIndex = random(10,25) / 10.0;
  float temperatureCanSat = random(239,256) / 10.0;
  float temperatureExternal = random(239,256) / 10.0;
  float temperatureMPU = random(239,256) / 10.0;
  float ambientTemp = random(239,256) / 10.0;
  float objectTemp = random(239,256) / 10.0;
  float temperatureSCD30 = random(239,256) / 10.0;
  float humidityCanSat = random(1,1000) / 10.0;
  float humidityExternal = random(1,1000) / 10.0;
  float humiditySCD30 = random(1,1000) / 10.0;
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
  float accelerationX = random(10,150) / 10.0;
  float accelerationY = random(10,150) / 10.0;
  float accelerationZ = random(10,150) / 10.0;
  float rotationX = random(10,150) / 10.0;
  float rotationY = random(10,150) / 10.0;
  float rotationZ = random(10,150) / 10.0;
  float magnetometerX = random(10,150) / 10.0;
  float magnetometerY = random(10,150) / 10.0;
  float magnetometerZ = random(10,150) / 10.0;
  float a = random(10,500) / 10.0;
  float b = random(10,500) / 10.0;
  float c = random(10,500) / 10.0;
  float d = random(10,500) / 10.0;
  float e = random(10,500) / 10.0;
  float f = random(10,500) / 10.0;
  float g = random(10,500) / 10.0;
  float h = random(10,500) / 10.0;
  float i = random(10,500) / 10.0;
  float j = random(10,500) / 10.0;
  float k = random(10,500) / 10.0;
  float l = random(10,500) / 10.0;
  float r = random(10,500) / 10.0;
  float s = random(10,500) / 10.0;
  float t = random(10,500) / 10.0;
  float u = random(10,500) / 10.0;
  float v = random(10,500) / 10.0;
  float w = random(10,500) / 10.0;

  Serial.print("START;" + String(messageId) + ";" + String(lightIntensity) + ";" + String(uvIndex) + ";");
  Serial.print(String(temperatureCanSat) + ";" + String(temperatureMPU) + ";" + String(temperatureExternal) + ";");
  Serial.print(String(temperatureSCD30) + ";" + String(ambientTemp) + ";" + String(objectTemp) + ";");
  Serial.print(String(humidityCanSat) + ";"+ String(humidityExternal) + ";" + String(humiditySCD30) + ";");
  Serial.print(String(pressureCanSat) + ";" + String(pressureExternal) + ";" + String(altitudeCanSat) + ";");
  Serial.print(String(altitudeExternal) + ";" + String(accelerationX)+ ";" + String(accelerationY) + ";");
  Serial.print(String(accelerationZ) + ";" + String(rotationX) + ";" + String(rotationY) + ";");
  Serial.print(String(rotationZ) + ";" + String(magnetometerX) + ";" + String(magnetometerY) + ";");
  Serial.print(String(magnetometerZ) + ";" + String(latInt) + ";" + String(lonInt) + ";");
  Serial.print(String(latAfterDot) + ";" + String(lonAfterDot) + ";" + String(co2SCD30) + ";"  + String(co2CCS811) + ";");
  Serial.print(String(tvoc) + ";"  + String(o2Concentration) + ";");
  Serial.print(String(a) + ";" + String(b) + ";" + String(c) + ";" + String(d) + ";" + String(e) + ";" + String(f) + ";" + String(g) + ";" + String(h) + ";" + String(i) + ";" + String(j) + ";" + String(k) + ";" + String(l) + ";" + String(r) + ";" + String(s) + ";" + String(t) + ";" + String(u) + ";" + String(v) + ";" + String(w) + ";");
  Serial.println(String(numberOfSatellites) + ";"  + String(rssi) + ";END");
  
  if (messageId > 1000) {
    messageId = 0;  
  }
  
  delay(500);
}
