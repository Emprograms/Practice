#include <stdio.h>
int main() {
    float hoursUsed, ratePerHour;
    float presentMeter, waterBill;
    const float previousMeter = 330.0;

    
    printf("Enter the number of hours used: ");
    scanf("%f", &hoursUsed);
    printf("Enter the rate per hour: ");
    scanf("%f", &ratePerHour);

    
    presentMeter = hoursUsed * ratePerHour;
    waterBill = presentMeter - previousMeter;

   
    printf("WaterBill: %.2f\n", waterBill);

    return 0;}