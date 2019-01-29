void setup() {
  Serial.begin(57600);
}

void loop() {
  float temperature = random(239,256) / 10.0;
  float pressure = random(9959,10105) / 10.0;
  float speedValue = random(61,122) / 10.0;
  float height = random(4000,2500) / 10.0;
  Serial.println("temperature=" + String(temperature) + ";pressure=" + String(pressure) + ";speedValue=" + String(speedValue) + ";height=" + String(height) +";lat=50.0371175;lng=15.7799131");
  delay(10);
}
