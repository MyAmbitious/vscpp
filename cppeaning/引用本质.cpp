#include "../header/header.h"
//���������ã�ת��Ϊ int* const ref = &a;
void func(int& ref){
	ref = 100; // ref�����ã�ת��Ϊ*ref = 100
}
int main(){
	int a = 10;

    //�Զ�ת��Ϊ int* const ref = &a; ָ�볣����ָ��ָ�򲻿ɸģ�Ҳ˵��Ϊʲô���ò��ɸ���
    // //const���ε��ǳ�����ָ��ָ�򲻿��Ըģ�ָ��ָ���ֵ���Ը���
	int& ref = a;
	ref = 20; //�ڲ�����ref�����ã��Զ�������ת��Ϊ: *ref = 20;

	cout << "a:" << a << endl;
	cout << "ref:" << ref << endl;

	func(a);
    cout << "a:" << a << endl;
	return 0;
    // ���ۣ�C++�Ƽ������ü�������Ϊ�﷨���㣬���ñ�����ָ�볣�����������е�ָ�����������������������
}