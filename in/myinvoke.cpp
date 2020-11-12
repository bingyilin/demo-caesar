#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cassert>

using namespace std;

void give_test_for_divide() {
	int i;
	scanf("%d", &i);  //&i 表示变量 i 的地址，&是取地址符
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
	infile.open(file.data());   //将文件流对象与文件连接起来 
	assert(infile.is_open());   //若失败,则输出错误消息,并终止程序运行 

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
	infile.close();             //关闭文件输入流 
}


void give_test_for_divide_four() {
	for (int i = 0; i < 10; i++) {
		int randomNum = rand() % 10;
		int result = 100 / randomNum;
		cout << result << endl;
	}
}