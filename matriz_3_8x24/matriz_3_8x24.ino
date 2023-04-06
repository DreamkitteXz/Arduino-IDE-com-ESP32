#include <SPI.h>
#include <Adafruit_GFX.h>
#include <Max72xxPanel.h>
 
int pinCS = 10; // Attach CS to this pin, DIN to MOSI and CLK to SCK 
int numberOfHorizontalDisplays = 1;
int numberOfVerticalDisplays = 3;
 
Max72xxPanel matrix = Max72xxPanel(pinCS, numberOfHorizontalDisplays, numberOfVerticalDisplays);
 
String txtDisplay = "ETEFMC";
int width = 5 + 1; // The font width is 5 pixels
 
void setup() 
{
 
  matrix.setIntensity(15); // Use a value between 0 and 15 for brightness
  matrix.setPosition(0, 0, 0); // The first display is at <0, 0>
  matrix.setPosition(1, 0, 1); // The second display is at <1, 0>
  matrix.setPosition(2, 0, 2); // The third display is at <2, 0>
  matrix.setRotation(1);    // The same hold for the last display
 matrix.fillScreen(LOW);
 matrix.write();
 delay(400);
 matrix.print("ETE");
 matrix.write();
 delay(2000);
}
 
void loop() 
{
  for ( int i = 0 ; i < width * txtDisplay.length() + matrix.width() - 1 - 1; i++ ) 
  {
    matrix.fillScreen(LOW);
 
    int letter = i / width;
    int x = (matrix.width() - 1) - i % width;
    int y = (matrix.height() - 8) / 2; // center the text vertically
 
    while ( x + width - 1 >= 0 && letter >= 0 ) 
    {
      if ( letter < txtDisplay.length() ) 
      {
        matrix.drawChar(x, y, txtDisplay[letter], HIGH, LOW, 1);
      }
      letter--;
      x -= width;
    }
 
    matrix.write(); // Send bitmap to display
    delay(100);
  }
}
