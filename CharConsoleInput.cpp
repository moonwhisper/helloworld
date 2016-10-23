// CharConsoleInput.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#define ARRAY_SIZE	10000

int _tmain(int argc, _TCHAR* argv[])
{
	int Choice;
	char CharArray[ARRAY_SIZE],ch;

	printf("Please input your input mode: 1 -- scanf, 2 ---gets\n");
	scanf("%d",&Choice);
	
	switch(Choice)
	{
		case 1 :
			scanf("%s",CharArray);
			break;
		case 2 :
			ch=getchar();
			gets(CharArray);
			break;
		default :
			printf("mode choice error!\n");

	}

	puts(CharArray);

	return 0;
}

