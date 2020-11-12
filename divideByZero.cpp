#include <iostream>
#include <fstream>
#include <cassert>
#include <string>

using namespace std;


/***将字符串转成int***/
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

int readTxt()
{	
	string file = "Test.txt";
	ifstream infile;
	infile.open(file.data());   //将文件流对象与文件连接起来 
	assert(infile.is_open());   //若失败,则输出错误消息,并终止程序运行 

	string s;
	while (getline(infile, s))
	{
		int i = atoi(s.c_str());
		int result = 100 / i;
	}
	infile.close();             //关闭文件输入流 
	return 0;
}


int nomain(int argc, char* argv[])
{

	readTxt();
	//char* c = argv[1];
	//int a = char2int(c);

	//char zeroC = 'NUL';
	//int a = zeroC >> 8;
	//cout << a << endl;

	//int result = 100 / a;
	//cout << result << endl;
	//result = result / 0;
	//for (int i = 0; i < 10; i++) {
	//	int randomNum = rand() % 10;
	//	int result = 100 / randomNum;
	//	cout << result << endl;
	//}


	printf("Exit!\n");
	return 0;
}