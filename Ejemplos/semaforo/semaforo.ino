/*
 * Trafic light
 * Entorno virtual de aprendizaje para la adquisición de competencias en programación de microcontroladores
 * Código: IE1617.0903
 */

#define pinRED A4
#define pinGREEN A5
#define maxBLINK 10

int counter;

//Initial setup
void setup() {
  pinMode(pinRED, OUTPUT);  
  pinMode(pinGREEN, OUTPUT);  
  counter = 0;
}

void loop() {
  digitalWrite(pinRED, HIGH);
  delay(6000);
  digitalWrite(pinRED, LOW);
  digitalWrite(pinGREEN, HIGH);
  delay(6000);
  
  while (counter < maxBLINK) {
    digitalWrite(pinGREEN, LOW);
    delay(500);
    digitalWrite(pinGREEN, HIGH);
    delay(500);
    counter++;
  }
  digitalWrite(pinGREEN, LOW);
  
}
