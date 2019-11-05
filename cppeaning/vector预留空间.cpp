#include <vector>
#include "../header/header.h"
void test01()
{
	vector<int> v;

	//Ô¤Áô¿Õ¼ä
	v.reserve(100000);

	int num = 0;
	int* p = NULL;
	for (int i = 0; i < 100000; i++) {
		v.push_back(i);
		if (p != &v[0]) {
			p = &v[0];
			num++;
		}
	}

	cout << "num:" << num << endl;
    // for (int i = 0; i < 100000; i++) {
    //     cout << v[i]<< endl;
    // }

}

int main() {

	test01();

	system("pause");

	return 0;
}