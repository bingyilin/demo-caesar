#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

void give_test_for_divide() {
	int i;
	i = 0;
//	scanf("%d", &i);  //&i ��ʾ���� i �ĵ�ַ��&��ȡ��ַ��
	printf("i = %d\n", i);
	int num = INT_MAX;
	num = num / i;
	cout << num << endl;
}