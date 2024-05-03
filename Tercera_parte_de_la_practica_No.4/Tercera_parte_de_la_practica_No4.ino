//Damasco Oxcal 2023442.
// Tercera parte de la practica numero cuatro.
int a=11;
int b=12;
int c=13;
int d=14;
int e=15;
int f=16;
int g=17;

void setup(){
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(18, INPUT);
  pinMode(19, INPUT);
  for(int x=4; x<=17; x++){
  pinMode(x, OUTPUT);
  } 
}

void loop(){
  if((digitalRead(19) == LOW)&&(digitalRead(2) == LOW)){
    Serial.println("Gracias por su Atencion");
    delay(500000);
  }
  if((digitalRead(18) == LOW)&&(digitalRead(3) == LOW)){
    Serial.println("Gracias por su Atencion");
    delay(500000);
  }
  if(digitalRead(2) == LOW){
    Serial.println("Practica No.4 Damasco Oxcal");
    delay(1000);
  }
  if(digitalRead(3) == LOW){
    for(int z=4; z<10; z++){
      digitalWrite(z, HIGH);
      delay(500);
      digitalWrite(z, LOW);
    }
    for(int z=10; z>4; z--){
      digitalWrite(z, HIGH);
      delay(500);
      digitalWrite(z, LOW);
    }
  }
  if(digitalRead(19) == LOW){
    digitalWrite(a, LOW);//c
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(2000);
    digitalWrite(a, HIGH);//u
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(2000);
    digitalWrite(a, LOW);//a
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(2000);
    digitalWrite(a, HIGH);//t
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(2000);
    digitalWrite(a, HIGH);//r
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    delay(2000);
    digitalWrite(a, LOW);//o
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, HIGH);
    delay(2000);
  }
  else{
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
  }  
}
