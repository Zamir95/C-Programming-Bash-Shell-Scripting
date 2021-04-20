#include <stdio.h>
#include<math.h>

int main() {

    float amount, rate;
    int years;

    printf("The initial mortgage value: \n");
    scanf("%f", &amount);

    printf("The mortgage rate: \n" );
    scanf("%f", &rate);

    printf("How many years: \n");
    scanf("%d", &years);

    printf("For a mortgage of %.2f for %d years and interest rate of %.2f \n", amount, years, rate);

    float monthlyRate = (rate / 100) / 12;
    int x = years * 12;
    float fl = pow(1 + monthlyRate, x);
    float princ = amount * (monthlyRate * fl) / (fl - 1);
    float interestRate = amount * monthlyRate;

    int i;
    for (i = 1; i <= x; ++i) {
        amount = amount + interestRate - princ;
        interestRate = amount * monthlyRate;

        printf("%3d        %.2f \n", i, amount);
    }
    return 0;
}
