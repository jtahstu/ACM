/*
 * 10.cpp
 * Created on: 2015��4��1��
 * Author: jtahstu
 */
//10 ����5λ��
//��λ��Ϊ6���ܱ�3��������λ�����ж��٣�
//*˼����
//��100��1000֮���ж��ٸ�������֮��Ϊ5��������
//(�𰸣�104��113��122��131��140��203��212��221��230��302��311��320��401��410��500)
//
//*���н��
//count=2999
#include<iostream>
#include<cstdio>
using namespace std;
int main10() {
	int count = 0;
	for (int i = 0; i <= 9; i++)
		for (int j = 0; j <= 9; j++)
			for (int k = 0; k <= 9; k++)
				for (int l = 0; l <= 9; l++)
					if ((i * 10000 + j * 1000 + k * 100 + l * 10 + 6) % 3 == 0
							&& (i * 10000 + j * 1000 + k * 100 + l * 10 + 6)
									> 10000)
						count++;
	cout << count << endl;
	return 0;
}

