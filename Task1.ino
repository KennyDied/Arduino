//Задачка на 25 баллов.

void setup() {

Serial.begin(9600);
pinMode(5, OUTPUT); // Красный светодиод
pinMode(6, OUTPUT); // Желтый светодиод
pinMode(7, OUTPUT); // Зелетый светодиод

}

void loop() {

digitalWrite(5, HIGH);
delay(1000);
digitalWrite(5, LOW);
digitalWrite(6, HIGH);
delay(1000);
digitalWrite(6, LOW);
digitalWrite(7, HIGH);
delay(1000);
digitalWrite(7, LOW);
digitalWrite(6, HIGH);
delay(1000);
digitalWrite(6, LOW);

}
