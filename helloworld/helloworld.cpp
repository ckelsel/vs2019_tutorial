//
//  Created by XieKunming on 2020/04/17
//  Copyright (C) 2020 谢昆明——编程一学就会 All rights reserved.
//
// 谢昆明——编程一学就会
// QQ群：1054773066
// 邮箱：124116614@qq.com
// QQ:  124116614
// 微信: xie5427716

#include <stdio.h>
#include "myhead.h"
// x86的程序，可以运行在32位或者64位电脑上
// x64的程序，只能运行在64为电脑上

// 声明
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