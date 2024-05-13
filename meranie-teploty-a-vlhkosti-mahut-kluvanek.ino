#include "DHT.h"

DHT dht;

int a=1;
int b=2;
int c=32;
int d=4;
int e=5;
int f=22;
int g=14;
int h=26;

int led=25;
int button=27;
int button2=19;
int button3=23;

int dig1=21;
int dig2=19;
int dig3=16;
int dig4=18;

void setup() {
pinMode(led,OUTPUT);
pinMode(button,INPUT);
pinMode(button2,INPUT);
pinMode(button3,INPUT);

pinMode(a,OUTPUT);
pinMode(a,OUTPUT);
pinMode(b,OUTPUT);
pinMode(c,OUTPUT);
pinMode(d,OUTPUT);
pinMode(e,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
pinMode(h,OUTPUT);

pinMode(dig1,OUTPUT);
pinMode(dig2,OUTPUT);
pinMode(dig3,OUTPUT);
pinMode(dig4,OUTPUT);
dht.setup(25);
} 
void loop() {
  delay(dht.getMinimumSamplingPeriod());
  while(true){
    float humidity = dht.getHumidity();
    float temperature = dht.getTemperature();
    if (temperature >= 10 && temperature <11 ) {
      digit4();
      celzia();
      delay(2);
      digit3();
      zero();
      delay(2);
      digit2();
      one();
      delay(2);
    }
    if (temperature >= 11 && temperature <12 ) {
      digit4();
      celzia();
      delay(2);
      digit3();
      one();
      delay(2);
      digit2();
      one();
      delay(2);
    }
    if (temperature >= 12 && temperature <13 ) {
      digit4();
      celzia();
      delay(2);
      digit3();
      two();
      delay(2);
      digit2();
      one();
      delay(2);
    }
    if (temperature >= 13 && temperature <14 ) {
      digit4();
      celzia();
      delay(2);
      digit3();
      three();
      delay(2);
      digit2();
      one();
      delay(2);
    }
    if (temperature >= 14 && temperature <15 ) {
      digit4();
      celzia();
      delay(2);
      digit3();
      four();
      delay(2);
      digit2();
      one();
      delay(2);
    }
    if (temperature >= 15 && temperature <16 ) {
      digit4();
      celzia();
      delay(2);
      digit3();
      five();
      delay(2);
      digit2();
      one();
      delay(2);
    }
    if (temperature >= 16 && temperature <17 ) {
      digit4();
      celzia();
      delay(2);
      digit3();
      six();
      delay(2);
      digit2();
      one();
      delay(2);
    }
     if (temperature >= 17 && temperature <18 ) {
      digit4();
      celzia();
      delay(2);
      digit3();
      seven();
      delay(2);
      digit2();
      one();
      delay(2);
    }
     if (temperature >= 18 && temperature <19 ) {
      digit4();
      celzia();
      delay(2);
      digit3();
      eight();
      delay(2);
      digit2();
      one();
      delay(2);
    }
    if (temperature >= 19 && temperature <20 ) {
      digit4();
      celzia();
      delay(2);
      digit3();
      nine();
      delay(2);
      digit2();
      one();
      delay(2);
    }
    if (temperature >= 20 && temperature <21 ) {
      digit4();
      celzia();
      delay(2);
      digit3();
      zero();
      delay(2);
      digit2();
      two();
      delay(2);
    }
    if (temperature >= 21 && temperature <22 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      one();
      delay(2);
      digit2();
      two();
      delay(2);
    }
     if (temperature >= 22 && temperature <23 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      two();
      delay(2);
      digit2();
      two();
      delay(2);
    }
     if (temperature >= 23 && temperature <24 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      three();
      delay(2);
      digit2();
      two();
      delay(2);
    }
     if (temperature >= 24 && temperature <25 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      four();
      delay(2);
      digit2();
      two();
      delay(2);
    }
     if (temperature >= 25 && temperature <26 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      five();
      delay(2);
      digit2();
      two();
      delay(2);
    }
     if (temperature >= 26 && temperature <27 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      six();
      delay(2);
      digit2();
      two();
      delay(2);
    }
     if (temperature >= 27 && temperature <28 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      seven();
      delay(2);
      digit2();
      two();
      delay(2);
    }
     if (temperature >= 28 && temperature <29 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      eight();
      delay(2);
      digit2();
      two();
      delay(2);
    }
     if (temperature >= 29 && temperature <30 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      nine();
      delay(2);
      digit2();
      two();
      delay(2);
    }
     if (temperature >= 30 && temperature <31 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      zero();
      delay(2);
      digit2();
      three();
      delay(2);
    }
     if (temperature >= 31 && temperature <32 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      one();
      delay(2);
      digit2();
      three();
      delay(2);
    }
     if (temperature >= 32 && temperature <33 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      two();
      delay(2);
      digit2();
      three();
      delay(2);
    }
     if (temperature >= 33 && temperature <34 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      three();
      delay(2);
      digit2();
      three();
      delay(2);
    }
     if (temperature >= 34 && temperature <35 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      four();
      delay(2);
      digit2();
      three();
      delay(2);
    }
     if (temperature >= 35 && temperature <36 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      five();
      delay(2);
      digit2();
      three();
      delay(2);
    }
     if (temperature >= 36 && temperature <37 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      six();
      delay(2);
      digit2();
      three();
      delay(2);
    }
     if (temperature >= 37 && temperature <38 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      seven();
      delay(2);
      digit2();
      three();
      delay(2);
    }
     if (temperature >= 38 && temperature <39 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      eight();
      delay(2);
      digit2();
      three();
      delay(2);
    }
     if (temperature >= 39 && temperature <40 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      nine();
      delay(2);
      digit2();
      three();
      delay(2);
    }
     if (temperature >= 40 && temperature <41 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      zero();
      delay(2);
      digit2();
      four();
      delay(2);
    }
     if (temperature >= 41 && temperature <42 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      one();
      delay(2);
      digit2();
      four();
      delay(2);
    }
     if (temperature >= 42 && temperature <43 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      two();
      delay(2);
      digit2();
      four();
      delay(2);
    }
     if (temperature >= 43 && temperature <44 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      three();
      delay(2);
      digit2();
      four();
      delay(2);
    }
     if (temperature >= 44 && temperature <45 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      four();
      delay(2);
      digit2();
      four();
      delay(2);
    }
     if (temperature >= 45 ){
      digit4();
      celzia();
      delay(2);
      digit3();
      five();
      delay(2);
      digit2();
      four();
      delay(2);
    }
  
    
  }
  
} 
 
void celzia(){
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(e, HIGH);
digitalWrite(f, HIGH);
digitalWrite(g, HIGH);
}
 

void zero(){
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, HIGH);

}
void one(){
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, HIGH);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, HIGH);
}
void two(){
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, HIGH);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, HIGH);
digitalWrite(g, LOW);
}
  
void three(){
digitalWrite(a, LOW);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
}
    
void four(){
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, LOW);
digitalWrite(d, HIGH);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
}
    
void five(){
digitalWrite(a, LOW);
digitalWrite(b, HIGH);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(e, HIGH);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
}
    
void nine(){
digitalWrite(a, LOW);
digitalWrite(b, HIGH);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
}
    
void seven(){
digitalWrite(a, HIGH);
digitalWrite(b, HIGH);
digitalWrite(c, HIGH);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, HIGH);
}
    
void eight(){
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(e, LOW);
digitalWrite(f, LOW);
digitalWrite(g, LOW);
}
void six(){
digitalWrite(a, LOW);
digitalWrite(b, LOW);
digitalWrite(c, LOW);
digitalWrite(d, LOW);
digitalWrite(e, HIGH);
digitalWrite(f, LOW);
digitalWrite(g, LOW);


}


void digit1(){
  digitalWrite(dig1, LOW);
  digitalWrite(dig2, LOW);
  digitalWrite(dig3, LOW);
  digitalWrite(dig4, HIGH);
  digitalWrite(h, HIGH);
}
void digit2(){
  digitalWrite(dig1, LOW);
  digitalWrite(dig2, LOW);
  digitalWrite(dig3, HIGH);
  digitalWrite(dig4, LOW);
  digitalWrite(h, HIGH);
}
void digit3(){
  digitalWrite(dig1, LOW);
  digitalWrite(dig2, HIGH);
  digitalWrite(dig3, LOW);
  digitalWrite(dig4, LOW);
  digitalWrite(h, HIGH);
  
}
void digit4(){
  digitalWrite(dig1, HIGH);
  digitalWrite(dig2, LOW);
  digitalWrite(dig3, LOW);
  digitalWrite(dig4, LOW);
  digitalWrite(h, LOW);
}