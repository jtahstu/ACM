#include <algorithm>
#include <iostream>
using namespace std;

struct print
{
	void operator ()(int x)//�����ˣ������ţ�֮�ʵ��ã���
	{
		std::cout << x << endl;
	}
};

void printA(int x)
{
	std::cout << x << endl;
}

void mainxx()
{
	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *p = find(a, a + 10, 8);
	std::cout << (void*)a << (void*)(a + 10) << std::endl;
	std::cout << *p << endl;
	std::cout << p << endl;
	if (p==(a+10))
	{
		std::cout << "û���ҵ�\n";
	}
	for_each(a, a + 4, print());//����ÿһ��Ԫ�أ�
	//printA��һ������ָ�룬�����Ǻ�������

	cin.get();




}
