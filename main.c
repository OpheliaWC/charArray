#include <stdio.h>


int main()
{
	char cName[] = { 'O', 'p', 'h', 'e', 'l', 'i', 'a', '/0' };
	//char cName[] = "Ophelia";

	printf("\nThe output is %c%c%c%c%c%c%c \n", cName[0], cName[1], cName[2], cName[3], cName[4], cName[5], cName[6]);
	return 0;
}
