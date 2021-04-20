#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct transfer 
{
	char name[50];
	int num;
	float dec;
} record;

int main()
{
	FILE *outfile, *writefile;
    	outfile = fopen("name.txt", "r");
	writefile = fopen("test_C.bin", "wb");
	
	int str1, str2, str3;
	char strcopy;

    	if(outfile == NULL) 
	{
        	exit(1);
	}
    
	while(!feof(outfile))
	{
        	fgets(record.name, 50, outfile);
		fscanf(outfile, "%d\n", &record.num);
	        fscanf(outfile, "%f\n", &record.dec);
        
		str1 = strlen(record.name) - 1;
		
		char array[str1];
		strcopy = str1;
		
		fwrite(&strcopy, 1, 1, writefile);
		strncpy(array, record.name, str1);
		
		fwrite(array, sizeof(array), 1, writefile);
		fwrite(&record.num, sizeof(record.num), 1, writefile);
		fwrite(&record.dec, sizeof(record.dec), 1, writefile);
	}

    	fclose(outfile);
	fclose(writefile);
	
	return 0;
}
