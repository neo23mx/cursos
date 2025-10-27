/*
este programa controla dos motores para un robot, el cual utiliza un driver de motores L298N que este a su ves tiene 4 entradas
cuenta con un buzzer como claxon y un modulo de bluetooth para poder controlarlo por el celular.
el programa recibe por el bluetooth cierto comando para que el robot pueda avanzar hacia adelante, atras, gire a la izquierda y a la derecha, tambien si se le manda el numero 7 
el buzzer entona la cancion de star wars.

autor: ingenierIA aplicada arduino
https://ingenieriaaplicada23.wixsite.com/appduinostore

esto proyecto es para que los jovenes de México puedan conocer un poco más de la robática, electránica y programación
*/

byte IN1 =4; //MOTOR 1
byte IN2 =5; //MOTOR 1
byte IN3 =6; //MOTOR 2
byte IN4 =7; //MOTOR 2

int c=261; 
int d=294;
int e=329;
int f=349;
int g=391;
int gS=415;
int a=440;
int aS=455;
int b=466;
int cH=523;
int cSH=554;
int dH=587;
int dSH=622;
int eH=659;
int fH=698;
int fSH=740;
int gH=783;
int gSH=830;
int aH=880;

byte ZumbadorPin=8;
byte ledIzq=2;
byte ledDer=3;

byte ledRGB1=16;
byte ledRGB2=17;
byte ledRGB3=18;
byte VledRGB=19;

byte banledIzq=0;
byte banledDer=0;
byte banledG=0;
byte banledR=0;
byte banledB=0;

int incomingByte;

void setup() {

  Serial.begin(9600);
  
  pinMode(IN1,OUTPUT);
  pinMode(IN2,OUTPUT);
  pinMode(IN3,OUTPUT);
  pinMode(IN4,OUTPUT);
  
  pinMode(ledRGB1,OUTPUT);
  pinMode(ledRGB2,OUTPUT);
  pinMode(ledRGB3,OUTPUT);
  pinMode(VledRGB,OUTPUT);

  pinMode(ledIzq,OUTPUT);
  pinMode(ZumbadorPin,OUTPUT);

//para garantizar que los puertos esten apagados
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
  digitalWrite(ZumbadorPin,LOW);
  digitalWrite(ledRGB1,LOW);
  digitalWrite(ledRGB2,LOW);
  digitalWrite(ledRGB3,LOW);
}

void loop() {
  
  if (Serial.available() > 0) {
   
    incomingByte = Serial.read();
   
    //ledIzDe();
    MoveForwBack();
    giroIzqDer();
    claxon1();
    ledRGB();
    
  }
    
}

