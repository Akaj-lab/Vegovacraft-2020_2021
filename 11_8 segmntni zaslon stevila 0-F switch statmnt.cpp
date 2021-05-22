#include <Arduino.h>
#define  G 2
#define  F 3
#define  A 4
#define  B 5
#define  E 6
#define  D 7
#define  C 8
#define DP 9

int trst = 0;

void setup() {
    Serial.begin(9600);
    pinMode( G, OUTPUT);
    pinMode( F, OUTPUT);
    pinMode( A, OUTPUT);
    pinMode( B, OUTPUT);
    pinMode( E, OUTPUT);
    pinMode( D, OUTPUT);
    pinMode( C, OUTPUT);
    pinMode(DP, OUTPUT);
}

void prikaz_st_switch(int st) {
    switch (st) {
        case 0:
            digitalWrite(A, HIGH);
            digitalWrite(B, HIGH);
            digitalWrite(C, HIGH);
            digitalWrite(D, HIGH);
            digitalWrite(E, HIGH);
            digitalWrite(F, HIGH);
            digitalWrite(G, LOW);
            //digitalWrite(DP, LOW);
            break;
        case 1:
            digitalWrite(A, LOW);
            digitalWrite(B, HIGH);
            digitalWrite(C, HIGH);
            digitalWrite(D, LOW);
            digitalWrite(E, LOW);
            digitalWrite(F, LOW);
            digitalWrite(G, LOW);
            //digitalWrite(DP, LOW);
            break;
        case 2:
            digitalWrite(A, HIGH);
            digitalWrite(B, HIGH);
            digitalWrite(C, LOW);
            digitalWrite(D, HIGH);
            digitalWrite(E, HIGH);
            digitalWrite(F, LOW);
            digitalWrite(G, HIGH);
            //digitalWrite(DP, LOW);
            break;
        case 3:
            digitalWrite(A, HIGH);
            digitalWrite(B, HIGH);
            digitalWrite(C, HIGH);
            digitalWrite(D, HIGH);
            digitalWrite(E, LOW);
            digitalWrite(F, LOW);
            digitalWrite(G, HIGH);
            //digitalWrite(DP, LOW);
            break;
        case 4:
            digitalWrite(A, LOW);
            digitalWrite(B, HIGH);
            digitalWrite(C, HIGH);
            digitalWrite(D, LOW);
            digitalWrite(E, LOW);
            digitalWrite(F, HIGH);
            digitalWrite(G, HIGH);
            //digitalWrite(DP, LOW);
            break;
        case 5:
            digitalWrite(A, HIGH);
            digitalWrite(B, LOW);
            digitalWrite(C, HIGH);
            digitalWrite(D, HIGH);
            digitalWrite(E, LOW);
            digitalWrite(F, HIGH);
            digitalWrite(G, HIGH);
            //digitalWrite(DP, LOW);
            break;
        case 6:
            digitalWrite(A, LOW);
            digitalWrite(B, LOW);
            digitalWrite(C, HIGH);
            digitalWrite(D, HIGH);
            digitalWrite(E, HIGH);
            digitalWrite(F, HIGH);
            digitalWrite(G, HIGH);
            //digitalWrite(DP, LOW);
            break;
        case 7:
            digitalWrite(A, HIGH);
            digitalWrite(B, HIGH);
            digitalWrite(C, HIGH);
            digitalWrite(D, LOW);
            digitalWrite(E, LOW);
            digitalWrite(F, LOW);
            digitalWrite(G, LOW);
            //digitalWrite(DP, LOW);
            break;
        case 8:
            digitalWrite(A, HIGH);
            digitalWrite(B, HIGH);
            digitalWrite(C, HIGH);
            digitalWrite(D, HIGH);
            digitalWrite(E, HIGH);
            digitalWrite(F, HIGH);
            digitalWrite(G, HIGH);
            //digitalWrite(DP, LOW);
            break;
        case 9:
            digitalWrite(A, HIGH);
            digitalWrite(B, HIGH);
            digitalWrite(C, HIGH);
            digitalWrite(D, LOW);
            digitalWrite(E, LOW);
            digitalWrite(F, HIGH);
            digitalWrite(G, HIGH);
            //digitalWrite(DP, LOW);
            break;
        case 10:
            digitalWrite(A, HIGH);
            digitalWrite(B, HIGH);
            digitalWrite(C, HIGH);
            digitalWrite(D, LOW);
            digitalWrite(E, HIGH);
            digitalWrite(F, HIGH);
            digitalWrite(G, HIGH);
            //digitalWrite(DP, LOW);
            break;
        case 11:
            digitalWrite(A, LOW);
            digitalWrite(B, LOW);
            digitalWrite(C, HIGH);
            digitalWrite(D, HIGH);
            digitalWrite(E, HIGH);
            digitalWrite(F, HIGH);
            digitalWrite(G, HIGH);
            //digitalWrite(DP, LOW);
            break;
        case 12:
            digitalWrite(A, HIGH);
            digitalWrite(B, LOW);
            digitalWrite(C, LOW);
            digitalWrite(D, HIGH);
            digitalWrite(E, HIGH);
            digitalWrite(F, HIGH);
            digitalWrite(G, LOW);
            //digitalWrite(DP, LOW);
            break;
        case 13:
            digitalWrite(A, LOW);
            digitalWrite(B, HIGH);
            digitalWrite(C, HIGH);
            digitalWrite(D, HIGH);
            digitalWrite(E, HIGH);
            digitalWrite(F, LOW);
            digitalWrite(G, HIGH);
            //digitalWrite(DP, LOW);
            break;
        case 14:
            digitalWrite(A, HIGH);
            digitalWrite(B, LOW);
            digitalWrite(C, LOW);
            digitalWrite(D, HIGH);
            digitalWrite(E, HIGH);
            digitalWrite(F, HIGH);
            digitalWrite(G, HIGH);
            //digitalWrite(DP, LOW);
            break;
        case 15:
            digitalWrite(A, HIGH);
            digitalWrite(B, LOW);
            digitalWrite(C, LOW);
            digitalWrite(D, LOW);
            digitalWrite(E, HIGH);
            digitalWrite(F, HIGH);
            digitalWrite(G, HIGH);
            //digitalWrite(DP, LOW);
            break;
    }
}

void loop() {
    //int int pot=analogRead(A0); //obratno od spodnjega
    int pot=1023-analogRead(A0); //je med 0-1023
    int stzapr=map(pot,0,1023,0,15);
    prikaz_st_switch(stzapr);
    trst++;
    //delay(750);
    if(trst>=16)trst=0;
}