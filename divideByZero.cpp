#include <iostream>
#include <fstream>
#include <cassert>
#include <string>

#include"in/myinvoke.h"

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

int main(int argc, char* argv[])
{

//	give_test_for_divide();
//	give_test_for_divide_sec();
	give_test_for_divide_trd();
	printf("Exit!\n");
	return 0;
}