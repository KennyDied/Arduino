//Задачка на 45 баллов. 
//Итоговый вариант, добавил кнопку
//Вторая попытка 

void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT); // Красный светодиод
  pinMode(6, OUTPUT); // Желтый светодиод
  pinMode(7, OUTPUT); // Зелетый светодиод

  pinMode(A7, INPUT); // Переменный резистор 

  pinMode(3,INPUT_PULLUP); // Кнопка 

}

void loop() {

  boolean button =  !digitalRead(3);

if(button == 1){                 // Тык по кнопке
  digitalWrite (6, HIGH);        // Загорается желтый на 5 секунд
  delay (5000);
  digitalWrite (6, LOW);         
  digitalWrite (5, HIGH);        //  А теперь горит красный 10 секунд
  delay (10000);
  digitalWrite(5, LOW);
  }

else {
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
}
