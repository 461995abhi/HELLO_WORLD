\\\#include<dht.h>
dht DHT;
int  pin2=A1;


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(A1,INPUT);
}


void loop() {
  // put your main code here, to run repeatedly:
DHT.read11(A1);
Serial.println(DHT.temperature);
Serial.println(DHT.humidity);
delay(1000);

}
