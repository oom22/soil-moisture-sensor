
const int onboardLEDPin = 2;      
const int buzzer = 32;
const int moisture = 34;
void setup() {
  Serial.begin(9600);
  pinMode(moisture, INPUT);
  pinMode(onboardLEDPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  if(analogRead(moisture) >= 3000){
    digitalWrite(buzzer, HIGH);
    delay(1000);
    digitalWrite(buzzer, LOW);    
    delay(500);
  }
  }
