/*
 * 34.cpp
 * Created on: 2015��4��4��
 * Author: jtahstu
 */
//34��������O
//
//�������²μӻ����������OΪA��B��C����������ΪX��Y��Z�����˲�֪��˭��˭��飬
//����ѯ������λ�����е���λ���������Ļش��������ģ�
//A˵������X��飻X˵����δ�����C��C˵������Z��顣��������֪�������ڿ���Ц��ȫ�Ǽٻ���
//�����ҳ�˭����˭��顣
//*���н��
//
//X will marry to B. (X��B���)
//
//Y will marry to C. (Y��C���)
//
//Z will marry to A. (Z��A���)
//a  x
//b  y
//c  z
#include<iostream>
#include<cstdio>
using namespace std;
int main34() {
	for (int i = 1; i <= 3; i++) //i����A
		for (int j = 1; j <= 3; j++) //j����B
			for (int k = 1; k <= 3; k++) //k����C
				if (i != 1 && k != 1 && k != 3&&i!=j&&i!=k&&j!=k)
					cout << "A B C�ֱ���" << char(i+87) << " " << char(j+87) << " " << char(k+87) << "���"
							<< endl;

	return 0;
}

