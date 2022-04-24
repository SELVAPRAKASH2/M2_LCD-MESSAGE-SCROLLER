#include <LiquidCrystal.h>
/**
 * @file LCD Message Scroller.h
 * @author Selva.R (selva.18ece@sonatech.ac.in)
 * @brief LCD Message Scroller
 * @version 0.1
 * @date 2022-04-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */


const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);


void static_loop()
{
   lcd.setCursor(0,0);
   lcd.print("Hello Friends!");
   delay(1000);
   lcd.clear();
   lcd.setCursor(0,0);
   lcd.print("Todays");
   lcd.setCursor(0,1);
   lcd.print("Headlines");
   delay(2000);
   
}

void scrolling_loop()
{
   String text = "US announces new 800 mn Dollor package for Ukraine           Airports to attract Rs 1 trillion in 4 years,Scindia              Bengal CNG infra-GAIL, HPCL to pump in Rs 17,000 cr              Delhi-Omicron sub-variant could be behind surge              Uttarakhand- New stringent land deal rules likely ";
   int i, j=0;
  for (i =0; i<text.length(); i++)
  {
      if(i<15)
      {
          lcd.setCursor(i,0);
          lcd.print(text.charAt(i));
          delay(250);
      }
       else
       {
           for(i=16;i<text.length();i++)
           {   
               j++;
               lcd.setCursor(0,0);
               lcd.print(text.substring(j,j+16));
             delay(250);
           }
       }
  }
} 
void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
}

void loop() {
 
  static_loop();
  delay(1000);
  
  lcd.clear();
  
  scrolling_loop();
  delay(1000);

  lcd.clear();
}