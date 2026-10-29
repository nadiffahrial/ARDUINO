#define ledRed 2
#define ledGreen 4 
void setup(){
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}
void loop (){
  digitalWrite (ledRed, HIGH);
  delay (1000);
  digitalWrite (ledRed, LOW);
  digitalWrite (ledGreen, HIGH);
  delay (1000);
  digitalWrite (ledGreen, LOW);
}