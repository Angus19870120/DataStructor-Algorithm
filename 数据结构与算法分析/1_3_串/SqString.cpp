#include "SqString.h"

//���Ĺ��캯��
SqString::SqString()
{
	s = new str();
	s->length = 0;
	s->data = new char[MAXSIZE];
}

//������������
SqString::~SqString()
{
	delete s;
	s = NULL;
}

//��ȡSqStr
str SqString::getSqStr()
{
	return *s;
}

//��һ������������Ŀ�괮
str SqString::strAssign(char* t)
{	
	//����һ���ַ�ָ��������ʽʹ��
	/*int i = 0;
	while(t[i] != '\0')			//������t
	{
		s->data[i] = t[i];		//��ֵ��Ŀ�괮				
		cout << s->data[i] << endl;
		i++;				
	}*/

	//��������ֱ�Ӳ���ָ��
	while(*t != '\0')			//������t
	{
		*(s->data) = *t;		//��ֵ��Ŀ�괮				
		cout << *(s->data) << endl;
		t++;
		s->data++;
		s->length++;
	}
	return *s;
}

//����t���Ƹ�Ŀ�괮
str SqString::strCopy(SqStr t)
{
	while(*(t->data) != '\0')
	{
		
	}
	//ǳ����
	//s = t;
	return *s;
}
////�жϴ��Ƿ����
//bool SqString::strEqual (SqStr t)
//{
//}
////�󴮳�
//int SqString::strLength()
//{
//}
////������
//str SqString::Concat(SqStr t)
//{
//}
////���Ӵ�
//str SqString::subStr(int i, int j)
//{
//}
////���봮
//str SqString::insertStr(int i, SqStr t)
//{
//}
////ɾ��ָ����Χ�Ĵ�
//str SqString::delStr(int i, int j)
//{
//}
////�滻ָ���Ӵ�
//str SqString::repStr(int i, int j, SqStr t)
//{
//
//}
////���������
//void SqString::dispStr()
//{
//
//}