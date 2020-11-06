#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct student
{
	char *name;
	int score;
}stu, *pstu;

int main()
{
	strcpy(stu.name, "Jimy");
	stu.score = 99;
	return 0;
}