//
//  Created by XieKunming on 2020/04/17
//  Copyright (C) 2020 л�����������һѧ�ͻ� All rights reserved.
//
// л�����������һѧ�ͻ�
// QQȺ��1054773066
// ���䣺124116614@qq.com
// QQ:  124116614
// ΢��: xie5427716

#include <stdio.h>
#include "myhead.h"
// x86�ĳ��򣬿���������32λ����64λ������
// x64�ĳ���ֻ��������64Ϊ������

// ����
int myadd(int a, int b);

void myxx();

void fun1()
{
	printf("fun1\n");
}

void fun2()
{
	printf("fun2\n");
}

int main()
{
	int val;
	//scanf("%d", &val);

	//scanf_s("%d", &val);

	printf("hello world\n");
	printf("%f", PI);


	fun1();

	fun2();

	printf("1+1=%d\n", myadd(1, 1));

	myxx();

	return 1;
}