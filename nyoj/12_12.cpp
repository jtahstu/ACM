//
//
//#include<stdio.h>
//main()
//{
//    int n,t,m,i,b[5];
//    while (scanf("%d%d%d%d%d",b,b+1,b+2,b+3,b+4)!=EOF)
//    {
//        n=t=0;
//        for (i=0; i<5; i++)
//        {
//            n+=b[i];
//        }
//        n=n*10+25;
//        for (i=0; i<5; i++)
//        {
//            scanf("%d",&m);
//            t+=m;
//        }
//        if (t>n)
//        {
//            printf("Yes %d\n",t-n);
//        }
//        else
//        {
//            printf("No !\n");
//        }
//    }
//}
//
//#include <stdio.h>
//main()
//{
//	char c[50005];
//	while(gets(c))
//	{
//		gets(c);
//		printf("YES\n");
//	}
//}
//#include <stdio.h>
//#include <string.h>
//char str[300], sam[] = "你我";
//
//int main(){
//	int len, i;
//	while(scanf("%s", str)){
//		len = strlen(str);
//		if(len == 1 && str[0] == '0')
//			break;
//		for(i = 0; i != len; ++i)
//			if(str[i] == sam[0] && str[i+ 1] == sam[1] && str[i + 2] == sam[2])
//				str[i] = sam[3], str[i + 1] = sam[4], str[i + 2] = sam[5], i += 2;
//			else if(str[i] == sam[3] && str[i+ 1] == sam[4] && str[i + 2] == sam[5])
//				str[i] = sam[0], str[i + 1] = sam[1], str[i + 2] = sam[2], i += 2;
//		puts(str);
//	}
//	return 0;
//}
//#include<iostream>
//#include<cstdio>
//#include<string>
//#include<cstring>
//using namespace std;
//int main()
//{
//    string s,t;
//    int len=strlen("我");//无论在哪种环境下都能求出汉字所占的精确字节数
//    int i;
//    while(cin>>s && s!="0")
//    {
//        for(i=0;i<s.length();)
//        {
//            t=s.substr(i,len);
//            if(t=="我")  //string类型可以直接用等于号判相等
//            {
//                cout<<"你";
//                    i+=len;
//            }
//            else if(t=="你")
//            {
//                cout<<"我";
//                    i+=len;
//            }
//            else
//            {
//                cout<<s[i];
//                i++;
//            }
//        }
//        cout<<endl;
//    }
//    return 0;
//}

//#include<cstdio>
//main()
//{
//    char _[15];
//    gets(_);
//    while(gets(_))puts(_);
//}

//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//int Abs(int n)
//{
//    return n<0?-n:n;
//}
//int main()
//{
//    int n;
//    while(scanf("%d",&n)!=EOF)
//    {
//        printf("%d\n",(n+1)*(Abs(n-1)+1)/2);
//    }
//    return 0;
//}
