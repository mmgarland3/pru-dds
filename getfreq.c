#include <stdio.h>
#include <stdlib.h>
#include <prussdrv.h>
#include <pruss_intc_mapping.h>
#include "util.h"

int main (int argc, char **argv)
{
  pruinit();

  printf("Current frequency: %f\n", getfreq());

  return(0);
}

