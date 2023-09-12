int joueur1 = 2; // Port d'entrée numérique
int joueur2 = 3; // Port d'entrée numérique

void setup() {
  pinMode(joueur1, INPUT); // Initialiser le port d'entrée numérique en mode entrée
  pinMode(joueur2, INPUT); // Initialiser le port d'entrée numérique en mode entrée
  Serial.begin(9600); // Initialiser la communication série
}

void loop() {
  int etatJoueur1 = digitalRead(joueur1); // Lire l'état du bouton poussoir
  int etatJoueur2 = digitalRead(joueur2); // Lire l'état du bouton poussoir

  Serial.print("initialisation ok ");

    // Lire les données depuis le port série
    String receivedData = Serial.readString();

    // Faites quelque chose avec les données reçues
    Serial.print("Données reçues : ");
    Serial.println(receivedData);
    if (receivedData == "NOMATCH"){
      digitalWrite(22,HIGH);
      delay(1000);
      digitalWrite(22,LOW);
    }else{
      digitalWrite(22,HIGH);
    }

  if (etatJoueur2 == HIGH) {
    Serial.println("joueur2 à marqué");
    delay(1500);
    }
  if (etatJoueur1 == HIGH) {
    Serial.println("joueur1 à marqué");
    delay(1500);
    }
}