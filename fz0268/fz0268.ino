const int analogPin = A0;
const int digitalPin = 8;

int digitalValue = 0;
int analogValue = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(digitalPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogValue = analogRead(analogPin);
  Serial.print("Analog Value : ");
  Serial.println(analogValue);

  digitalValue = digitalRead(digitalPin);
  Serial.print("Digital Value : ");
  Serial.println(digitalValue);

  //wait 20 seconds
  delay(20000);
}
