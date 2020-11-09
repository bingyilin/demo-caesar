#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream> 

using namespace std;


int main(int argc, char* argv[])
{
	char *p;

	strcpy(p, "hello");
	cout << p << endl;
	free(p); // p 所指的内存被释放，但是p所指的地址仍然不变

	cout << p << endl;
	return 0;
}
