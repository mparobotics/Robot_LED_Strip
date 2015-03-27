#include "FastLED.h"
#define NUM_LEDS 68
CRGB leds[NUM_LEDS];
void setup() { FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS); }
void loop() {
  
    //int colors[6] = {CRGB::Red, CRGB::Orange, CRGB::Yellow, CRGB::Green, CRGB::Blue, CRGB::Purple};
     CRGB hi[6] = {CRGB::Red, CRGB::Orange, CRGB::Yellow, CRGB::Green, CRGB::Blue, CRGB::Purple};
   
    for(int i=0; i<68; i++){
     leds[i] = hi[i%6];
    FastLED.show(); delay(20); 
    }
    
    for(int i=0; i<NUM_LEDS; i++)
    {
     leds[i] = CRGB::Blue;
     FastLED.show();
    delay(18); 
    }

}
