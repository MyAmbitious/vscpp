// - ʵ����������
// - ����negate��һԪ���㣬�������Ƕ�Ԫ����
// **�º���ԭ�ͣ�**

// - `template<class T> T plus<T>`                //�ӷ��º���
// - `template<class T> T minus<T>`              //�����º���
// - `template<class T> T multiplies<T>`    //�˷��º���
// - `template<class T> T divides<T>`         //�����º���
// - `template<class T> T modulus<T>`         //ȡģ�º���
// - `template<class T> T negate<T>`           //ȡ���º���


#include <functional>
#include "../header/header.h"
//negate
void test01()
{
	negate<int> n;
	cout << n(50) << endl;
}

//plus
void test02()
{
	plus<int> p;
	cout << p(10, 20) << endl;
}

int main() {

	test01();
	test02();

	system("pause");

	return 0;
}