// Define the pin for the MQ-6 sensor
const int gasSensorPin = A0;
// Define the pin for the LED
const int ledPin = 13;

void setup() {
  // Start serial communication
  Serial.begin(9600);
  // Set the LED pin as OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the analog value from the sensor
  int sensorValue = analogRead(gasSensorPin);
  
  // Print the raw sensor value
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);
  
  // Check if sensor value is above 200
  if (sensorValue > 200) {
    // Turn on the LED
    digitalWrite(ledPin, HIGH);
  } else {
    // Turn off the LED
    digitalWrite(ledPin, LOW);
  }
  
  // Wait for a second
  delay(1000);
}
