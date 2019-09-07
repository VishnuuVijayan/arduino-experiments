

/*Connections: 
 * 
 * LED Cathode to Resistor R2 = 220 ohm
  * LED Anode to 11
  * R2 to GND
  * Button first pin to Resistor R1 = 10K
  * Button Second pin to GND
  * Leave other 2 pins
  * R1 second end to 5V
 * 
*/


int ledpin=11;            //definition digital 11 pins as pin to control the LED
int btnpin=2;             //Set the digital 2 to button interface 

volatile int state = LOW; // Defined output status LED Interface

void setup()
{
  pinMode(ledpin,OUTPUT);//Set digital 11 port mode, the OUTPUT for the output
  pinMode(btnpin,INPUT); //Set digital 2 port mode, the INPUT for the input
}

void loop()
{
  if(digitalRead(btnpin)==LOW)          //Detection button interface to low
  {   
      delay(10);                        //Delay 10ms for the elimination of key leading-edge jitter
      if(digitalRead(btnpin)==LOW)      //Confirm button is pressed
      {     
        while(digitalRead(btnpin)==LOW);//Wait for key interfaces to high
        delay(10);                      //delay 10ms for the elimination of key trailing-edge jitter
        while(digitalRead(btnpin)==LOW);//Confirm button release
        state = !state;                 //Negate operation, each time you run the program here, state the HGIH becomes LOW, or the state becomes the LOW HGIH.
        digitalWrite(ledpin,state);     //Output control status LED, ON or OFF 
      }
   }
}
