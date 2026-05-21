/*
OBS: como é um sensor de som se houver muito barulho será improvavel que você note um diferença muito grande entre isso e ligar o led direto no vcc
     por isso coloquei 10000ms  

*/

#define SOM_DIGITAL 2
#define LED 13

bool estadoLed = false;       // Guarda o estado do led
bool ultimoEstado = LOW; // O botão com INPUT_PULLUP começa em LOW


void setup() {
  pinMode(SOM_DIGITAL, INPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  bool som = digitalRead(SOM_DIGITAL);

  if(som != ultimoEstado){
    estadoLed = !estadoLed;
    delay(10000); // "congela" o processador por 10000ms 
  }

  digitalWrite(LED, estadoLed); 

  ultimoEstado = estadoLed;

}
