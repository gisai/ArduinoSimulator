/*
 * Ejemplo inicial
 * Entorno virtual de aprendizaje para la adquisición de competencias en programación de microcontroladores
 * Código: IE1617.0903
 */

#define pinLED 13

int counter;

//Initial setup
void setup() {
  pinMode(pinLED, OUTPUT);  //LED pin as digital OUTPUT
  counter = 0;
}

void loop() {
  //Counter is an even number
  if (counter%2 == 0) { 
    int sum = 0;
    //LED blinks 20 times
    do {
      digitalWrite(pinLED, HIGH);
      delay(500);
      digitalWrite(pinLED, LOW);
      delay(500);
      sum++; //sum is updated
    }while (sum < 20);
    //LED is powered on
    digitalWrite(pinLED, HIGH);
  }else {
    //LED is powered off
    digitalWrite(pinLED, LOW);
  }
  delay(5000);  
  counter++;
}
