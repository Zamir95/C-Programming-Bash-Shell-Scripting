#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

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
	writefile = fopen("name.bin", "wb");
	
	if (outfile == NULL) 
	{
		exit(1);
	}
	
	while(!feof(outfile)) 	
	{
		fgets(record.name, 50, outfile);
		fscanf(outfile, "%d\n", &record.num);
		fscanf(outfile, "%f\n", &record.dec);
		
		fwrite(&record, sizeof(record), 1, writefile);
	}
	
	fclose(outfile);
	fclose(writefile);

	return 0;	
}
