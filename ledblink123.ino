

int i=0;
int pin=6;
void setup() {


 pinMode(pin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  while(i!=5)
  {

    digitalWrite(6,HIGH);
    delay(1000);
    digitalWrite(6,LOW);
    i++;
}
}
