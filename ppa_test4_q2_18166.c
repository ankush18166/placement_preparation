#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int anagram(char s1[30],char s2[30])
{
	int i,check=0;
	if(strlen(s1)==strlen(s2))
	{
		printf("lenths are equal:\n");
		for(i=0;s2[i]!='\0';i++)
		{
			if(strchr(s1,s2[i]))
				check++;		
			else
				return 0;
		}
		if(check==strlen(s2))
			printf("\nyes");
			return 1;
	}
	else
		return 0;
}
int main()
{
	int i;
	char s1[30],s2[30];
	printf("Enter the first string:");
	gets(s1);
	printf("Enter the second string:");
	gets(s2);
	for(i=0;s1[i]!='\0';i++)
		s1[i]=tolower(s1[i]);
	for(i=0;s2[i]!='\0';i++)
		s2[i]=tolower(s2[i]);
	if(anagram(s1,s2)==1)
		printf("\nthe given two strings are anagrams\n");
	else 
		printf("\nthe given two strings are not anagrams\n");
	return 0;
}

/*output:-

ankush@ankush-X553SA:~/Desktop$ ./a.out
Enter the first string:eleven plus two
Enter the second string:twelve plus one
lenths are equal:

yes
the given two strings are anagrams
ankush@ankush-X553SA:~/Desktop$ 
*/

