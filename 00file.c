#include <stdio.h>
void main()
{
	FILE *fp;
	fp=fopen("test00.txt","r");
	char str[100];
	/*
	fgets(str,100,fp);
	printf("\n%s",str);
	
	
	this will only print first line
	*/
	
	while(fgets(str,100,fp)){
		printf("\n%s",str);
	}
	fclose(fp);
}
