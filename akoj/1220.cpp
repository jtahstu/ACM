/*青蛙过河

Time Limit:1000MS  Memory Limit:65536K
Total Submit:31 Accepted:2

Description

一群青蛙在河边，他们想过河。可是他们喜欢表演啊，想边唱歌边过河。
这首歌大家都会唱啊：
1 frog has 1 mouth, 2 eyes and 4 legs, plop dives into the water.
2 frogs have 2 mouths, 4 eyes and 8 legs, plop plop dive into the water.
3 frogs have 3 mouths, 6 eyes and 12 legs, plop plop plop dive into the water.
……
究竟应该怎么唱呢？我们就来研究一下。
现在我们看到了n只青蛙，我们来猜猜他们唱歌的歌词是什么。

Input

行1：一个正整数n(1≤n≤100)，代表青蛙的个数

Output

行1：青蛙过河的歌词。格式为：
W frog(s) have(has) X mouth(s), Y eye(s) and Z leg(s), (plop…plop) dive(s) into the water .
注意括号不是输出内容。W、X、Y、Z分别代表青蛙个数，嘴巴个数，眼睛个数，腿个数。然后有N个plop(扑通声)。任何单词（包括数字和符号）之间都是由一个空格分开的，别在这里绊住了）。注意个数为1的时候要用单数形式。

Sample Input


1
Sample Output


1 frog has 1 mouth, 2 eyes and 4 legs, plop dives into the water.
Source*/

#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n,i;
	while(cin>>n){
	if(n==1) cout<<"1 frog has 1 mouth, 2 eyes and 4 legs, plop dives into the water."<<endl;
	else if(n>1)
	{
		cout<<n<<" frogs have "<<n<<" mouths, "<<2*n<<" eyes and "<<4*n<<" legs, ";
		for(i=0;i<n;i++)
			cout<<"plop ";
		cout<<"dive into the water."<<endl;
	}
	}
	return 0;
}
