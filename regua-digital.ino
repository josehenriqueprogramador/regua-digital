#include "config.h"
#include "display.h"
#include <Ultrasonic.h>

Ultrasonic ultrasonic(TRIG_PIN, ECHO_PIN);
unsigned long tempoAnterior = 0;
const long intervalo = 100;

void setup() {
  Serial.begin(9600);
  inicializaDisplay();
}

void loop() {
  unsigned long tempoAtual = millis();

  if (tempoAtual - tempoAnterior >= intervalo) {
    tempoAnterior = tempoAtual;

    // Leitura do sensor
    float cm = ultrasonic.read(CM);
    
    // Debug Serial
    Serial.print("Distancia: ");
    Serial.println(cm);

    // Atualização Display
    u8g.firstPage();
    do {
      draw(cm);
    } while (u8g.nextPage());
  }
}
