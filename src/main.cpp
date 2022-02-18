#include <Arduino.h>
// https://adior.ru/index.php/robototekhnika/249-pcint-arduino
#include<EEPROM.h>
#include<SoftwareSerial.h>
#define LED 0

SoftwareSerial Ser(0, 1); // RX, TX
byte dpins;
int EE[64];// массив для копии пинов


void rEE(){
 Ser.println('READING EEPROM');
 for (int i=0; i<64;i++) EE[i]=EEPROM[i];
}

void wEE(){
 Ser.println('WRITING EEPROM');
 for (int i=0; i<64;i++) EEPROM[i]=EE[i];
}

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  Ser.begin(9600);
  rEE();
}

// the loop function runs over and over again forever
void loop() {
  Ser.println('1');
  //if (PORTB & 0b00000001){
   //последний бит равен 1
  //}
  for (byte i=2;i<dpins;i++){
   if (){

     
   }
  }
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}