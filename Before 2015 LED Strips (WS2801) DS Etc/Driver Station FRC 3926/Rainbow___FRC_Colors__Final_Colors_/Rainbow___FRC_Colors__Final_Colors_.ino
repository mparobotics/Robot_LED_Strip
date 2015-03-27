#include "FastLED.h"

// How many leds in your strip?
#define NUM_LEDS 30

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
//rainbow();
}

void loop() { 
	// First slide the led in one direction
	leds[0] = CRGB::Red; FastLED.show(); delay(20); 
    leds[1] = CRGB::Orange; FastLED.show(); delay(20);
    leds[2] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[3] = CRGB::Green; FastLED.show(); delay(20);
    leds[4] = CRGB::Blue; FastLED.show(); delay(20);
    leds[5] = CRGB::Purple; FastLED.show(); delay(20);
    leds[6] = CRGB::Red; FastLED.show(); delay(20); 
    leds[7] = CRGB::Orange; FastLED.show(); delay(20);
    leds[8] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[9] = CRGB::Green; FastLED.show(); delay(20);
    leds[10] = CRGB::Blue; FastLED.show(); delay(20);
    leds[11] = CRGB::Purple; FastLED.show(); delay(20);
    leds[12] = CRGB::Red; FastLED.show(); delay(20); 
    leds[13] = CRGB::Orange; FastLED.show(); delay(20);
    leds[14] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[15] = CRGB::Green; FastLED.show(); delay(20);
    leds[16] = CRGB::Blue; FastLED.show(); delay(20);
    leds[17] = CRGB::Purple; FastLED.show(); delay(20);
    leds[18] = CRGB::Red; FastLED.show(); delay(20); 
    leds[19] = CRGB::Orange; FastLED.show(); delay(20);
    leds[20] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[21] = CRGB::Green; FastLED.show(); delay(20);
    leds[22] = CRGB::Blue; FastLED.show(); delay(20);
    leds[23] = CRGB::Purple; FastLED.show(); delay(20);
    leds[24] = CRGB::Red; FastLED.show(); delay(20); 
    leds[25] = CRGB::Orange; FastLED.show(); delay(20);
    leds[26] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[27] = CRGB::Green; FastLED.show(); delay(20);
    leds[28] = CRGB::Blue; FastLED.show(); delay(20);
    leds[29] = CRGB::Purple; FastLED.show(); delay(20);
    leds[30] = CRGB::Red; FastLED.show(); delay(20); 
    delay(30);

	// Now go in the other direction.  
	for(int i = 0; i < NUM_LEDS; i++) {
		// Set the i'th led to red 
		// Show the leds
		// now that we've shown the leds, reset the i'th led to black
		leds[i] = CRGB::Red;
                //leds[i] = CRGB::Blue;
                FastLED.show();
		// Wait a little bit before we loop around and do it again
		delay(30);

}

       for (int i = 0; i<NUM_LEDS; i++){
        leds[i] = CRGB::White;
         FastLED.show();
        delay(30); 
       }
      for (int i = 0; i < NUM_LEDS; i++){
      
        leds[i] = CRGB::Blue;
        FastLED.show();
        delay(30);
      
      }

}

void rainbow()
{
  // First slide the led in one direction
	leds[0] = CRGB::Red; FastLED.show(); delay(20); 
    leds[1] = CRGB::Orange; FastLED.show(); delay(20);
    leds[2] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[3] = CRGB::Green; FastLED.show(); delay(20);
    leds[4] = CRGB::Blue; FastLED.show(); delay(20);
    leds[5] = CRGB::Purple; FastLED.show(); delay(20);
    leds[6] = CRGB::Red; FastLED.show(); delay(20); 
    leds[7] = CRGB::Orange; FastLED.show(); delay(20);
    leds[8] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[9] = CRGB::Green; FastLED.show(); delay(20);
    leds[10] = CRGB::Blue; FastLED.show(); delay(20);
    leds[11] = CRGB::Purple; FastLED.show(); delay(20);
    leds[12] = CRGB::Red; FastLED.show(); delay(20); 
    leds[13] = CRGB::Orange; FastLED.show(); delay(20);
    leds[14] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[15] = CRGB::Green; FastLED.show(); delay(20);
    leds[16] = CRGB::Blue; FastLED.show(); delay(20);
    leds[17] = CRGB::Purple; FastLED.show(); delay(20);
    leds[18] = CRGB::Red; FastLED.show(); delay(20); 
    leds[19] = CRGB::Orange; FastLED.show(); delay(20);
    leds[20] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[21] = CRGB::Green; FastLED.show(); delay(20);
    leds[22] = CRGB::Blue; FastLED.show(); delay(20);
    leds[23] = CRGB::Purple; FastLED.show(); delay(20);
    leds[24] = CRGB::Red; FastLED.show(); delay(20); 
    leds[25] = CRGB::Orange; FastLED.show(); delay(20);
    leds[26] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[27] = CRGB::Green; FastLED.show(); delay(20);
    leds[28] = CRGB::Blue; FastLED.show(); delay(20);
    leds[29] = CRGB::Purple; FastLED.show(); delay(20);
    leds[30] = CRGB::Red; FastLED.show(); delay(20); 
    delay(30);

	// Now go in the other direction.  
	for(int i = 0; i < NUM_LEDS; i++) {
		// Set the i'th led to red 
		// Show the leds
		// now that we've shown the leds, reset the i'th led to black
		leds[i] = CRGB::Red;
                FastLED.show();
		// Wait a little bit before we loop around and do it again
		delay(30);
	}
}
