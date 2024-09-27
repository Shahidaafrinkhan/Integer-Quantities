#include<stdio.h>
#include<string.h>
main()
{
	char fname[15],sname[15];
	
	printf("Enter the first name:  \n");
	scanf("%s",fname);
	
	printf("Enter the last name:  \n");
	scanf("%s",sname);
	
	strcat(fname,sname);
	sprintf("your name is %s ",fname,sname);
	
}
