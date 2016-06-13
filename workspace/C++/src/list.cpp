/**
 * Project Name: ���ݽṹ 
 * File Name: list.cpp
 * Created on: 2015��5��27�� ����4:38:27
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */

//#include<iostream>
//#include<cstdio>
//#include<cmath>
//#include<algorithm>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<list>
//using namespace std;
//int main() {
//	list<int> a;
//	for (int i = 0; i < 5; i++) {
//		a.push_back(i);
//		a.push_front(i);
//	}
//
//	cout << "������ĳ���Ϊ��" << a.size() << endl;
//	list<int>::iterator it;
//	for (it = a.begin(); it != a.end(); it++)
//		cout << *it << " ";
//	cout << "������" << endl;
//	a.pop_front();//ɾ��ͷԪ��
//	a.reverse();//��ת����
//	a.sort();//�����������򲻿���sort(a.begin(),a.end())���ַ���
//	a.unique();//ȥ��
//	for (it = a.begin(); it != a.end(); it++)
//		cout << *it << " ";
//	cout << "������" << endl;
//	return 0;
//}

/*#include <iostream>
 #include <list>
 using namespace std;

 list<int> g_list1;
 list<int> g_list2;

 //////////////////////////////////////////////////////////////////////////

 // ��ʼ��ȫ������
 void InitList()
 {
 //  push_back()����һԪ�ص�����β
 g_list1.push_back(1);
 g_list1.push_back(2);
 g_list1.push_back(3);

 // push_front()����һԪ�ص�����ͷ
 g_list2.push_front(6);
 g_list2.push_front(5);
 g_list2.push_front(4);
 }

 // ���һ������
 void ShowList(list<int>& listTemp)
 {
 //  size()����������Ԫ�ظ���
 cout << listTemp.size() << endl;

 for (list<int>::iterator it = listTemp.begin(); it != listTemp.end(); ++it)
 {
 cout << *it << ' ';
 }
 cout << endl;
 }

 //////////////////////////////////////////////////////////////////////////

 // ���캯����������
 void constructor_test0()
 {
 list<int> listTemp;
 cout << listTemp.size() << endl;
 }

 // ���캯������һ��������Ĭ��ֵ��0��Ԫ�ص�����
 void constructor_test1()
 {
 list<int> listTemp(3);
 ShowList(listTemp);
 }

 // ���캯������һ�������Ԫ�ص�����ֵ����1
 void constructor_test2()
 {
 list<int> listTemp(5, 1);
 ShowList(listTemp);
 }

 // ���캯������һ��g_list1��copy����
 void constructor_test3()
 {
 list<int> listTemp(g_list1);
 ShowList(listTemp);
 }

 // ���캯����listTemp��g_list1һ�������Ԫ��[_First, _Last)
 void constructor_test4()
 {
 list<int> listTemp(g_list1.begin(), g_list1.end());
 ShowList(listTemp);
 }

 // assign()����ֵ������������
 // template <class InputIterator>
 // void assign ( InputIterator first, InputIterator last );
 // void assign ( size_type n, const T& u );
 void assign_test()
 {
 list<int> listTemp(5, 1);
 ShowList(listTemp);

 listTemp.assign(4, 3);
 ShowList(listTemp);

 listTemp.assign(++g_list1.begin(), g_list1.end());
 ShowList(listTemp);
 }

 // operator=
 void operator_equality_test()
 {
 g_list1 = g_list2;
 ShowList(g_list1);
 ShowList(g_list2);
 }

 // front()���ص�һ��Ԫ�ص�����
 void front_test7()
 {
 cout << g_list1.front() << endl;
 }

 // back()�������һԪ�ص�����
 void back_test()
 {
 cout << g_list1.back() << endl;
 }

 // begin()���ص�һ��Ԫ�ص�ָ��(iterator)
 void begin_test()
 {
 list<int>::iterator it1 = g_list1.begin();
 cout << *++it1 << endl;

 list<int>::const_iterator it2 = g_list1.begin();
 it2++;
 // (*it2)++;    //     *it2 Ϊconst �����޸�
 cout << *it2 << endl;

 }

 // end()���� [���һ��Ԫ�ص���һλ�õ�ָ��] (listΪ��ʱend()= begin())
 void end_test()
 {
 list<int>::iterator it  = g_list1.end();    // ע���ǣ����һ��Ԫ�ص���һλ�õ�ָ��
 --it;
 cout << *it << endl;
 }

 //  rbegin()�����������һԪ�صĺ���ָ��
 void rbegin_test()
 {
 list<int>::reverse_iterator it = g_list1.rbegin();
 for (; it != g_list1.rend(); ++it)
 {
 cout << *it << ' ';
 }
 cout << endl;
 }

 //  rend()���������һԪ�ص���һλ�õĺ���ָ��
 void rend_test()
 {
 list<int>::reverse_iterator it = g_list1.rend();
 --it;
 cout << *it << endl;
 }

 // push_back()����һԪ�ص�����β
 void push_back_test()
 {
 ShowList(g_list1);
 g_list1.push_back(4);
 ShowList(g_list1);
 }

 // push_front()����һԪ�ص�����ͷ
 void push_front_test()
 {
 ShowList(g_list1);
 g_list1.push_front(4);
 ShowList(g_list1);
 }

 // pop_back()ɾ������β��һ��Ԫ��
 void pop_back_test()
 {
 ShowList(g_list1);
 cout << endl;

 g_list1.pop_back();
 ShowList(g_list1);

 }

 // pop_front()ɾ������ͷ��һԪ��
 void pop_front_test()
 {
 ShowList(g_list1);
 cout << endl;

 g_list1.pop_front();
 ShowList(g_list1);
 }

 // clear()ɾ������Ԫ��
 void clear_test()
 {
 ShowList(g_list1);
 g_list1.clear();
 ShowList(g_list1);
 }

 // erase()ɾ��һ��Ԫ�ػ�һ�������Ԫ��(�������غ���)
 void erase_test()
 {
 ShowList(g_list1);
 g_list1.erase(g_list1.begin());
 ShowList(g_list1);

 cout << endl;

 ShowList(g_list2);
 g_list2.erase(++g_list2.begin(), g_list2.end());
 ShowList(g_list2);
 }

 // remove()ɾ��������ƥ��ֵ��Ԫ��(ƥ��Ԫ��ȫ��ɾ��)
 void remove_test()
 {
 ShowList(g_list1);
 g_list1.push_back(1);
 ShowList(g_list1);

 g_list1.remove(1);
 ShowList(g_list1);
 }

 bool myFun(const int& value) { return (value < 2); }
 // remove_if()ɾ�����������Ԫ��(�����һ������)
 void remove_if_test()
 {
 ShowList(g_list1);
 g_list1.remove_if(myFun);
 ShowList(g_list1);
 }


 // empty()�ж��Ƿ�����Ϊ��
 void empty_test()
 {
 list<int> listTemp;
 if (listTemp.empty())
 cout << "listTempΪ��" << endl;
 else
 cout << "listTemp��Ϊ��" << endl;
 }


 //  max_size()�������������ܳ���:1073741823
 void max_size_test()
 {
 list<int>::size_type nMax = g_list1.max_size();
 cout << nMax << endl;
 }


 // resize()���¶���������(�����غ���)��
 void resize_test()
 {
 ShowList(g_list1);
 g_list1.resize(9);        // ��Ĭ��ֵ�
 ShowList(g_list1);
 cout << endl;

 ShowList(g_list2);
 g_list2.resize(9, 51);    // ��ָ��ֵ�
 ShowList(g_list2);
 }

 // reverse()��ת����
 void reverse_test()
 {
 ShowList(g_list1);
 g_list1.reverse();
 ShowList(g_list1);
 }


 // sort()����������Ĭ������(�������غ���)
 void sort_test()
 {
 list<int> listTemp;
 listTemp.push_back(9);
 listTemp.push_back(3);
 listTemp.push_back(5);
 listTemp.push_back(1);
 listTemp.push_back(4);
 listTemp.push_back(3);

 ShowList(listTemp);
 listTemp.sort();
 ShowList(listTemp);

 listTemp.sort(greater<int>());
 ShowList(listTemp);
 }

 // merge()�ϲ���������������ʹ֮��Ϊ��һ������.
 void merge_test1()
 {
 list<int> listTemp2;
 listTemp2.push_back(3);
 listTemp2.push_back(4);

 list<int> listTemp3;
 listTemp3.push_back(9);
 listTemp3.push_back(10);

 ShowList(listTemp2);
 cout << endl;
 ShowList(listTemp3);
 cout << endl;

 listTemp2.merge(listTemp3);
 ShowList(listTemp2);
 }


 bool myCmp (int first, int second)
 { return ( int(first)>int(second) ); }

 // merge()�ϲ�������������ʹ֮��Ϊ��һ������.
 void merge_test2()
 {
 list<int> listTemp2;
 listTemp2.push_back(4);
 listTemp2.push_back(3);

 list<int> listTemp3;
 listTemp3.push_back(10);
 listTemp3.push_back(9);

 ShowList(listTemp2);
 cout << endl;
 ShowList(listTemp3);
 cout << endl;

 // listTemp2.merge(listTemp3, greater<int>());    // �ڶ��������������Լ�����ĺ�������
 listTemp2.merge(listTemp3, myCmp);
 ShowList(listTemp2);
 }

 // splice()������������н��(�������غ���),��Ϻ�ڶ����������
 // void splice ( iterator position, list<T,Allocator>& x );
 // void splice ( iterator position, list<T,Allocator>& x, iterator i );
 // void splice ( iterator position, list<T,Allocator>& x, iterator first, iterator last );
 void splice_test()
 {
 list<int> listTemp1(g_list1);
 list<int> listTemp2(g_list2);

 ShowList(listTemp1);
 ShowList(listTemp2);
 cout << endl;

 //
 listTemp1.splice(++listTemp1.begin(), listTemp2);
 ShowList(listTemp1);
 ShowList(listTemp2);

 //
 listTemp1.assign(g_list1.begin(), g_list1.end());
 listTemp2.assign(g_list2.begin(), g_list2.end());
 listTemp1.splice(++listTemp1.begin(), listTemp2, ++listTemp2.begin());
 ShowList(listTemp1);
 ShowList(listTemp2);

 //
 listTemp1.assign(g_list1.begin(), g_list1.end());
 listTemp2.assign(g_list2.begin(), g_list2.end());
 listTemp1.splice(++listTemp1.begin(), listTemp2, ++listTemp2.begin(), listTemp2.end());
 ShowList(listTemp1);
 ShowList(listTemp2);

 }

 //  insert()��ָ��λ�ò���һ������Ԫ��(�������غ���)
 // iterator insert ( iterator position, const T& x );
 // void insert ( iterator position, size_type n, const T& x );
 // template <class InputIterator>
 // void insert ( iterator position, InputIterator first, InputIterator last );
 void insert_test()
 {
 list<int> listTemp1(g_list1);
 ShowList(listTemp1);
 listTemp1.insert(listTemp1.begin(), 51);
 ShowList(listTemp1);
 cout << endl;

 list<int> listTemp2(g_list1);
 ShowList(listTemp2);
 listTemp2.insert(listTemp2.begin(), 9, 51);
 ShowList(listTemp2);
 cout << endl;

 list<int> listTemp3(g_list1);
 ShowList(listTemp3);
 listTemp3.insert(listTemp3.begin(), g_list2.begin(), g_list2.end());
 ShowList(listTemp3);

 }

 // swap()������������(��������)
 void swap_test()
 {
 ShowList(g_list1);
 ShowList(g_list2);
 cout << endl;

 g_list1.swap(g_list2);
 ShowList(g_list1);
 ShowList(g_list2);
 }

 bool same_integral_part (double first, double second)
 { return ( int(first)==int(second) ); }

 // unique()ɾ�������ظ�Ԫ��
 void unique_test()
 {
 list<int> listTemp;
 listTemp.push_back(1);
 listTemp.push_back(1);
 listTemp.push_back(4);
 listTemp.push_back(3);
 listTemp.push_back(5);
 listTemp.push_back(1);
 list<int> listTemp2(listTemp);

 ShowList(listTemp);
 listTemp.unique();    // ����ɾ�������ڵ���ͬԪ��
 ShowList(listTemp);
 cout << endl;

 listTemp.sort();
 ShowList(listTemp);
 listTemp.unique();
 ShowList(listTemp);
 cout << endl;

 listTemp2.sort();
 ShowList(listTemp2);
 listTemp2.unique(same_integral_part);
 ShowList(listTemp2);

 }

 // ������������Ҫ�����ĸ��Ͱ��Ǹ�ע��ȥ������
 int _tmain()
 {
 InitList();
 //     ShowList(g_list1);
 //     ShowList(g_list2);

 //     constructor_test0();
 //     constructor_test1();
 //     constructor_test2();
 //     constructor_test3();
 //     constructor_test4();
 //     assign_test();
 //     operator_equality_test();
 //     front_test7();
 //     back_test();
 //     begin_test();
 //     end_test();
 //     rbegin_test();
 //     rend_test();
 //     push_back_test();
 //     push_front_test();
 //     pop_back_test();
 //     pop_front_test();
 //     clear_test();
 //     erase_test();
 //      remove_test();
 //     remove_if_test();
 //     empty_test();
 //     max_size_test();
 //     resize_test();
 //     reverse_test();
 //     sort_test();
 //     merge_test1();
 //     merge_test2();
 //     splice_test();
 //     insert_test();
 //     swap_test();
 //     unique_test();
 return 0;
 }
 */

