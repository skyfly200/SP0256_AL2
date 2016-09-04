// Voice Pins -- The SP0256 address pins are all on the same port here.
// This isn't necessary but it does make it a lot easier to pick an
// allophone in code using PORTC in this case.
#define PIN_A1  A0
#define PIN_A2  A1
#define PIN_A3  A2
#define PIN_A4  A3
#define PIN_A5  A4
#define PIN_A6  A5
#define PIN_ALD  10
#define PIN_LRQ  9
#define PIN_BTN  2

#include "allophones.h"
 
// pause words
byte pause1[] = {PA1};
byte pause2[] = {PA2};
byte pause3[] = {PA3};
byte pause4[] = {PA4};
byte pause5[] = {PA5};

// Word to Allophone Dictionary
// Numbers
byte zero[] = {ZZ, YR, OW};
byte one[] = {WW, AX, NN1};
byte two[] = {TT2, UW2};
byte three[] = {TH, RR1, IY};
byte four[] = {FF, FF, OR};
byte five[] = {FF, FF, AY, VV};
byte six[] = {SS, SS, IH, IH, PA3, KK2, SS};
byte seven[] = {SS, SS, EH, VV, IH, NN1};
byte eight[] = {EY, PA3, TT2};
byte nine[] = {NN1, AA, AY, NN1};
byte ten[] = {TT2, EH, EH, NN1};
byte eleven[] = {IH, LL, EH, EH, VV, IH, NN1};
byte twelve[] = {TT2, WH, EH, EH, LL, VV};
byte thirteen[] = {TH, ER1, PA2, PA3, TT2, IY, NN1};
byte fourteen[] = {FF, FF, OR, PA2, PA3, TT2, IY, NN1};
byte fifteen[] = {FF, IH, FF, PA2, PA3, TT2, IY, NN1};
byte sixteen[] = {SS, SS, IH, IH, PA3, KK2, SS, PA2, PA3, TT2, IY, NN1};
byte seventeen[] = {SS, SS, EH, VV, IH, NN1, PA2, PA3, TT2, IY, NN1};
byte eighteen[] = {EY, PA3, TT2, PA2, PA3, TT2, IY, NN1};
byte nineteen[] = {NN1, AA, AY, NN1, PA2, PA3, TT2, IY, NN1};
byte twenty[] = {TT2, WH, EH, EH, NN1, PA2, PA3, TT2, IY};
byte thirty[] = {TH, ER2, PA2, PA3, TT2, IY};
byte forty[] = {FF, OR, PA2, PA3, TT2, IY};
byte fifty[] = {FF, FF, IH, FF, FF, PA2, PA3, TT2, IY};
byte sixty[] = {SS, SS, IH, PA3, KK2, SS, PA2, PA3, TT2, IY};
byte seventy[] = {SS, SS, EH, VV, IH, NN1, PA2, PA3, TT2, IY};
byte eighty[] = {EY, PA3, TT2, IY};
byte ninety[] = {NN1, AY, NN1, PA3, TT2, IY};
byte hundred[] = {HH2, AX, AX, NN1, PA2, DD2, RR2, IH, IH, PA1, DD1};
byte thousand[] = {TH, AA, AW, ZZ, TH, PA1, PA1, PA1, NN1, DD1};
byte million[] = {MM, IH, IH, LL, YY1, AX, NN1};
// Date/Time
byte sunday[] = {SS, SS, AX, AX, NN1, PA2, DD2, EY};
byte monday[] = {MM, AX, AX, NN1, PA2, DD2, EY};
byte tuesday[] = {TT2, UW2, ZZ, PA2, DD2, EY};
byte wednesday[] = {WW, EH, EH, NN1, ZZ, PA2, DD2, EY};
byte thursday[] = {TH, ER2, ZZ, PA2, DD2, EY};
byte friday[] = {FF, RR2, AY, PA2, DD2, EY};
byte saturday[] = {SS, SS, AE, PA3, TT2, ER2, PA2, DD2, EY};
byte january[] = {JH, AE, AE, NN1, YY2, UW2, XR, IY};
byte febuary[] = {FF, EH, EH, PA1, BB1, RR2, UW2, XR, IY};
byte march[] = {MM, AR, PA3, CH};
byte april[] = {EY, PA3, PP, RR2, IH, IH, LL};
byte may[] = {MM, EY};
byte june[] = {JH, UW2, NN1};
byte july[] = {JH, UW1, LL, AY};
byte august[] = {AO, AO, PA2, GG2, AX, SS, PA3, TT1};
byte september[] = {SS, SS, EH, PA3, PP, PA3, TT2, EH, EH, MM, PA1, BB2, ER1};
byte october[] = {AA, PA2, KK2, PA3, TT2, OW, PA1, BB2, ER1};
byte november[] = {NN2, OW, VV, EH, EH, MM, PA1, BB2, ER1};
byte december[] = {DD2, IY, SS, SS, EH, EH, MM, PA1, BB2, ER1};
byte time[] = {TT2, AA, AY, MM};
byte date[] = {DD2, EH, EY, TT2};
byte calendar[] = {KK1, AE, AE, LL, EH, NN1, PA2, DD2, ER1};
byte clock[] = {KK1, LL, AA, AA, PA3, KK2};
byte Second[] = {SS, SS, EH, PA3, KK1, IH, NN1, PA2, DD1};
byte Minute[] = {MM, IH, NN1, IH, PA3, TT2};
byte Hour[] = {AW, ER1};
byte Day[] = {DD2, EH, AY};
byte Month[] = {MM, AX, NN1, TH};
byte Year[] = {YY2, YR};
// Letters
byte A[] = {EY};
byte B[] = {BB2, IY};
byte C[] = {SS, SS, IY};
byte D[] = {DD2, IY};
byte E[] = {IY};
byte F[] = {EH, FF};
byte G[] = {JH, IY};
byte H[] = {EY, PA2, PA3, CH};
byte I[] = {AY, EY};
byte J[] = {JH, EY};
byte K[] = {KK1, EH, EY};
byte L[] = {EH, EH, EL};
byte M[] = {EH, EH, MM};
byte N[] = {EH, EH, NN1};
byte O[] = {OW};
byte P[] = {PP, IY};
byte Q[] = {KK1, YY1, UW2};
byte R[] = {AR};
byte S[] = {EH, EH, SS, SS};
byte T[] = {TT2, IY};
byte U[] = {YY1, UW2};
byte V[] = {VV, IY};
byte W[] = {DD2, AX, PA3, BB2, EL, YY1, UW2};
byte X[] = {EH, EH, PA3, KK2, SS, SS};
byte Y[] = {WW, AY};
byte Z[] = {ZZ, IY};
// General Words
byte am[] = {AE, MM};
byte on[] = {AA, AA, NN1};
byte This[] = {TT2, HH1, IH, SS};
byte is[] = {IH, SS};
byte an[] = {AE, NN1};
byte And[] = {AE, NN1, PA1, DD1};
byte in[] = {IH, NN1};
byte the[] = {TT2, HH1, IY};
byte your[] = {YY2, OR};
byte enjoy[] = {EH, NN1, JH, OY};
byte phone[] = {FF, FF, OW, NN1};
byte number[] = {NN1, AX, MM, BB1, ER1, RR2};
byte our[] = {AA, RR2};
byte call[] = {KK1, AO, LL, LL};
byte hi[] = {HH1, AY, EY};
byte point[] = {PP, OY, NN1, TT2};
byte chip[] = {CH, IH, IH, PP};
byte computer[] = {KK1, AX, MM, PP, YY1, UW1, TT2, ER1};
byte Auto[] = {AW, TT2, OW};
byte way[] = {WW, EH, EY};
byte colorado[] = {KK3, AX, LL, OR, RR2, AE, DD2, DH2, OW};

byte *phNum[] = {three, three, three, five, five, five, four, zero, nine, five};
byte lengths[] = {3, 3, 3, 4, 5, 5, 3, 3, 4, 4};

int buttonState;             // the current reading from the input pin
int lastButtonState = HIGH;   // the previous reading from the input pin
// the following variables are long's because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long lastDebounceTime = 0;  // the last time the output pin was toggled
long debounceDelay = 50;    // the debounce time; increase if the output flickers

void setup() {
  
  // Set pin modes
  pinMode( PIN_ALD, OUTPUT );
  pinMode( PIN_LRQ, INPUT );
 
  DDRC = B00111111;  // Sets Analog pins 0-5 to output
 
  digitalWrite(PIN_ALD, HIGH);
  
  say(*phnum, 21);
}
 
void loop() {
}
 
void say(byte* phrase[], int wordNum) {
  for (int i=0; i<wordNum; i++) {
    speak( phrase[i], lengths[i] );
  }
} 
 
void speak( byte* allophones, byte count ) {
  for( byte b = 0; b < count; b++ ) {
    speak( allophones[b] );
  }
  speak( PA3 ); // short pause after each word
}
 
void speak( byte allophone ) {
   while ( digitalRead(PIN_LRQ) == HIGH ); // Wait for LRQ to go low
 
  PORTC = allophone; // select the allophone
 
  // Tell it to speak by toggling ALD
  digitalWrite(PIN_ALD, LOW);
  digitalWrite(PIN_ALD, HIGH);
}
