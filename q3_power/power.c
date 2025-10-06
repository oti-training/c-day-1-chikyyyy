/*
 * Day 1 Exercise 3: Power Calculator
 *
 * TODO: Implement a program that calculates power (P = V * I)
 * and checks if it's within the maximum limit (5.0W).
 *
 * Compile with: gcc -Wall -Wextra -std=c99 -o power power.c
 * Run with: ./power
 */

#include <stdio.h>
#include "power.h"

/**
 * Calculates power consumption: P = V * I
 * @param voltage Voltage in volts
 * @param current Current in amps
 * @return Calculated power in watts
 */
float calculate_power(float voltage, float current) {
    // TODO: Implement power calculation
    float power = voltage * current;
    printf("Power consumption: %.3f W\n", power);
    return power;  // Placeholder

}

/**
 * Checks if power is within safe limit (5.0W)
 * @param power Power in watts
 * @return 1 if valid (<=5.0W), 0 if invalid
 */
int is_valid_power(float power) {
    // TODO: Implement power validation logic
    if (power <= 5.0f) {
	    return 1;
    } else {
	    return 0; //not valid
    }  // Placeholder
}

#ifndef UNIT_TEST
int main(void) {
    float voltage = 0.0f, current = 0.0f, power;
    float max_power = 5.0f;

    printf("Power Calculator for Chip Validation\n");
    printf("Maximum allowed power: %.1fW\n", max_power);

    printf("Enter voltage (V): ");
        if (scanf("%f", &voltage) != 1) {
           printf("Invalid input for voltage.\n");
           return 1;
    }
    printf("Enter current (A): ");
   	 if (scanf("%f", &current) != 1) {
            printf("Invalid input for current.\n");
            return 1;
    }
    // TODO: Read voltage and current, calculate power, and validate
    // Read voltage and current, calculate power, and validate
    power = calculate_power(voltage, current);

    if (is_valid_power(power)) {
	    printf ("Power consumption %.3f W is within the safe limit.\n", power);
    } else {
	   printf ("Power consumption %.3f W exceeds the safe limit.\n", power); 
    return 0;
    }
}
#endif

