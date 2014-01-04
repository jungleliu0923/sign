/***************************************************************************
 *
 * Copyright (c) 2014 liujun&&baidu. inc All Rights Reserved
 *
 **************************************************************************/

/*
 * @filename:  sign.h
 * @version:  1.0
 * @date : 2014/01/03 22时37分35秒
 * @author:  liujun (liujun0923@zju.edu.cn)
 * @breif: sign头文件  
 */


#ifndef  SIGN_INC
#define  SIGN_INC

typedef struct _crc_sign64
{
	unsigned int sign1;
	unsigned int sign2;
} crc_sign64;

/*根据字符串生成crc64校验数据,借鉴前人代码*/
unsigned long long crc64(const unsigned char *buffer);

/*根据是否是数字，返回结果*/
int is_digit (const char* str, unsigned int* digit);

/*对字符串进行签名, sign1是签名高位，sign2是签名低位*/
int create_sign64(const char* input, unsigned int* sign1, unsigned int* sign2);

#endif   /* ----- #ifndef SIGN_INC  ----- */
