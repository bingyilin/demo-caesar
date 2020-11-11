#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream> 
#include<fstream>

using namespace std;

char *GetMemory(void) {
	char p[] = "hello world";
	return p;
}
void Test(void) {
	char *str = NULL;
	str = GetMemory();
	printf(str);
}

int invalidpointer(int argc, char* argv[])
{
	Test();
}
