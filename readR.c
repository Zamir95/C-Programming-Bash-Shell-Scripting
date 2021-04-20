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
	outfile = fopen("name.bin", "rb");

	if(outfile == NULL)
	{
        	exit(1);
    	}
    
    	while(!feof(outfile))
	{
        	fread(&record, sizeof(record), 1, outfile);
        
	        printf("%s", record.name);
        	printf("%d\n", record.num);
	        printf("%f\n", record.dec);        
    	}
	
	fclose(outfile);
	return 0;
}
