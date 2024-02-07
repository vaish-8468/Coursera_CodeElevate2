/*
 * File:   main.c
 * Author: <Vartika Vaish>
 */

#define _CRT_SECURE_NO_WARNINGS
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LENGTH 100

/*
 * Junior Codebreaker Programming Assignment
 */
int main(int argc, char** argv)
{
	// IMPORTANT: Only add code in the section
	// indicated below. The code I've provided
	// makes your solution work with the 
	// automated grader on Coursera
	char input[MAX_LENGTH];
	fgets(input, MAX_LENGTH, stdin);
	while (input[0] != 'q')
	{
		
		char freq[26]={0};
		for(int i=0;i<strlen(input);i++){
			input[i]=tolower(input[i]);
			freq[input[i]-'a']++;
		}
		for(int i=0;i<26;i++){
			if(freq[i]!=0){
				printf("%c%d ",'A'+i,freq[i]);
			}
		}
		printf("\n");


		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
		


		// Don't add or modify any code below
		// this comment
		fgets(input, MAX_LENGTH, stdin);
	}

	return 0;
}
