#include <stdio.h>
#include <stdlib.h>
struct date
	{
		int day;
		int month;
		int year;
		
	};
void main()
{
	int n;
	struct date temp;
	FILE *fp;
	if((fp=fopen("welcom.bin","rb"))==NULL)
	{
		printf("File is not created");
		exit(1);
	}
	
	for(n=1;n<=5;n++)
	{
		fread(&temp,sizeof(struct date),1,fp);
	    printf("%d/%d/%d\n",temp.day,temp.month,temp.year);
	}
	fclose(fp);
}
