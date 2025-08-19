// Define o pino do LED
const int ledPin = 13;

void setup () {
  //Define o pino do LED como saída
    pinMode (ledPin, OUTPUT);
}

void loop () {
    //Acende o LED
    digitalWrite (ledPin, High);
    delay (1000); // Aguarde 1 Segundo

      //Desliga o LED
      digitalWrite (ledPin, LOW);
      delay (1000); // Aguarde 1 Segundo
}