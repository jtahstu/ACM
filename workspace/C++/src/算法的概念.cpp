#include <algorithm>
#include <iostream>
using namespace std;

struct print
{
	void operator ()(int x)//重载了（）符号，之际调用（）
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
		std::cout << "没有找到\n";
	}
	for_each(a, a + 4, print());//遍历每一个元素，
	//printA是一个函数指针，必须是函数类型

	cin.get();




}
