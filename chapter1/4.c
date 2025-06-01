#include <stdio.h>

int main() {
    float fahr, celsius;
    int initial, increment, max;

    fahr = 0;

    initial = -100;
    increment = 20;
    max = 300;

    printf("Celsius:\tFahr:\n");
    celsius = initial;
    while(celsius <= max) {
        printf("%.0f\t%.2f\n", celsius, (celsius * 9.0 / 5.0) + 32);
        celsius = celsius + increment;
    }
}
