#include<iostream>

using namespace std;

int main ()
{
	int n;
	cin >>n;
	while (n--)
	{
		int a=0,b=0;
		cin >>a >>b;
		while (b--)
		{
			for (int I =1; I <= a; I ++)
			{
				int x = I;
				for(int j=1; j <= I; j++)
				{
					cout<<x;
				}
				cout<<endl;
			}
			for(int k = a-1; k >0; k--)
            {
                int y=k;
                for(int k=y;k>0;k--)
                {
                    cout<<y;
                }
                cout<<endl;
            }
				cout<<endl;
		}
	}
	return 0;
}
/*1

3
2*/
