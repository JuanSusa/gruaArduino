//Proyecto: Grua con servomotores
//libreria necesaria
#include <Servo.h>


//Definicion de los servos
Servo servo1;//Servomotor 1
Servo servo2;//Servomotor 2

int eje1=90;//Inicializacion en grados
int eje2=90;//Inicializacion en grados

void setup(){  
  servo1.attach(7);//(7)definicion de pines
  servo2.attach(6);

  servo1.write(eje1);
  servo2.write(eje2);
}


void loop(){
  //SERVO 1
  //
  if (analogRead(0)<200 && eje1<180){
    eje1++;
    servo1.write(eje1);
  }
  if (analogRead(0)>700 && eje1>0){
    eje1--;
    servo1.write(eje1);
  }



  //SERVO 2
  if (analogRead(1)<200 && eje2<180){
    eje2++;
    servo2.write(eje2);
  }
  if (analogRead(1)>700 && eje2>0){
    eje2--;
    servo2.write(eje2);
  }
  delay(15);//definicion de ms 
}