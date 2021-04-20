#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{    
	    int index, shift;
	    int count = 0;
	    int sum = 0;
	    int max = INT_MAX;

	    scanf("%d", &index);
	    int arrayx[index];
	    int arrayy[index];
	    
	    int i;
	    for(i = 0; i < sizeof(arrayx) / sizeof(arrayx[0]); i++){
		    scanf("%d", &arrayx[i]);
	    }	

	    for(i = 0; i < sizeof(arrayy) / sizeof(arrayy[0]); i++){
		    scanf("%d", &arrayy[i]);
	    }

	    while (count <= index - 1){
		    for (i = 0; i <= index - 1; i++){
			    sum += abs(arrayx[i] - arrayy[i]);
		    }	

		    if (sum < max) {
			    max = sum;
			    shift = count;
		    }
		   
		    sum = 0;
		    int x = arrayy[index - 1];
		   
		    for (i = index - 1; i > 0; i--){
			    arrayy[i] = arrayy[i - 1]; 
		    }
		   
		    arrayy[0] = x;
		    count++;
	    }
	    printf("%d\n", shift);
	    return 0;
}
