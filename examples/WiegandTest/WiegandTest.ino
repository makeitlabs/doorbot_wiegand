#include <Wiegand.h>

WIEGAND wg;

void setup() {
    pinMode(LED_BUILTIN, OUTPUT);
	Serial.begin(9600);  
	wg.begin();
    Serial.print("HI");
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH); 
  delay(200);

	if (wg.available()) {
   Serial.write(2); 
		Serial.print(wg.getCode(),HEX);
      Serial.write(3); 

	//	Serial.print(wg.getCode());
//		Serial.print(", Type W");
	//	Serial.println(wg.getWiegandType());  
      delay(100);   
	}
  digitalWrite(LED_BUILTIN, LOW); 
  delay(150); 
  
}
