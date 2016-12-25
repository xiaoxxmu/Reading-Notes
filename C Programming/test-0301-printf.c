#include <stdio.h>

int main(int argc, char *argv[])
{
	int i1 = 100, i2 = -1; 
	unsigned j1 = 100, j2 = -1; 
	printf("%d, %u\n", i1, i1); // 100, 100
	printf("%d, %u\n", j1, j1); // 100, 100

	printf("%d, %u\n", i2, i2); // -1, 4294967295
	printf("%d, %u\n", j2, j2); // -1, 4294967295 

	double x = 12.00004951, y = 12.4951, z = 12000000.4951; 
	printf("%f, %e, %g\n", x, x, x); // 12.000050, 1.200005e+001, 12
	printf("%f, %e, %g\n", y, y, y); // 12.495100, 1.249510e+001, 12.4951
	printf("%f, %e, %g\n", z, z, z); // 12000000.495100, 1.200000e+007, 1.2e+007

	printf("%%d\n", 100); 	// %d
	printf("%%%%\n"); 		// %%
	printf("%%%d\n", 100); 	// %100
	printf("%m\n", 100); 	// %m

	int max = 6; 
	char s[10] = "123456789"; 
	printf("%*c\n", max, 'H'); // 输出5个空格和H
	printf("%*s\n", 2*max, s); // 输出123456789，左边有3个空格
	printf("%.*s\n", max, s);  // 输出123456

	return 0; 
}
