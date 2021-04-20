#include <stdio.h>
#include <stdlib.h>

struct transfer
{
		char name[50];
		int num;
		float dec;
} record;

int main()
{
	FILE *outfile;
	outfile = fopen("test_C.bin", "rb");
	
	int str1;
	char strcopy;
	int num;
	float dec;

	if(outfile == NULL)
	{
        	exit(1);
   	}
    
   	 while(!feof(outfile))
	 {
      	 	fread(&strcopy, 1, 1, outfile);
       		str1 = strcopy;
       		++str1;
        
		char array[str1];
        	
	       	fgets(array, str1, outfile);
        	fread(&num, sizeof(num), 1, outfile);
	    	fread(&dec, sizeof(dec), 1, outfile);
        
		printf("%s\n%d\n%f\n", array, num, dec);     
	}

	fclose(outfile);
	return 0;
}
