#include <stdio.h>

float fahrenheitToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

float celsiusToFahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

void menu(){
    printf("\n1. Celsius to Farenheit ");
    printf("\n2. Farenheit to Celsius ");
    printf("\n3. EXIT ");
    printf("\n\nPlease enter your choice : ");
}

int main() {
    float fahrenheit, celsius;
    int choice;
    
    printf("******** TEMPERATURE CONVERTER ********\n");
    
    while(1){
        menu();
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("\nEnter temperature in Celsius: ");
                scanf("%f", &celsius);
                fahrenheit = celsiusToFahrenheit(celsius);
                printf("%.2f Celsius is equal to %.2f Fahrenheit.\n", celsius, fahrenheit);
                break;
            case 2:
                printf("\nEnter temperature in Fahrenheit : ");
                scanf("%f", &fahrenheit);
                celsius = fahrenheitToCelsius(fahrenheit);
                printf("%.2f Fahrenheit is equal to %.2f Celsius.\n", fahrenheit, celsius);
                break;
            case 3:
                return 0;
            }
    }
}
