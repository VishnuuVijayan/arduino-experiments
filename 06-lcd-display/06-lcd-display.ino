// include the library code:
#include <LiquidCrystal.h>

// Creates an LCD object. Parameters: (rs, enable, d4, d5, d6, d7)
LiquidCrystal lcd(1, 2, 4, 5, 6, 7);

byte heart1[8] =
{
0b00110,
0b01111,
0b11111,
0b11111,
0b01111,
0b00111,
0b00011,
0b00001
};

byte heart2[8] =
{
0b01100,
0b11110,
0b11111,
0b11111,
0b11110,
0b11100,
0b11000,
0b10000
};

byte code1[8] =
{
0b00010,
0b00100,
0b01000,
0b10000,
0b01000,
0b00100,
0b00010,
0b00000
};

byte code2[8] =
{
0b01000,
0b00100,
0b00010,
0b00001,
0b00010,
0b00100,
0b01000,
0b00000
};

byte peace1[8] =
{
0b00000,
0b00000,
0b00001,
0b00001,
0b00001,
0b00001,
0b00000,
0b00000
};

byte peace2[8] =
{
0b01110,
0b10101,
0b00100,
0b00100,
0b00100,
0b01010,
0b10001,
0b01110
};

byte peace3[8] =
{
0b00000,
0b00000,
0b10000,
0b10000,
0b10000,
0b10000,
0b00000,
0b00000
};

void setup() 
{
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);

  // Clears the LCD screen
  lcd.clear();

  lcd.createChar(0, heart1);
  lcd.createChar(1, heart2);
  lcd.createChar(2, code1);
  lcd.createChar(3, code2);
  lcd.createChar(4, peace1);
  lcd.createChar(5, peace2);
  lcd.createChar(6, peace3);
}

void loop() 
{
  // Print a message to the LCD.
  lcd.setCursor(7, 0);
  lcd.write(byte(0));
  lcd.write(byte(1));
  lcd.setCursor(12, 0);
  lcd.write(byte(2));
  lcd.write(byte(3));
  lcd.setCursor(1, 0);
  lcd.write(byte(4));
  lcd.write(byte(5));
  lcd.write(byte(6));
  lcd.setCursor(0, 1);
  lcd.print("Peace Love Code");
}
