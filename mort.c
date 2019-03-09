#include <stdio.h>
#include<math.h>

int main() {

	float value, rate;
	int years;

	printf("The initial mortgage value: \n");
	scanf("%f", &value);

	printf("The mortgage rate: \n" );
	scanf("%f", &rate);

	printf("How many years: \n");
	scanf("%d", &years);
	
	printf("For a mortgage of %.2f for %d years and interest rate of %.2f%% \n", value, years, rate);

	float monthly_rate = (rate/100)/12;
	int x = years * 12;
	float formula = pow(1 + monthly_rate, x);
	float p = value * (monthly_rate * formula) / (formula - 1);
	
	float intrate = value*monthly_rate;
	
	int i;
	for ( i = 1; i <= x ; ++i) {

		value = value + intrate - p;
		intrate = value * monthly_rate;

		printf("%*d\t\t%.2f \n",3, i, value);
	}
	
	return 0;



}

 