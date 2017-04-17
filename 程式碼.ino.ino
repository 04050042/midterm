#include <SevSeg.h>
SevSeg sevseg;
int Btn1,Btn2; 

void setup()
{
  Serial.begin(9600);
  Serial.println("12/04050042/04052572");
  
  byte numDigits = 4;
  byte digitPins[] = {13,12,11,10};
  byte segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
  sevseg.begin(COMMON_CATHODE, numDigits, digitPins,segmentPins);
}
void loop()
{
  if(Serial.available()>0)
  {
      12
       int val = Serial.parseInt();
       if(val>=0 && val<=9999)
       {
         sevseg.setNumber(val,0);
         Serial.println(val);

       }
       else
         Serial.println("range error");  
  }
  else
    sevseg.refreshDisplay();
}

