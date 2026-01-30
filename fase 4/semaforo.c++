// const int led_verde = 13;
// const int led_amarelo = 7;
// const int led_vermelho = 8;

// int fluxo = 0;
// int carrosDetectados = 0;

// const unsigned long intervalo = 10000; // 10 segundos
// unsigned long tempoAnterior = 0;

// // tempos do semáforo
// const int tempoVerdeBase = 5000;
// const int tempoVerdeExtra = 5000;
// const int tempoAmarelo = 2000;
// const int tempoVermelho = 5000;

// void setup() {
//   pinMode(led_verde, OUTPUT);
//   pinMode(led_amarelo, OUTPUT);
//   pinMode(led_vermelho, OUTPUT);
// }

// void loop() {

//   //  Atualização do fluxo
//   unsigned long tempoAtual = millis();
//   if (tempoAtual - tempoAnterior >= intervalo) {
//     tempoAnterior = tempoAtual;

//     // simulação do sensor de veículos
//     carrosDetectados = random(0, 30);
//     fluxo = carrosDetectados;
//   }

//   //  Define o tempo do verde
//   int tempoVerde = tempoVerdeBase;

//   if (fluxo > 15) {
//     tempoVerde = tempoVerdeBase + tempoVerdeExtra;
//   }

//   // Verde 
//   digitalWrite(led_verde, HIGH);
//   digitalWrite(led_amarelo, LOW);
//   digitalWrite(led_vermelho, LOW);
//   delay(tempoVerde);

//   //Amarelo 
//   digitalWrite(led_verde, LOW);
//   digitalWrite(led_amarelo, HIGH);
//   digitalWrite(led_vermelho, LOW);
//   delay(tempoAmarelo);

//   // Vermelho 
//   digitalWrite(led_verde, LOW);
//   digitalWrite(led_amarelo, LOW);
//   digitalWrite(led_vermelho, HIGH);
//   delay(tempoVermelho);
  
//   while (fluxo > 15) {

//     // Mantém verde ligado
//     digitalWrite(led_verde, HIGH);
//     digitalWrite(led_amarelo, LOW);
//     digitalWrite(led_vermelho, LOW);
//     delay(3000); // tempo extra no verde

//     // Atualiza o fluxo novamente
//     carrosDetectados = random(0, 30);
//     fluxo = carrosDetectados;
//   }
// }
