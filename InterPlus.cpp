// test.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int main()
{
	int FirstInter,SecondInter;


	scanf("%d%d",&FirstInter,&SecondInter);

	if (FirstInter < 0 || FirstInter >10 || SecondInter < 0 || SecondInter >10)
	{
		return 0;
	}

	printf("%d",FirstInter+SecondInter);
	return 0;
}

