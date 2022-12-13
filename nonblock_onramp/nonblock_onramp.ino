/* Experiments building onramp to use AMS AS7341 sensor via twi_nonblock I2C.
 * Adafruit's sample code for AS7341 sensor uses Arduino's Wire library for
 * I2C communication.
 * https://github.com/adafruit/Adafruit_AS7341
 * 
 * Reading data via this library is a blocking operation which is
 * incompatible with timing-sensitive tasks like generating sound
 * via Mozzi library.
 * https://github.com/sensorium/Mozzi
 *
 * To resolve this issue, Mozzi includes a non-blocking I2C library under the
 * name twi_nonblock. This sketch explores using twi_nonblock to talk to
 * AMS AS7341 using Adafruit's library as a guide and also for declaration of
 * AS7341 I2C commands.
 */

#include <MozziGuts.h>   // at the top of your sketch

void setup() {
	startMozzi();
}

void updateControl(){
	// your control code
}

int updateAudio(){
	// your audio code which returns an int between -244 and 243
}

void loop() {
	audioHook();
}