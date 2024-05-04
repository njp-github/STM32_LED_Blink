#include "HardwareSerial.h"

#define LED1 PA1
#define LED2 PA0
#define RX3 PB11
#define TX3 PB10

HardwareSerial Serial3(RX3, TX3); // Set up Serial communication on USART3

void setup() {
  
  // put your setup code here, to run once:
  
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  Serial3.begin(9600);
}

void loop() {
  
  // put your main code here, to run repeatedly:
  
  digitalWrite(LED1, HIGH); // Turn LED1 on (HIGH is the voltage level)
  Serial3.print("LED1 - HIGH\n"); // Print status on the serial monitor
  
  delay(1000); // wait for 1 second
  
  digitalWrite(LED1, LOW); // turn LED1 off by making the voltage LOW
  Serial3.print("LED - SWITCH\n");
  digitalWrite(LED2, HIGH); // turn LED2 on (HIGH is the voltage level)
  
  delay(1000); // wait for 1 second
  
  digitalWrite(LED2, LOW); // turn LED2 off by making the voltage LOW
  Serial3.print("LED2 - LOW\n");
}
