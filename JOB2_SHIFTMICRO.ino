
const int WOWO = 2;
const int led2 = 3;

void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop() {
  digitalWrite(WOWO, HIGH); //UNTUK MENYALAKAN LED MERAH
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(WOWO, LOW);
  digitalWrite(led2, LOW);
  delay(500);

}
