#include<stdio.h>

int main() {
    float kilometers, ratePerKm, kilosOfBaggage, amountPerKilo;
    float cargo, fare;

    
    printf("Enter the number of kilometers: ");
    scanf("%f", &kilometers);

    printf("Enter the rate per kilometer: ");
    scanf("%f", &ratePerKm);

    printf("Enter the number of kilos of baggage: ");
    scanf("%f", &kilosOfBaggage);

    printf("Enter the amount per kilo of baggage: ");
    scanf("%f", &amountPerKilo);


    fare = (kilometers * ratePerKm) + cargo;
    cargo = kilosOfBaggage * amountPerKilo;
    

    
    printf("Cargo: %.2f\n", cargo);
    printf("Fare: %.2f\n", fare);

    return 0;}
    