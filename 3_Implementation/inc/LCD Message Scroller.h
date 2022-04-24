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

#include <LiquidCrystal.h>

const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
