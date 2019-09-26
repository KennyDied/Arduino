//Надеюсь, что это конец

#define RedLED 5
#define YellowLED 6
#define GreenLED 7
#define Button 3
#define Resistor A7

void setup() {
  Serial.begin(9600);
  pinMode(RedLED, OUTPUT);
  pinMode(YellowLED, OUTPUT);
  pinMode(GreenLED, OUTPUT);

  pinMode(A7, INPUT);

  pinMode(Button,INPUT_PULLUP);
  
  attachInterrupt(1, stopTrafficLight, FALLING);
}

void loop() {
  
  int speed = analogRead(Resistor);
  
  digitalWrite(RedLED, HIGH); 
  delay(speed);
  digitalWrite(RedLED, LOW);
  digitalWrite(YellowLED, HIGH);
  delay(speed); 
  digitalWrite(YellowLED, LOW);
  digitalWrite(Resistor, HIGH);
  delay(speed);
  digitalWrite(Resistor, LOW);
   
}

void stopTrafficLight() {
 
  digitalWrite (YellowLED, HIGH);
  delay (5000);
  digitalWrite (YellowLED, LOW);         
  digitalWrite (RedLED, HIGH);
  delay (10000);
  digitalWrite(RedLED, LOW);
    
}
