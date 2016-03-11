#include<string.h>

int getHammingDistance(char str1[], char str2[]);
int countSubstrPattern(char string[], char pattern[]);
int isValidString(char str[], char alphabet[]);
int inAlphabet(char ch, char alphabet[]);

// 01.
int getHammingDistance(char str1[], char str2[]){
	int i = 0, counter = 0;				//i - for indexing, counter - accumulator
	int length1 = strlen(str1);
	int length2 = strlen(str2);	

	if(length1 != length2) printf("Error: Strings are not equal\n");		//if the length of the two strings are not equal, don't proceed
	else{	
		while( i != length1){									 //else, while i != to length of string
			if(str1[i] != str2[i]) counter++;				//if char at string1[i] is not equal to char at string2[i] then counter++; 
			i++;														   //update i
		}
	
	}

	return counter;	

}

//02.
int countSubstrPattern(char string[], char pattern[]){
		int stringlen = strlen(string);
		int patternlen = strlen(pattern);
		int i = 0;	//for traversing string
		int j = 0; 	//for traversing pattern
		int k = 0; //auxiliary variable for i
		int counter = 0;		

		for(i = 0; i < stringlen; i++){							//for loop the while i is less than the length of passed string
			if(string[i] == pattern[0]){							//if char at first index of string is equal to the char at first index of pattern,
				for(j = 1, k = i + 1; j < patternlen+1; j++, k++){	//compare the succeeding characters
						if(string[k] != pattern[j]) break;	//if an unmatching pair is encountered, break the loop
				}
				if(j >= patternlen) counter++;			//if j is greater than or equal to pattern len, then we have a valid substring, counter++
			}
		}
		return counter;
}


//03.
int isValidString(char string[], char alphabet[]){
	int stringlen = strlen(string);
	int alphabetlen = strlen(alphabet);
	int i = 0;	//for traversing string
	int j = 0;	//for traversing pattern
	int flag = 0;

	
	for(i = 0; i < stringlen; i++){					
		flag = 0;						//reset/initial value of flag
		for(j = 0; j < alphabetlen; j++){		
				if(string[i] == alphabet[j]) flag = 1;
		}
		if(flag == 0) break; 
	}
	return flag;
	
}

//04.
int getSkew(char string[], int n){
	int Gcounter = 0;		//accumulator for char G
	int Ccounter = 0;		//accumulator for char C
	int result = 0;
	int i = 0;
	int length = strlen(string);

	for(i = 0; i < n; i++){				//while n position is not yet reached
		if(string[i] == 'G') Gcounter++;		//if char at string[i] is equal to G then GCounter++;
		else if(string[i] == 'C') Ccounter++;	//else if it is equal to C then Ccounter++; ignore if not G or C
	}

	result = Gcounter - Ccounter;		//subtract the number of Cs from the number of Gs then return result
	return result;
	
}

//05.
int getMaxSkew(char string[], int n){
	int Gcounter = 0;
	int length = strlen(string);	
	int i;

	for(i = 0; i < n; i++){			//while n positiion is not yet reached
		if(string[i] == 'G') Gcounter++;	//accumulate all Gs then return counter for G
	}
	
	return Gcounter;
}

//06.
int getMinSkew(char string[], int n){
	int Gcounter = 0;
	int Ccounter = 0;
	int result = 0;
	int i = 0;
	int length = strlen(string);

	for(i = 0; i < n; i++){				//while n position is not yet reached
		if(string[i] == 'G') Gcounter++;	//if char at string[i] is equal to G then GCounter++;
		else if(string[i] == 'C') Ccounter++; //else if it is equal to C then Ccounter++; ignore if not G or C
	}

	result = Gcounter - Ccounter; //subtract the number of Cs from the number of Gs then return result
	return result;
	
}

