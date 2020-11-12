#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

void give_test_for_divide() {
	int i;
	i = 0;
	scanf("%d", &i);  //&i 表示变量 i 的地址，&是取地址符
	printf("i = %d\n", i);
	int num = INT_MAX;
	num = num / i;
	cout << num << endl;
}