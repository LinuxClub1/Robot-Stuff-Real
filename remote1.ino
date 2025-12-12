#define one 0x20DF8877
#define two 0x20DF48B7

#include <IRremote.h>

const int RECV_PIN = 7;
IRrecv irrecv(RECV_PIN);
decode_results results;
const int redPin = 11;
const int greenPin = 10;


void setup(){
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
}

void loop(){
    if (irrecv.decode(&results)){

        switch(results.value){
          case one: //Keypad button "5"
          digitalWrite(redPin, HIGH);
          delay(2000);
          digitalWrite(redPin, LOW);
          }

        switch(results.value){
          case two: //Keypad button "2"
          digitalWrite(greenPin, HIGH);
          delay(2000);
          digitalWrite(greenPin, LOW);
          }

        irrecv.resume(); 
    }
}//*/
