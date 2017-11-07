#include<stdio.h>
#include<conio.h>
int main(void)
{
	char ch;

	printf("Input a character:");
	ch = getch();
	printf("\nYou input a '%c'\n", ch);
	return 0;
}