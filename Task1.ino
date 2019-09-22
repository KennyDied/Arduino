//Задачка на 35 баллов.
//Горит зелёный, а ты берёшь, нажимаешь кнопку и начинают гореть жёлтый, а потом красный (c)Андрей Бронников.

void setup() {

Serial.begin(9600);
pinMode(5, OUTPUT); // Красный светодиод
pinMode(6, OUTPUT); // Желтый светодиод
pinMode(7, OUTPUT); // Зелетый светодиод

pinMode(3,INPUT_PULLUP); // Кнопка 

}

void loop() {
 
  boolean button =  !digitalRead(3);

if(button == 1){
  digitalWrite (7, LOW);
  digitalWrite (6, HIGH);
  delay (2000);
  digitalWrite (6, LOW);
  digitalWrite (5, HIGH);
  delay (5000);
  digitalWrite(5, LOW);
}

else{
  digitalWrite(7, HIGH);
}

}
