#include "stdio.h"
main()
{
 char s[81],c;
 int i,num=0,word=0;
 printf("������һ��Ӣ��:\n");
 gets(s);
 for(i=0;(c=s[i])!='\0';i++)//�жϾ����Ƿ�δ
 if(c==' ') word=0;//�ǿո��Ϊ0
  else if(word==0)//���ǿո���ж�֮ǰ��û�пո�
    {
      word=1;//��λ�����жϿո��Ƿ���ڵĿ���
      num++;//���֮ǰ�пո񣬵�������1
    }
 printf("�����й���%d������.\n",num);
}
