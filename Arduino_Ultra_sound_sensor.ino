
int echo=5;
int trigger=6;
int led=7;



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(echo,INPUT);
pinMode(trigger,OUTPUT);
pinMode(led, OUTPUT);

}

void loop() {
  float dist=0;
  digitalWrite(led,LOW);
  digitalWrite(trigger,HIGH);
  delay(5);
  digitalWrite(trigger,LOW);
  
  int time=pulseIn(echo,HIGH);
   dist=(0.0343*time)/2 ;
  delay(100);


  if(dist<10)
  {
    digitalWrite(led,HIGH);
    delay(1000);
        Serial.print("Object detected in the Distance of (cm): ");

    Serial.println(dist);
    
    }
  
  // put your main code here, to run repeatedly:

}
