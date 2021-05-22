#include <Arduino.h>
#define ENA HIGH
#define NIC LOW

const byte stevilke[] = {0x3F, 0x06, 0x5B, 0x4F, 0x66, 0x6D, 0x7D, 0x07, 0x7F, 0x67, 0x00};


//                       A  B  C  D   E   F   G  DP
const byte segmenti[] = {6, 7, 8, 9, 10, 11, 12, 13};

void prikaziStevko(byte stevka){
    byte dva = 1;
    for(int i = 0; i < 7; i++){
        digitalWrite(segmenti[i], dva&stevilke[stevka]);
        dva *= 2;
    }
}

void setup() {
    for(int i = 0; i < 8; i++){ // i gre od 0 do 7
        pinMode(segmenti[i], OUTPUT); // npr. segmenti[2] bo imel vrednost 8
        digitalWrite(segmenti[i], NIC); // ugasnemo segmente
    }
}

void loop() {
    for (int i = 0; i < 10; i++){
        prikaziStevko(i);
        delay(1000);
    }

}