void setup() {
  Serial.begin(9600); //Avviamo la comunicazione seriale
}

void loop() {
  Serial.println(analogRead(A0)); //stampa a video su comunicazione analogica pin A0(Monitor seriale)
  delay(2);
}
