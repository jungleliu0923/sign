给出任意一个字符串，可以生成基本不会重合的2个32位无符号的数字。如果自己是数字，那么就直接赋值给低位。

1 API
```
int create_sign64(const char* input, unsigned int* sign1, unsigned int* sign2);
```
input 是输入
sign1 是返回的高位
sign2 是返回的低位

2 代码范例
```
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

```
3 运行结果
```
liujuntekiMacBook-Pro:sample liujun$ ./sample 
0	-12345
2013960652	3228893707
```
