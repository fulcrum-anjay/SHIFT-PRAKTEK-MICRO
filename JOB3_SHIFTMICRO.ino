
//ikan sepat ikan tongkol muka lu kek kont=
const int LedPins[6] = {2, 3, 4, 5, 6, 7};

int pilihan = 1; // ganti angka ini buat pilih animasi (1-10)

void setup() {
  for (int i = 0; i < 6; i++) {
    pinMode(LedPins[i], OUTPUT);
  }
}

void loop() {
  switch (pilihan) {
    case 1: animasi1(); break;
    case 2: animasi2(); break;
    case 3: animasi3(); break;
    case 4: animasi4(); break;
    case 5: animasi5(); break;
    case 6: animasi6(); break;
    case 7: animasi7(); break;
    case 8: animasi8(); break;
    case 9: animasi9(); break;
    case 10: animasi10(); break;
  }
}

// util kecil biar gak nulis digitalWrite semua pin berkali-kali
void semuaLed(int state) {
  for (int i = 0; i < 6; i++) {
    digitalWrite(LedPins[i], state);
  }
}

// animasi 1: menyalakan LED satu per satu dari kiri ke kanan
void animasi1() {
  for (int i = 0; i < 6; i++) {
    digitalWrite(LedPins[i], HIGH);
    delay(100);
    digitalWrite(LedPins[i], LOW);
    delay(100);
  }
}

// animasi 2: menyalakan LED satu per satu dari kanan ke kiri
void animasi2() {
  for (int i = 5; i >= 0; i--) {
    digitalWrite(LedPins[i], HIGH);
    delay(100);
    digitalWrite(LedPins[i], LOW);
    delay(100);
  }
}

// animasi 3: kedip semua LED bersamaan
void animasi3() {
  for (int i = 0; i < 3; i++) {
    semuaLed(HIGH);
    delay(200);
    semuaLed(LOW);
    delay(200);
  }
}

// animasi 4: mengisi LED dari kiri ke kanan (menyala satu-satu, tetap nyala), lalu padam dari kiri ke kanan
void animasi4() {
  for (int i = 0; i < 6; i++) {
    digitalWrite(LedPins[i], HIGH);
    delay(100);
  }
  for (int i = 0; i < 6; i++) {
    digitalWrite(LedPins[i], LOW);
    delay(100);
  }
}

// animasi 5: menyala dari tengah menyebar ke tepi
void animasi5() {
  int kiri = 2, kanan = 3;
  while (kiri >= 0 && kanan <= 5) {
    digitalWrite(LedPins[kiri], HIGH);
    digitalWrite(LedPins[kanan], HIGH);
    delay(150);
    digitalWrite(LedPins[kiri], LOW);
    digitalWrite(LedPins[kanan], LOW);
    kiri--;
    kanan++;
  }
}

// animasi 6: menyala dari tepi mengumpul ke tengah
void animasi6() {
  int kiri = 0, kanan = 5;
  while (kiri <= 2 && kanan >= 3) {
    digitalWrite(LedPins[kiri], HIGH);
    digitalWrite(LedPins[kanan], HIGH);
    delay(150);
    digitalWrite(LedPins[kiri], LOW);
    digitalWrite(LedPins[kanan], LOW);
    kiri++;
    kanan--;
  }
}

// animasi 7: efek bolak-balik satu LED
void animasi7() {
  for (int i = 0; i < 6; i++) {
    digitalWrite(LedPins[i], HIGH);
    delay(80);
    digitalWrite(LedPins[i], LOW);
  }
  for (int i = 4; i >= 0; i--) {
    digitalWrite(LedPins[i], HIGH);
    delay(80);
    digitalWrite(LedPins[i], LOW);
  }
}

// animasi 8: LED indeks genap dan ganjil menyala bergantian
void animasi8() {
  for (int j = 0; j < 4; j++) {
    for (int i = 0; i < 6; i += 2) digitalWrite(LedPins[i], HIGH);
    delay(200);
    for (int i = 0; i < 6; i += 2) digitalWrite(LedPins[i], LOW);

    for (int i = 1; i < 6; i += 2) digitalWrite(LedPins[i], HIGH);
    delay(200);
    for (int i = 1; i < 6; i += 2) digitalWrite(LedPins[i], LOW);
  }
}

// animasi 9: isi dari kanan (tetap nyala), lalu padam dari kanan
void animasi9() {
  for (int i = 5; i >= 0; i--) {
    digitalWrite(LedPins[i], HIGH);
    delay(100);
  }
  for (int i = 5; i >= 0; i--) {
    digitalWrite(LedPins[i], LOW);
    delay(100);
  }
}

// animasi 10: kedip acak (random blink)
void animasi10() {
  for (int i = 0; i < 12; i++) {
    int pin = random(0, 6);
    digitalWrite(LedPins[pin], HIGH);
    delay(80);
    digitalWrite(LedPins[pin], LOW);
  }
}