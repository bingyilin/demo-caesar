#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream> 
#include<fstream>

using namespace std;


/***½«×Ö·û´®×ª³Éint***/
int char2int(const char* str) {
	const char* p = str;
	bool neg = false;
	int res = 0;
	if (*str == '-' || *str == '+') {
		str++;
	}

	while (*str != 0) {
		if (*str < '0' || *str > '9') {
			break;
		}
		res = res * 10 + *str - '0';
		str++;
	}

	if (*p == '-') {
		res = -res;
	}
	return res;
}

char justTest(int i) {
	return i;
}


int nomain(int argc, char* argv[])
{

	char* c = argv[1];
	int a = char2int(c);

	//char zeroC = 'NUL';
	//int a = zeroC >> 8;
	//cout << a << endl;

	int result = 100 / a;
	cout << result << endl;
	result = result / 0;
	//for (int i = 0; i < 10; i++) {
	//	int randomNum = rand() % 10;
	//	int result = 100 / randomNum;
	//	cout << result << endl;
	//}


	printf("Exit!\n");
	return 0;
}