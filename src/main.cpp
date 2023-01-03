#include <mbed.h>

#define SLEEP_TIME 200ms

DigitalOut redLED(p5);
DigitalOut greenLED(p6);
DigitalIn pb(p7);

int main() {
  while (1) {
    if (pb) {  // <1>
      redLED = !redLED; // <2>
      ThisThread::sleep_for(SLEEP_TIME);
    } else {
      greenLED = !greenLED;
      ThisThread::sleep_for(SLEEP_TIME);
    }
  }
}
