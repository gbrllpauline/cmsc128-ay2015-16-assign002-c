#include<stdio.h>
#include "functions.h"

main(){
	char str1[50];
	char str2[50];
	int result = 0;
	int n = 0;

	printf("Enter string 1: ");
	scanf("%s", str1);
	//printf("Enter string 2: ");	
	//scanf("%s", str2);
	printf("Enter alphabet: ");
	scanf("%s", str2);


	//result = getHammingDistance(str1, str2);	
	//printf("%d\n", result);

	//result = isValidString(str1, str2);
	//if(result == 1) printf("True\n");
	//else printf("False\n");


	//result = countSubstrPattern(str1, str2);
	//printf("%d\n", result);

	result = isValidString(str1, str2);
	if(result == 1) printf("true");
	else printf("false");

	//result = getMinSkew(str1, n);
	//printf("%d", result);

}
