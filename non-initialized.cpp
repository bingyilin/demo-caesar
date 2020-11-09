#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

void check_magic_number(void)
{
	short tmp = (short)(0x1234 << 8);
	cout << tmp << endl;

	char c = ((char *)&tmp)[0];
	cout << c << endl;
	int i = 0 << (int)c;

	cout << i << endl;
}

void foo(const char* input)
{
	char buf[10];
	printf("My stack looks like:\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n\n");
	strcpy(buf, input);
	printf("buf = %s\n", buf);
	printf("Now the stack looks like:\n%p\n%p\n%p\n%p\n%p\n%p\n%p\n\n");
}
void bar(void)
{
	printf("Augh! I've been hacked!\n");
}
int main(int argc, char* argv[])
{
//	check_magic_number();
//	printf("Address of foo = %p\n", foo);
//	printf("Address of bar = %p\n", bar);
	//if (argc != 2)
	//{
	//	printf("Please supply a string as an argument!\n");
	//	return -1;
	//}
//	foo(argv[1]);

	for(int i = 0; i < 10; i ++){
		int randomNum = rand() % 10;
		int result = 100 /randomNum;
		cout << result << endl;
	}


	printf("Exit!\n");
	return 0;
}