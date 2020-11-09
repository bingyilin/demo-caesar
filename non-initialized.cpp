#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{

	for(int i = 0; i < 10; i ++){
		int randomNum = rand() % 10;
		int result = 100 /randomNum;
		cout << result << endl;
	}


	printf("Exit!\n");
	return 0;
}