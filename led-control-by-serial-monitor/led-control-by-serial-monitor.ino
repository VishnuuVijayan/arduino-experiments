/*
 * Control LED using Serial Monitor.
 * 
 * Connections
 * 
 * 
 * LED Anode to pin 13
 * LED Cathode to Resistor R1 = 220 Ohm
 * Another end of R1 to GND
 * Compile and Upload !
*/






void setup()

{

pinMode(13, OUTPUT);

Serial.begin(9600);

while (!Serial);

Serial.println("Input 1 to Turn LED on and 2 to off");

}

void loop() {

if (Serial.available())

{

int state = Serial.parseInt();

if (state == 1)

{

digitalWrite(13, HIGH);

Serial.println("Command completed LED turned ON");

}

if (state == 2)

{

digitalWrite(13, LOW);

Serial.println("Command completed LED turned OFF");

}

}

}
