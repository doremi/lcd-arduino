#include <gLCD.h>

const char RST = 8;
const char CS = 9;
const char Clk = 13;
const char Data = 11;

gLCD graphic(RST,CS,Clk,Data,HIGH_SPEED); //High speed

void setup()
{
    graphic.begin(0,0,0,EPSON); //Normal Epson
  
    graphic.setBackColour(GLCD_BLACK); //set the background to lime colour.
    graphic.Clear();
  
    Serial.begin(9600);
}

void loop()
{
    graphic.setForeColour(0,13,15); //Text is coloured Blue
    graphic.setFont(Normal_ClearBG_Wrap); //normal size text, solid background.
    graphic.setCoordinate(0,30);
    graphic.print("eth0: 255.255.255.255");
    graphic.setCoordinate(0,60);
    graphic.print("wlan0: 255.255.255.255");

    while (1);
}
