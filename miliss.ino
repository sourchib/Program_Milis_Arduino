unsigned long crnmill;
unsigned long prvmil;
unsigned long crnmill2;
unsigned long prvmil2;
int del = 3000;
int sensor2 = 1000;
void setup() {

}

void loop() {
  // put your main code here, to run repeatedly:

crnmil = millis();
if((crnmil-prvmil)>=del){
  

prvmil = millis();
}

crnmil2 = millis();
if((crnmil2-prvmil2)>=sensor2){
  

prvmil2 = millis();
}

}
