#include <stdio.h>

int main()

{
    printf("BMI CHECK\n");

    int weight, height;
    float bmi;
    printf("Input weight (kg): ");
    scanf("%d", &weight);

    printf("Input height (cm): ");
    scanf("%d", &height);

    // Convert height to meters
    float height_in_meters = height / 100.0;

    // Calculate BMI
    bmi = weight / (height_in_meters * height_in_meters);

    printf("Output BMI: %.2f\n", bmi);

    if (bmi < 18.5)
    {
        printf("BMI Category: Underweight\n");
    }
    else if (bmi >= 18.5 && bmi < 24.9)
    {
        printf("BMI Category: Normal weight\n");
    }
    else if (bmi >= 25 && bmi < 29.9)
    {
        printf("BMI Category: Overweight\n");
    }
    else
    {
        printf("BMI Category: Obesity\n");
    }
    scanf("%d", &weight);

    printf("Output BMI Category: %s\n", (bmi < 18.5) ? "Underweight" : (bmi < 25) ? "Normal weight"
                                                                   : (bmi < 30)   ? "Overweight"
                                                                                  : "Obesity");

    return 0;
}