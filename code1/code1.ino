void setup() {
  // Inizializza la comunicazione seriale a 9600 baud rate
  Serial.begin(9600);

  // Imposta il pin del LED come OUTPUT
  pinMode(8, OUTPUT);
}

void loop() {
  // Accende il LED
  digitalWrite(8, HIGH);
  delay(1000); // Attende un secondo

  // Spegne il LED
  digitalWrite(8, LOW);
  delay(1000); // Attende un secondo
}