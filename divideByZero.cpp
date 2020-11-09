#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream> 

using namespace std;


int main(int argc, char* argv[])
{
	char zeroC = 'NUL';
	int a = zeroC >> 8;
	cout << a << endl;
	int result = 100 / a;
	cout << result << endl;
	//for (int i = 0; i < 10; i++) {
	//	int randomNum = rand() % 10;
	//	int result = 100 / randomNum;
	//	cout << result << endl;
	//}


	printf("Exit!\n");
	return 0;
}