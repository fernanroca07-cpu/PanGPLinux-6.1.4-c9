#include <stdio.h>

int main(void) 
    { 
        float degrees_F;
        float degrees_C;

        degrees_F = 64.0;
                                                // Convert to degrees C
        degrees_C = (5/9)*(degrees_F - 32.0);
                                                // Output result
        printf("%f/n", degrees_C);
        return 0;

    }