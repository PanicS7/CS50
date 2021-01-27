#include <stdio.h>
#include <cs50.h>

int main(void) {

    // Prompt for start size
    int startSize;
    int endSize;
    int years = 0;
    do {
      startSize = get_int("Start size: ");
    }
    while (startSize < 9);

    // Prompt to end size
    do {
      endSize = get_int("End size: ");
    }
    while (endSize < startSize);

    // Calculate number of years until we reach treshold
    while (startSize < endSize) {
       startSize += startSize / 3 - startSize / 4;
       years++;
    }
    printf("Years: %i\n", years);
    // Print numbers of years

}
