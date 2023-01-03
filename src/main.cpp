#include "mbed.h"

// Flashing rates in blinks per second
#define FAST_HEART_RATE 5
#define SLOW_HEART_RATE 1
#define ONE_SECOND 1000ms

DigitalOut pbIndicator(LED1);
DigitalOut heart(LED4);
DigitalIn pb(p7);

int main() {
  while (true) {
    heart = !heart;
    pbIndicator = pb;
    if (pb) {
      ThisThread::sleep_for(ONE_SECOND / FAST_HEART_RATE / 2);
    } else {
      ThisThread::sleep_for(ONE_SECOND / SLOW_HEART_RATE / 2);
    }
  }
}
