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
//		printf("%p,%p\n", ib, ib._Ptr); //����ָ��
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
//		//����ָ��  STL  bug ,���д�ӡ���ȷ����ڲ����ٷ����ⲿ
//
//		printf("%p,%p\n", ib._Ptr, ib); //����ָ��.
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
//	auto ibegin = mylist.begin(); //ָ�룬ָ��һ�����������������洢��λ��
//	auto iend = mylist.end();
//	//list�õ��������б���
//	for (; ibegin != iend; ibegin++) {
//		cout << *ibegin << endl;
//		printf("%p,%p\n", ibegin._Ptr, ibegin); //����
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
//	//�º�������ʵ��һ�����㷨����
//
//	//auto ifind = find_if(++mylist.begin(), mylist.end(), bind1st( greater<int>(), 3));
//	auto ifind = find_if(mylist.begin(), mylist.end(), less3);
//	// bind1st( greater<int>(), 3)
//	//��һ�������� greater<int>(),3
//
//	std::cout << "\n\n\n\n" << *ifind << endl;
//
//	cin.get();
//
//}
