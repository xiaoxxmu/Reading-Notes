#include <stdio.h>

int main(int argc, char *argv[])
{
	// 使用putchar函数打印HUST
	char c1 = 'H', c2 = 'U', c3 = 'S', c4 = 'T'; 
	putchar(c1); putchar(c2); putchar(c3); putchar(c4); 

	// 输出字符'a'的图形符号
	char c = 'a'; 
	putchar('a'); putchar(c); putchar(97); putchar('\141'); 

	// 系统扬声器响铃一次
	putchar('\a'); 

	return 0; 
}
