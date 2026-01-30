const int LED_VERDE = 13;
const int LED_AMARELO = 7;
const int LED_VERMELHO = 8;

// tempos base (ms)
int tempoVerde = 5000;
int tempoAmarelo = 2000;
int tempoVermelho = 5000;

// variáveis de sensores (simuladas)
int fluxo = 0;        // quantidade de carros
int chuva = 0;        // 0 = sem chuva | 1 = chuva forte
bool sensorFalha = false;

void setup() {
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
}

void loop() {

  /* ===== SIMULAÇÃO DOS SENSORES ===== */
  fluxo = random(0, 30);      // simula fluxo de carros
  chuva = random(0, 2);       // simula chuva
  sensorFalha = false;        // coloque true para testar falha

  /* ===== AJUSTE DOS TEMPOS ===== */
  tempoVerde = 5000;
  tempoAmarelo = 2000;

  if (fluxo > 15) {
    tempoVerde += 10000; // +10 segundos no verde
  }

  if (chuva == 1) {
    tempoAmarelo += 2000; // +2 segundos no amarelo
  }

  /* ===== MODO SEGURANÇA ===== */
  if (sensorFalha) {
    // pisca amarelo
    digitalWrite(LED_VERDE, LOW);
    digitalWrite(LED_VERMELHO, LOW);

    digitalWrite(LED_AMARELO, HIGH);
    delay(500);
    digitalWrite(LED_AMARELO, LOW);
    delay(500);
    return; // sai do loop normal
  }

  /* ===== CICLO NORMAL DO SEMÁFORO ===== */

  // VERDE
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);
  delay(tempoVerde);

  // AMARELO
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, HIGH);
  digitalWrite(LED_VERMELHO, LOW);
  delay(tempoAmarelo);

  // VERMELHO
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, HIGH);
  delay(tempoVermelho);
}
