#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

struct student
{
	char name[4] = {"123"};
	int score;
}stu, *pstu;

int main()
{
	cout << stu.name << endl;
	strcpy(stu.name, "JimyAA");
	cout <<stu. name << endl;
	stu.score = 99;
	return 0;
}