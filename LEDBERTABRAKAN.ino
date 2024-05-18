#include <FastLED.h>

#define NUM_LED 35
#define DATA_PIN 9
#define BRIGHTNESS 20
#define DELAY 500
CRGB led[NUM_LED];
int i = 0;
int o = 15;

void setup() {
  // put your setup code here, to run once:
    FastLED.addLeds<NEOPIXEL,
    DATA_PIN>(led, NUM_LED);
    FastLED.setBrightness(BRIGHTNESS);

}

void loop() {
  // put your main code here, to run repeatedly:
/*led[0] = CRGB::Blue;
  FastLED.show();delay(DELAY);

  led[0] = CRGB::Black;
  FastLED.show();delay(DELAY);

  led[1] = CRGB::Blue;
  FastLED.show();delay(DELAY);

  led[1] = CRGB::Black;
  FastLED.show();delay(DELAY);
*/
for(byte i=0; i<NUM_LED/2; i++) {
  led[i] = CRGB::Blue;
  led[NUM_LED-i-1] = CRGB::Blue;
  FastLED.show();delay(DELAY);
  
  
  /*led[i] = CRGB::Black;
  led[NUM_LED-i-1] = CRGB::Black;
  FastLED.show();delay(DELAY);
  */


  }


/*for(byte i=0; i<NUM_LED/2; i++) {
  led[i] = CRGB::Black;
  led[NUM_LED-i-1] = CRGB::Black;
  FastLED.show();delay(DELAY);
  }*/

for(byte i=15; i<NUM_LED; i++) {
  led[i] = CRGB::Red;
  led[NUM_LED-i-1] = CRGB::Red;
  FastLED.show();delay(DELAY);
  }



}
  
  

