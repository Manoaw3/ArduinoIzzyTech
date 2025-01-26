const int piezoPin = A0; // Capteur Piezo connecté à A0
float voltage; 

void setup() {
    Serial.begin(9600); // Initialisation du moniteur série à 9600 bauds
}

void loop() {
    int sensorValue = analogRead(piezoPin); // Lecture de la valeur brute
    voltage = sensorValue * (5.0 / 1023.0); // Conversion en tension (5V max, résolution 10 bits)
    
    Serial.print("Tension lue : ");
    Serial.print(voltage);
    Serial.println(" V"); // Affichage de la tension en volts


  

    delay(1000); 
}
