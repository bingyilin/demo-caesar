#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

void give_test_for_divide() {
	int i;
	scanf("%d", &i);  //&i ��ʾ���� i �ĵ�ַ��&��ȡ��ַ��
	printf("i = %d\n", i);
	int num = INT_MAX;
	num = num / i;
	cout << num << endl;
}


void give_test_for_divide_sec() {
	int num = 100;
	int i = 0;
	int k = 5;
	if (k > 6) {
		num = num / i;
		cout << num << endl;
	}
}

void give_test_for_divide_trd() {
	string file = "Test.txt";
	ifstream infile;
	infile.open(file.data());   //���ļ����������ļ��������� 
	assert(infile.is_open());   //��ʧ��,�����������Ϣ,����ֹ�������� 

	string s;
	while (getline(infile, s))
	{
		int i = atoi(s.c_str());
		if (i == 2) {
			i = i - 2;
		}
		if (i == 0) {
			cout << "no!It's wrong!";
		}
		int result = 100 / i;
	}
	infile.close();             //�ر��ļ������� 
}


void give_test_for_divide_four() {
	for (int i = 0; i < 10; i++) {
		int randomNum = rand() % 10;
		int result = 100 / randomNum;
		cout << result << endl;
	}
}