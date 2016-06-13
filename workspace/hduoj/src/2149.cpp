/**
 * Project Name: hduoj 
 * File Name: 2149.cpp
 * Created on: 2015年5月19日 下午8:23:10
 * Author: jtahstu 
 * QQ: 1373758426 E-mail:1373758426@qq.com
 * Copyright (c) 2015, jtahstu , All Rights Reserved.
 */
//#include <stdio.h>//巴什博奕
//int main()
//{
//	int n,m,i;
//	while(~scanf("%d%d",&m,&n))
//	{
//		if(m%(n+1)==0)  //必输的情况
//			printf("none\n");
//		else
//		{
//			if(m<n) //胜利，有多种取得情况
//			{
//				for(i=m;i<=n;i++)
//				{
//					if(i==n)
//						printf("%d\n",i);
//					else
//						printf("%d ",i);
//				}
//			}
//			else  //取走多余的几个，使局面达到必胜的点
//			{
//				printf("%d\n",m%(n+1));
//			}
//		}
//	}
//	return 0;
//}


//Public Sale
//Time Limit: 1000/1000 MS (Java/Others)    Memory Limit: 32768/32768 K (Java/Others)
//Total Submission(s): 5269    Accepted Submission(s): 3137
//
//
//Problem Description
//虽然不想，但是现实总归是现实，Lele始终没有逃过退学的命运，因为他没有拿到奖学金。现在等待他的，就是像FarmJohn一样的农田生涯。
//
//要种田得有田才行，Lele听说街上正在举行一场别开生面的拍卖会，拍卖的物品正好就是一块20亩的田地。于是，Lele带上他的全部积蓄，冲往拍卖会。
//
//后来发现，整个拍卖会只有Lele和他的死对头Yueyue。
//
//通过打听，Lele知道这场拍卖的规则是这样的：刚开始底价为0，两个人轮流开始加价，不过每次加价的幅度要在1～N之间，
//当价格大于或等于田地的成本价 M 时，主办方就把这块田地卖给这次叫价的人。
//
//Lele和Yueyue虽然考试不行，但是对拍卖却十分精通，而且他们两个人都十分想得到这块田地。所以他们每次都是选对自己最有利的方式进行加价。
//
//由于Lele字典序比Yueyue靠前，所以每次都是由Lele先开始加价，请问，第一次加价的时候，
//Lele要出多少才能保证自己买得到这块地呢？
//
//
//Input
//本题目包含多组测试，请处理到文件结束(EOF)。每组测试占一行。
//每组测试包含两个整数M和N(含义见题目描述，0<N，M<1100)
//
//
//Output
//对于每组数据，在一行里按递增的顺序输出Lele第一次可以加的价。两个数据之间用空格隔开。
//如果Lele在第一次无论如何出价都无法买到这块土地，就输出"none"。
//
//
//Sample Input
//
//4 2
//3 2
//3 5
//
//
//
//Sample Output
//
//1
//none
//3 4 5
//
//
//
//Author
//Linle

