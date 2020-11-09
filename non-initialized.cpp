#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <time.h>  

using namespace std;


int main(int argc, char* argv[])
{

	srand((unsigned)time(NULL));
	for(int i = 0; i < 10; i ++){
		int randomNum = rand() % 10;
		int result = 100 /randomNum;
		cout << result << endl;
	}


	printf("Exit!\n");
	return 0;
}