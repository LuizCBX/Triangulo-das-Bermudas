void setup() {
 pinMode(5, OUTPUT); 
 pinMode(6, OUTPUT);
 pinMode(9, OUTPUT);
 pinMode(10, OUTPUT);
}

void loop() {
 //seguirFrente
 seguirFrente();
 delay(1000);
 seguirDireita();
 delay(750); 
 
}

//funçao seguirFrente
void seguirFrente(){
analogWrite(5,110);
digitalWrite(6,LOW);
analogWrite(9,85);
digitalWrite(10,LOW);
}


// funçao seguirDireita
void seguirDireita(){
analogWrite(5,LOW);
digitalWrite(6, LOW);
analogWrite(9,110);
digitalWrite(10, LOW);
}
