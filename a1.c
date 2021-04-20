#include <stdio.h>
#include <stdbool.h>

int main() {
	int length;
       	scanf("%d",&length);
	
	if(length <= 0){
		printf("ERROR_1\n");
	}
       	else {
	       	bool check = false;
		int i;
		int numbers[length];
		for(i = 0; i < length; i++){
	    		if (1 != scanf("%d", &numbers[i])) {
				printf("ERROR_2\n");
				check = true;
				break;
	    		}
		}
		if (!check) {
			bool asce = true;
			bool desc = true;
			bool equal = true;
			bool notDesc = true;
			bool notAsce = true;
			int i;
			for(i = 0; i < (sizeof(numbers) / sizeof(numbers[0]))-1; i++){
		    		asce = asce && numbers[i]<numbers[i+1];
		    		notDesc = notDesc && numbers[i] <= numbers[i+1];
		    		desc = desc && numbers[i] > numbers[i+1];
		    		equal = equal && numbers[i] == numbers[i+1];
		    		notAsce = notAsce && numbers[i] >= numbers[i+1];
			}
			if(asce){
		    		printf("Ascending\n");
			}
			else if(equal){
		    		printf("Equal\n");
			}
			else if (notDesc){
		    		printf("Not Descending\n");
			}
			else if(desc){
		    		printf("Descending\n");
			}
			else if(notAsce){
		    		printf("Not Ascending\n");
			}
	   	}
    }
	return 0;
}
