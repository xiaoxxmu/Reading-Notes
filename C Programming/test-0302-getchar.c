#include <stdio.h>

int main(int argc, char *argv[])
{
	char c; 
	while ((c = getchar()) != EOF)
	{
		putchar((c >= 'a' && c <= 'z') ? c - 'a' + 'A' : c); 
	}
	return 0; 
}
