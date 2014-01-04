/***************************************************************************
 *
 * Copyright (c) 2014 liujun&&baidu. inc All Rights Reserved
 *
 **************************************************************************/

/*
 * @filename:  main.cpp
 * @version:  1.0
 * @date : 2014/01/04 21时47分54秒
 * @author:  liujun (liujun0923@zju.edu.cn)
 * @breif:  
 */

#include "sign.h"
#include <iostream>
using namespace std;

int main()
{
	unsigned int a, b;
	char s1[] = "-12345";
	char s2[] = "hello, 中国";
	create_sign64(s1, &a, &b);
	cout << a << "\t" << (int)b << endl;
	
	create_sign64(s2, &a, &b);
	cout << (int)a << "\t" << b << endl;
}
