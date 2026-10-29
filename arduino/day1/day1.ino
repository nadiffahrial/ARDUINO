int merah = 2;
int kuning = 4; 
int hijau = 7;
void setup() {
  // put your setup code here, to run once:
  pinMode(merah,OUTPUT);
  pinMode(kuning,OUTPUT);
  pinMode(hijau,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(merah, HIGH);
  digitalWrite(kuning, LOW);
  digitalWrite(hijau, LOW);
  delay(500);
   digitalWrite(kuning, HIGH);
   digitalWrite(merah, LOW);
   digitalWrite(hijau, LOW);
  delay(500);
  digitalWrite(hijau, HIGH);
  digitalWrite(merah, LOW);
  digitalWrite(kuning, LOW);
  delay(500);

}
