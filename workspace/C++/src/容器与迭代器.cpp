//#include<iostream>
//#include <set>
//#include <stdio.h>
//#include <list>
//#include <vector>
//#include <algorithm>
//#include <functional>
//
//using namespace std;
//
//void main12() {
//	multiset<int> myset;
//	myset.insert(11);
//	myset.insert(12);
//	myset.insert(13);
//	myset.insert(10);
//	myset.insert(10);
//	myset.insert(100);
//	auto ib = myset.begin();
//	auto ie = myset.end();
//
//	for (; ib != ie; ib++) {
//		std::cout << *ib << std::endl;
//		printf("%p,%p\n", ib, ib._Ptr); //智能指针
//	}
//
//	cin.get();
//
//}
//
//void main22() {
//	list<int> mylist;
//	mylist.push_back(11);
//	mylist.push_back(1);
//	mylist.push_back(16);
//	mylist.push_back(1);
//	mylist.push_back(18);
//
//	auto ib = mylist.begin();
//	auto ie = mylist.end();
//	for (; ib != ie; ib++) {
//		std::cout << *ib << std::endl;
//		printf("%p\n", ib);
//
//		printf("%p\n", ib._Ptr);
//
//		//智能指针  STL  bug ,分行打印，先访问内部，再访问外部
//
//		printf("%p,%p\n", ib._Ptr, ib); //智能指针.
//
//	}
//
//	cin.get();
//
//}
//
//void mainx() {
//	list<int> mylist;
//
//	mylist.push_back(1);
//	mylist.push_back(2);
//	mylist.push_back(3);
//	mylist.push_back(4);
//	//mylist[1];
//	auto ibegin = mylist.begin(); //指针，指向一个迭代器，迭代器存储了位置
//	auto iend = mylist.end();
//	//list用迭代器进行遍历
//	for (; ibegin != iend; ibegin++) {
//		cout << *ibegin << endl;
//		printf("%p,%p\n", ibegin._Ptr, ibegin); //重载
//	}
//
//	cin.get();
//
//}
//
//bool less3(int x) {
//	return x < 3;
//
//}
//
//void mainu() {
//	vector<int> mylist;
//	mylist.push_back(1);
//	mylist.push_back(2);
//	mylist.push_back(16);
//	mylist.push_back(1);
//	mylist.push_back(18);
//
//	using namespace std;
//
//	auto ib = mylist.begin();
//	auto ie = mylist.end();
//	for (; ib != ie; ib++) {
//		std::cout << *ib << std::endl;
//
//	}
//
//	//仿函数可以实现一定的算法策略
//
//	//auto ifind = find_if(++mylist.begin(), mylist.end(), bind1st( greater<int>(), 3));
//	auto ifind = find_if(mylist.begin(), mylist.end(), less3);
//	// bind1st( greater<int>(), 3)
//	//绑定一个函数， greater<int>(),3
//
//	std::cout << "\n\n\n\n" << *ifind << endl;
//
//	cin.get();
//
//}
