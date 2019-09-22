//Задачка на 45 баллов.

void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT); // Красный светодиод
  pinMode(6, OUTPUT); // Желтый светодиод
  pinMode(7, OUTPUT); // Зелетый светодиод

  pinMode(A7, INPUT); // Переменный резистор 

}

void loop() {
  int speed = analogRead(A7); // Считываю значения с резистора
  digitalWrite(5, HIGH);
  delay(speed);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  delay(speed); 
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
  delay(speed);
  digitalWrite(7, LOW);
  
}
