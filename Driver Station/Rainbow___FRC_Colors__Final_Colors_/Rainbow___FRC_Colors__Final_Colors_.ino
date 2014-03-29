#include "FastLED.h"

// How many leds in your strip?
#define NUM_LEDS 69

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
    leds[31] = CRGB::Orange; FastLED.show(); delay(20);
    leds[32] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[33] = CRGB::Green; FastLED.show(); delay(20);
    leds[34] = CRGB::Blue; FastLED.show(); delay(20);
    leds[35] = CRGB::Purple; FastLED.show(); delay(20);
    leds[36] = CRGB::Red; FastLED.show(); delay(20); 
    leds[37] = CRGB::Orange; FastLED.show(); delay(20);
    leds[38] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[39] = CRGB::Green; FastLED.show(); delay(20);
    leds[40] = CRGB::Blue; FastLED.show(); delay(20);
    leds[41] = CRGB::Purple; FastLED.show(); delay(20);
    leds[42] = CRGB::Red; FastLED.show(); delay(20); 
    leds[43] = CRGB::Orange; FastLED.show(); delay(20);
    leds[44] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[45] = CRGB::Green; FastLED.show(); delay(20);
    leds[46] = CRGB::Blue; FastLED.show(); delay(20);
    leds[47] = CRGB::Red; FastLED.show(); delay(20); 
    leds[48] = CRGB::Orange; FastLED.show(); delay(20);
    leds[49] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[50] = CRGB::Green; FastLED.show(); delay(20);
    leds[51] = CRGB::Blue; FastLED.show(); delay(20);
    leds[52] = CRGB::Purple; FastLED.show(); delay(20);
    leds[53] = CRGB::Red; FastLED.show(); delay(20); 
    leds[54] = CRGB::Orange; FastLED.show(); delay(20);
    leds[55] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[56] = CRGB::Green; FastLED.show(); delay(20);
    leds[57] = CRGB::Blue; FastLED.show(); delay(20);
    leds[58] = CRGB::Purple; FastLED.show(); delay(20);
    leds[59] = CRGB::Red; FastLED.show(); delay(20); 
    leds[60] = CRGB::Orange; FastLED.show(); delay(20);
    leds[61] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[62] = CRGB::Green; FastLED.show(); delay(20);
    leds[63] = CRGB::Blue; FastLED.show(); delay(20);
    leds[64] = CRGB::Purple; FastLED.show(); delay(20);
    leds[65] = CRGB::Red; FastLED.show(); delay(20); 
    leds[66] = CRGB::Orange; FastLED.show(); delay(20);
    leds[67] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[68] = CRGB::Green; FastLED.show(); delay(10);
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
    leds[31] = CRGB::Orange; FastLED.show(); delay(20);
    leds[32] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[33] = CRGB::Green; FastLED.show(); delay(20);
    leds[34] = CRGB::Blue; FastLED.show(); delay(20);
    leds[35] = CRGB::Purple; FastLED.show(); delay(20);
    leds[36] = CRGB::Red; FastLED.show(); delay(20); 
    leds[37] = CRGB::Orange; FastLED.show(); delay(20);
    leds[38] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[39] = CRGB::Green; FastLED.show(); delay(20);
    leds[40] = CRGB::Blue; FastLED.show(); delay(20);
    leds[41] = CRGB::Purple; FastLED.show(); delay(20);
    leds[42] = CRGB::Red; FastLED.show(); delay(20); 
    leds[43] = CRGB::Orange; FastLED.show(); delay(20);
    leds[44] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[45] = CRGB::Green; FastLED.show(); delay(20);
    leds[46] = CRGB::Blue; FastLED.show(); delay(20);
    leds[47] = CRGB::Red; FastLED.show(); delay(20); 
    leds[48] = CRGB::Orange; FastLED.show(); delay(20);
    leds[49] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[50] = CRGB::Green; FastLED.show(); delay(20);
    leds[51] = CRGB::Blue; FastLED.show(); delay(20);
    leds[52] = CRGB::Purple; FastLED.show(); delay(20);
    leds[53] = CRGB::Red; FastLED.show(); delay(20); 
    leds[54] = CRGB::Orange; FastLED.show(); delay(20);
    leds[55] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[56] = CRGB::Green; FastLED.show(); delay(20);
    leds[57] = CRGB::Blue; FastLED.show(); delay(20);
    leds[58] = CRGB::Purple; FastLED.show(); delay(20);
    leds[59] = CRGB::Red; FastLED.show(); delay(20); 
    leds[60] = CRGB::Orange; FastLED.show(); delay(20);
    leds[61] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[62] = CRGB::Green; FastLED.show(); delay(20);
    leds[63] = CRGB::Blue; FastLED.show(); delay(20);
    leds[64] = CRGB::Purple; FastLED.show(); delay(20);
    leds[65] = CRGB::Red; FastLED.show(); delay(20); 
    leds[66] = CRGB::Orange; FastLED.show(); delay(20);
    leds[67] = CRGB::Yellow; FastLED.show(); delay(20);
    leds[68] = CRGB::Green; FastLED.show(); delay(10);
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
