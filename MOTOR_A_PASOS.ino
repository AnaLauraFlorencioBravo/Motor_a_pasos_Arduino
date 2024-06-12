#include <Stepper.h>
int stepsPerRevolution = 2048; //PASOS POR REVOLUCION
int motSpeed = 10; //VELOCIDAD
Stepper myStepper(stepsPerRevolution,8,10,9,11); //PINES QUE UTILIZAMOS EN EL ARDUINO
int dt = 1500; //PAUSA ENTRE UNA VUELTA Y OTRA

void setup() {
  // put your setup code here, to run once:
  myStepper.setSpeed(motSpeed);//VELOCIDAD
  
}

void loop() {
  // put your main code here, to run repeatedly:
  myStepper.step(stepsPerRevolution);//VECES QUE QUIERO QUE GIRE EL MOTOR HACIA UN LADO
  myStepper.step(stepsPerRevolution);
  delay(dt);//PAUSA ENTRE UNA VUELTA Y OTRA
  myStepper.step(-stepsPerRevolution);//VECES QUE QUIERO QUE GIRE EL MOTOR HACIA EL LADO CONTRARIO DECARADO CON MENOS.
   myStepper.step(-stepsPerRevolution);
  delay(dt);

}
