//
//  f_to_c.c
//  k_and_r
//
//  Created by Ryan Lopopolo on 7/8/11.
//  Copyright 2011 hyperbo.la. All rights reserved.
//

#include "f_to_c.h"
#include <stdio.h>

#define STEP        20
#define LOWER_BOUND 0
#define UPPER_BOUND 300

/** print Farenheit-Celsius table for 
 *  fahr in 0, 20, ..., 300
 */
int printConversionTable() {
  float celsiusValue;
  printf("%3s %6s\n", "F", "Cy");
  for (int fahr = LOWER_BOUND; fahr <= UPPER_BOUND; fahr += STEP) {
    celsiusValue = 5.0/9.0 * (fahr - 32);
    printf("%3d %6.2f\n", fahr, celsiusValue);
  }
  return 0;
}