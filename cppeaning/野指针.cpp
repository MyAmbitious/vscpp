#include "../header/header.h"
int main(int argc, const char** argv) {
    //ָ�����pָ���ڴ��ַ���Ϊ0x1100�Ŀռ�
	int * p = (int *)0x1100;

	//����Ұָ�뱨�� ʲôҲ��ӡ������
	cout << *p << endl;
    cout << "-------" << endl;

    system("pause");

	return 0;

}