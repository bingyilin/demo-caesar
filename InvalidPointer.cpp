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
	free(p); // p ��ָ���ڴ汻�ͷţ�����p��ָ�ĵ�ַ��Ȼ����

	cout << p << endl;
	return 0;
}
