  #include <Wiegand.h>

WIEGAND wg;

#define LED_DOORBOT 8

void setup() {
  pinMode(LED_DOORBOT, OUTPUT);
	Serial.begin(9600);  
	wg.begin();
}

void loop() {
  digitalWrite(LED_DOORBOT, HIGH); 
  delay(100);
	if (wg.available()) {
    Serial.write(2); 
	  Serial.print(wg.getCode(), HEX);
    Serial.write(3); 
    delay(100);   
	}
  digitalWrite(LED_DOORBOT, LOW); 
  delay(100); 
  
}
