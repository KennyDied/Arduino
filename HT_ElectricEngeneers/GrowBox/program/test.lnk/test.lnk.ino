#include <iarduino_RTC.h>
iarduino_RTC time(RTC_DS1307);            



#define led 3                             //светодиод (замена ленты);
#define lightSensor 2                     //датчик освещенности;
uint8_t D, M, Y, h, m, s, W;              //Объявляем переменные для получения следующих значений: D-день, M-месяц, Y-год, h-часы, m-минуты, s-секунды, W-день недели.

void setup(){
  delay(300);
  Serial.begin(9600);

  pinMode(led, OUTPUT);
  pinMode(lightSensor, INPUT);
  
  time.begin();
  time.settime(52, 59, 12, 03, 04, 20, 5); // сек, мин, час, день, месяц, год, день недели
}

void loop(){
  if (millis() % 1000 == 0) {                                   // если прошла 1 секунда
    Serial.println(time.gettime("d-m-Y, H:i:s, D"));            // выводим время    
    delay(1);                                                   // приостанавливаем на 1 мс, чтоб не выводить время несколько раз за 1мс
  } 

  h = time.Hours;                                               // Получаем из буфера библиотеки текущие часы        0-23.
  
  if (h >= 19 && h <=23 || digitalRead(lightSensor) == HIGH){
    digitalWrite(led, HIGH); 
  }
  else if (h >=0 && h <= 6 || digitalRead(lightSensor) == HIGH){
    digitalWrite(led, HIGH);
  }
  else{
      digitalWrite(led, LOW);
  }
}
