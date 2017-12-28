/*
 * Traffic light blind people
 * Entorno virtual de aprendizaje para la adquisición de competencias en programación de microcontroladores
 * Código: IE1617.0903
 */

#define pinRED A4
#define pinGREEN A5
#define pinBuz 2
#define maxBLINK 10

#define speedHigh 500
#define speedLow 1000

int counter;

//Initial setup
void setup() {
  pinMode(pinRED, OUTPUT);  
  pinMode(pinGREEN, OUTPUT);
  pinMode(pinBuz, OUTPUT);  
  digitalWrite(pinBuz, LOW);  
  counter = 0;
}

void loop() {
  digitalWrite(pinRED, HIGH);
  delay(6000);
  digitalWrite(pinRED, LOW);
  digitalWrite(pinGREEN, HIGH);
  
  for (char i= 0; i < 10000/speedHigh ; i++) {
    tone(pinBuz, 1000); 
    delay(speedHigh);
    tone(pinBuz, 500);
    delay(speedHigh);
  }
  
  while (counter < maxBLINK) {
    digitalWrite(pinGREEN, LOW);
    noTone(pinBuz);
    delay(speedLow);
    digitalWrite(pinGREEN, HIGH);
    tone(pinBuz, 1000); 
    delay(speedLow);
    counter++;
  }
  digitalWrite(pinGREEN, LOW);
  noTone(pinBuz);  
}
