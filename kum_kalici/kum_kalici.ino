#include "IRremote.h" 
int receiver = 13;

int b0basildi=0;
int b1basildi=0;
int b2basildi=0;
int b3basildi=0;
int b4basildi=0;
int b5basildi=0;
int b6basildi=0;
int b7basildi=0;
int b8basildi=0;
int b9basildi=0;
int bYbasildi=0;
int bKbasildi=0;
int bOKbasildi=0;

const int LK1 = 2;
const int LM1 = 3;
const int LBM = 4;
const int LBK = 5;

IRrecv irrecv(receiver);

decode_results results;  
#define BUT1 0xFFA25D
#define BUT2 0xFF629D
#define BUT3 0xFFE21D
#define BUT4 0xFF22DD
#define BUT5 0xFF02FD
#define BUT6 0xFFC23D
#define BUT7 0xFFE01F
#define BUT8 0xFFA857
#define BUT9 0xFF906F
#define BUTY 0xFF6897
#define BUT0 0xFF9867
#define BUTK 0xFFB04F
#define yukari 0xFF18E7
#define asagi 0xFF4AB5
#define sol 0xFF10EF
#define sag 0xFF5AA5
#define ok 0xFF38C7



void setup() {

  Serial.begin(9600);
    irrecv.enableIRIn();
  Serial.println("CALISMAK ICIN BEKLIYOR");

  pinMode(LK1, OUTPUT);
  pinMode(LM1, OUTPUT);
  pinMode(LBM,OUTPUT);
 pinMode(LBK,OUTPUT);
}


void loop() {

    digitalWrite(LK1, LOW);
 digitalWrite(LM1,LOW);
  digitalWrite(LBM, LOW);
     digitalWrite(LBK,LOW);
  if (irrecv.decode(&results)){
    Serial.println(results.value,HEX);
    irrecv.resume();
 if(results.value==BUT1)
 {
b1basildi=HIGH;
b2basildi=LOW;
b3basildi=LOW;
b4basildi=LOW;
b5basildi=LOW;
b6basildi=LOW;
b7basildi=LOW;
b8basildi=LOW;
b9basildi=LOW;
b0basildi=LOW;
bYbasildi=LOW;
bKbasildi=LOW;
bOKbasildi=LOW;
 }
     
 if(results.value==BUT2){
 b1basildi=LOW;
b2basildi=HIGH;
b3basildi=LOW;
b4basildi=LOW;
b5basildi=LOW;
b6basildi=LOW;
b7basildi=LOW;
b8basildi=LOW;
b9basildi=LOW;
b0basildi=LOW;
bYbasildi=LOW;
bKbasildi=LOW;
bOKbasildi=LOW;
  }

if(results.value==BUT3){ 
  b1basildi=LOW;
b2basildi=LOW;
b3basildi=HIGH;
b4basildi=LOW;
b5basildi=LOW;
b6basildi=LOW;
b7basildi=LOW;
b8basildi=LOW;
b9basildi=LOW;
b0basildi=LOW;
bYbasildi=LOW;
bKbasildi=LOW;
bOKbasildi=LOW;
   }
     
 if(results.value==BUT4){ 
    b1basildi=LOW;
    b2basildi=LOW;
    b3basildi=LOW;
    b4basildi=HIGH;
    b5basildi=LOW;
    b6basildi=LOW;
    b7basildi=LOW;
    b8basildi=LOW;
    b9basildi=LOW;
    b0basildi=LOW;
    bYbasildi=LOW;
    bKbasildi=LOW;
    bOKbasildi=LOW;
  }
  if(results.value==BUT5){
    b1basildi=LOW;
    b2basildi=LOW;
    b3basildi=LOW;
    b4basildi=LOW;
    b5basildi=HIGH;
    b6basildi=LOW;
    b7basildi=LOW;
    b8basildi=LOW;
    b9basildi=LOW;
    b0basildi=LOW;
    bYbasildi=LOW;
    bKbasildi=LOW;
    bOKbasildi=LOW;
  }
    if(results.value==BUT6){
    b1basildi=LOW;
    b2basildi=LOW;
    b3basildi=LOW;
    b4basildi=LOW;
    b5basildi=LOW;
    b6basildi=HIGH;
    b7basildi=LOW;
    b8basildi=LOW;
    b9basildi=LOW;
    b0basildi=LOW;
    bYbasildi=LOW;
    bKbasildi=LOW;
    bOKbasildi=LOW;
    }
   if(results.value==BUT7){
    b1basildi=LOW;
    b2basildi=LOW;
    b3basildi=LOW;
    b4basildi=LOW;
    b5basildi=LOW;
    b6basildi=LOW;
    b7basildi=HIGH;
    b8basildi=LOW;
    b9basildi=LOW;
    b0basildi=LOW;
    bYbasildi=LOW;
    bKbasildi=LOW;
    bOKbasildi=LOW;
    }
    if(results.value==BUT8){
    b1basildi=LOW;
    b2basildi=LOW;
    b3basildi=LOW;
    b4basildi=LOW;
    b5basildi=LOW;
    b6basildi=LOW;
    b7basildi=LOW;
    b8basildi=HIGH;
    b9basildi=LOW;
    b0basildi=LOW;
    bYbasildi=LOW;
    bKbasildi=LOW;
    bOKbasildi=LOW;
}
if(results.value==BUT9){
    b1basildi=LOW;
    b2basildi=LOW;
    b3basildi=LOW;
    b4basildi=LOW;
    b5basildi=LOW;
    b6basildi=LOW;
    b7basildi=LOW;
    b8basildi=LOW;
    b9basildi=HIGH;
    b0basildi=LOW;
    bYbasildi=LOW;
    bKbasildi=LOW;
    bOKbasildi=LOW;
    }
if(results.value==BUT0){
    b1basildi=LOW;
    b2basildi=LOW;
    b3basildi=LOW;
    b4basildi=LOW;
    b5basildi=LOW;
    b6basildi=LOW;
    b7basildi=LOW;
    b8basildi=LOW;
    b9basildi=LOW;
    b0basildi=HIGH;
    bYbasildi=LOW;
    bKbasildi=LOW;
    bOKbasildi=LOW;
    }
   if(results.value==BUTY){ 
      b1basildi=LOW;
    b2basildi=LOW;
    b3basildi=LOW;
    b4basildi=LOW;
    b5basildi=LOW;
    b6basildi=LOW;
    b7basildi=LOW;
    b8basildi=LOW;
    b9basildi=LOW;
    b0basildi=LOW;
    bYbasildi=HIGH;
    bKbasildi=LOW;
    bOKbasildi=LOW;
   } 
   if(results.value==BUTK){
    b1basildi=LOW;
    b2basildi=LOW;
    b3basildi=LOW;
    b4basildi=LOW;
    b5basildi=LOW;
    b6basildi=LOW;
    b7basildi=LOW;
    b8basildi=LOW;
    b9basildi=LOW;
    b0basildi=LOW;
    bYbasildi=LOW;
    bKbasildi=HIGH;
    bOKbasildi=LOW;
   }

  if(results.value==ok){
    b1basildi=LOW;
    b2basildi=LOW;
    b3basildi=LOW;
    b4basildi=LOW;
    b5basildi=LOW;
    b6basildi=LOW;
    b7basildi=LOW;
    b8basildi=LOW;
    b9basildi=LOW;
    b0basildi=LOW;
    bYbasildi=LOW;
    bKbasildi=LOW;
    bOKbasildi=HIGH;
  }
  }
  
  
  if(b1basildi==HIGH){
     digitalWrite(LK1, HIGH);
  digitalWrite(LM1, HIGH);
 digitalWrite(LBM,HIGH);
 digitalWrite(LBK,HIGH);
  delay(500);
  digitalWrite(LK1, LOW);
  digitalWrite(LM1, LOW);
  digitalWrite(LBM,LOW);
  digitalWrite(LBK,LOW);
  delay(500);
  
  }
else if(b2basildi==HIGH){
    digitalWrite(LK1, HIGH);
  digitalWrite(LM1,HIGH);
  delay(100);
  digitalWrite(LBM, LOW);
   digitalWrite(LBK,LOW);
  delay(100);
  digitalWrite(LK1, LOW);
  digitalWrite(LM1,LOW);
  delay(100);
  digitalWrite(LBM, HIGH);
    digitalWrite(LBK,HIGH);
  delay(100);
  }
else if(b3basildi==HIGH){ 
 digitalWrite(LK1, HIGH);
   digitalWrite(LBK,HIGH);
  delay(100);
  digitalWrite(LK1, LOW);
  digitalWrite(LM1, LOW);
  digitalWrite(LBM,LOW);
  digitalWrite(LBK,LOW);
  delay(100);
  digitalWrite(LM1, HIGH);
   digitalWrite(LBM,HIGH);
  delay(100);
  digitalWrite(LK1, LOW);
  digitalWrite(LM1, LOW);
 digitalWrite(LBM,LOW);
   digitalWrite(LBK,LOW);
  delay(100);
  }
  else if(b4basildi==HIGH){
     digitalWrite(LK1, HIGH);
   digitalWrite(LBM,HIGH);
  delay(200);
  digitalWrite(LK1, LOW);
  digitalWrite(LM1, LOW);
  digitalWrite(LBM,LOW);
  digitalWrite(LBK,LOW);
  delay(200);
  digitalWrite(LM1, HIGH);
   digitalWrite(LBK,HIGH);
  delay(200);
  digitalWrite(LK1, LOW);
  digitalWrite(LM1, LOW);
 digitalWrite(LBM,LOW);
   digitalWrite(LBK,LOW);
  delay(200);
  }
else if(b5basildi==HIGH){
     digitalWrite(LK1, HIGH);
  digitalWrite(LBM,HIGH);
  delay(50);
  digitalWrite(LK1, LOW);
  digitalWrite(LBM,LOW);
  delay(50);
  digitalWrite(LK1, HIGH);
   digitalWrite(LBM,HIGH);
  delay(50);
  digitalWrite(LK1, LOW);
  digitalWrite(LBM,LOW);
  delay(50);
  digitalWrite(LK1, HIGH);
   digitalWrite(LBM,HIGH);
  delay(50);
  digitalWrite(LK1, LOW);
   digitalWrite(LBM,LOW);
  delay(50);
  digitalWrite(LK1, HIGH);
   digitalWrite(LBM,HIGH);
  delay(50);
  digitalWrite(LK1, LOW);
 digitalWrite(LBM,LOW);
  delay(50);

 digitalWrite(LM1,HIGH);
  digitalWrite(LBK, HIGH);
  delay(50);
  digitalWrite(LM1,LOW);
  digitalWrite(LBK, LOW);
  delay(50);
 digitalWrite(LM1,HIGH);
  digitalWrite(LBK, HIGH);
  delay(50);
 digitalWrite(LM1,LOW);
  digitalWrite(LBK, LOW);
  delay(50);
 digitalWrite(LM1,HIGH);
  digitalWrite(LBK, HIGH);
  delay(50);
    digitalWrite(LM1,LOW);
  digitalWrite(LBK, LOW);
  delay(50);
 digitalWrite(LM1,HIGH);
  digitalWrite(LBK, HIGH);
  delay(50);
    digitalWrite(LM1,LOW);
  digitalWrite(LBK, LOW);
  delay(50);
  }


  else if(b6basildi==HIGH){
  digitalWrite(LK1, HIGH);
  digitalWrite(LBK,HIGH);
  delay(50);
  digitalWrite(LK1, LOW);
  digitalWrite(LBK,LOW);
  delay(50);
  digitalWrite(LK1, HIGH);
   digitalWrite(LBK,HIGH);
  delay(50);
  digitalWrite(LK1, LOW);
  digitalWrite(LBK,LOW);
  delay(50);
  digitalWrite(LK1, HIGH);
   digitalWrite(LBK,HIGH);
  delay(50);
  digitalWrite(LK1, LOW);
   digitalWrite(LBK,LOW);
  delay(50);
  digitalWrite(LK1, HIGH);
   digitalWrite(LBK,HIGH);
  delay(50);
  digitalWrite(LK1, LOW);
 digitalWrite(LBK,LOW);
  delay(50);

 digitalWrite(LM1,HIGH);
  digitalWrite(LBM, HIGH);
  delay(50);
  digitalWrite(LM1,LOW);
  digitalWrite(LBM, LOW);
  delay(50);
 digitalWrite(LM1,HIGH);
  digitalWrite(LBM, HIGH);
  delay(50);
 digitalWrite(LM1,LOW);
  digitalWrite(LBM, LOW);
  delay(50);
 digitalWrite(LM1,HIGH);
  digitalWrite(LBM, HIGH);
  delay(50);
    digitalWrite(LM1,LOW);
  digitalWrite(LBM, LOW);
  delay(50);
 digitalWrite(LM1,HIGH);
  digitalWrite(LBM, HIGH);
  delay(50);
    digitalWrite(LM1,LOW);
  digitalWrite(LBM, LOW);
  delay(50);
  }
   else if(b7basildi==HIGH){
    
  digitalWrite(LK1, HIGH);
  digitalWrite(LM1,HIGH);
  delay(50);
  digitalWrite(LK1, LOW);
  digitalWrite(LM1,LOW);
  delay(50);
  digitalWrite(LK1, HIGH);
   digitalWrite(LM1,HIGH);
  delay(50);
  digitalWrite(LK1, LOW);
  digitalWrite(LM1,LOW);
  delay(50);
  digitalWrite(LK1, HIGH);
   digitalWrite(LM1,HIGH);
  delay(50);
  digitalWrite(LK1, LOW);
   digitalWrite(LM1,LOW);
  delay(50);
  digitalWrite(LK1, HIGH);
   digitalWrite(LM1,HIGH);
  delay(50);
  digitalWrite(LK1, LOW);
 digitalWrite(LM1,LOW);
  delay(50);

 digitalWrite(LBK,HIGH);
  digitalWrite(LBM, HIGH);
  delay(50);
  digitalWrite(LBK,LOW);
  digitalWrite(LBM, LOW);
  delay(50);
 digitalWrite(LBK,HIGH);
  digitalWrite(LBM, HIGH);
  delay(50);
 digitalWrite(LBK,LOW);
  digitalWrite(LBM, LOW);
  delay(50);
 digitalWrite(LBK,HIGH);
  digitalWrite(LBM, HIGH);
  delay(50);
    digitalWrite(LBK,LOW);
  digitalWrite(LBM, LOW);
  delay(50);
 digitalWrite(LBK,HIGH);
  digitalWrite(LBM, HIGH);
  delay(50);
    digitalWrite(LBK,LOW);
  digitalWrite(LBM, LOW);
  delay(50);
  }
   else if(b8basildi==HIGH){
     digitalWrite(LK1,HIGH);
    digitalWrite(LM1,LOW);
    digitalWrite(LBM,LOW);
    digitalWrite(LBK,LOW);
    delay(100);
    digitalWrite(LK1,LOW);
    digitalWrite(LM1,HIGH);
    digitalWrite(LBM,LOW);
    digitalWrite(LBK,LOW);
    delay(100);
     digitalWrite(LK1,LOW);
    digitalWrite(LM1,LOW);
    digitalWrite(LBM,HIGH);
    digitalWrite(LBK,LOW);
    delay(100);
     digitalWrite(LK1,LOW);
    digitalWrite(LM1,LOW);
    digitalWrite(LBM,LOW);
    digitalWrite(LBK,HIGH);
    delay(100);
   }
   else if(b9basildi==HIGH){
    digitalWrite(LK1,LOW);
    digitalWrite(LM1,LOW);
    digitalWrite(LBM,LOW);
    digitalWrite(LBK,HIGH);
    delay(100);
     digitalWrite(LK1,LOW);
    digitalWrite(LM1,LOW);
    digitalWrite(LBM,HIGH);
    digitalWrite(LBK,LOW);
    delay(100);
      digitalWrite(LK1,LOW);
    digitalWrite(LM1,HIGH);
    digitalWrite(LBM,LOW);
    digitalWrite(LBK,LOW);
    delay(100);
    digitalWrite(LK1,HIGH);
    digitalWrite(LM1,LOW);
    digitalWrite(LBM,LOW);
    digitalWrite(LBK,LOW);
    delay(100);
   }
   else if(b0basildi==HIGH){
    digitalWrite(LK1, LOW);
 digitalWrite(LM1,LOW);
  digitalWrite(LBK, LOW);
     digitalWrite(LBM,LOW);
  }
  else if(bYbasildi==HIGH){
    digitalWrite(LK1, HIGH);
 digitalWrite(LM1,HIGH);
  digitalWrite(LBK, LOW);
     digitalWrite(LBM,LOW);
  }
   else if(bKbasildi==HIGH){
    digitalWrite(LK1, LOW);
 digitalWrite(LM1,LOW);
  digitalWrite(LBK, HIGH);
     digitalWrite(LBM,HIGH);
   }
   else if(bOKbasildi==HIGH){
    digitalWrite(LK1, HIGH);
 digitalWrite(LM1,HIGH);
  digitalWrite(LBK, HIGH);
     digitalWrite(LBM,HIGH);
   }
}
