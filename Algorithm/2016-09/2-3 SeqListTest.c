#include <stdio.h>
typedef struct {
    char key[15];  //���Ĺؼ���
    char name[20];
    int age;
} DATA;    //���������ͣ��ɶ���Ϊ�����ͣ�Ҳ�ɶ���Ϊ�ṹ
//#include "2-1 SeqList.h"
//#include "2-2 SeqList.c"
#include <stdio.h>
#include <string.h>
#define MAXSIZE 100  //�������Ա����󳤶�

typedef struct {  //����˳���ṹ
    DATA ListData[MAXSIZE+1]; //����˳��������
    int ListLen;              //˳����Ѵ��� ������
} SeqListType;

void SeqListInit(SeqListType *SL); //��ʼ��˳���
int SeqListLength(SeqListType *SL);  //����˳����Ԫ������
int SeqListAdd(SeqListType *SL,DATA data); //��˳��������Ԫ��
int SeqListInsert(SeqListType *SL,int n,DATA data); //��˳����в���Ԫ��
int SeqListDelete(SeqListType *SL,int n);  //ɾ��˳����еľ�Ԫ��
DATA *SeqListFindByNum(SeqListType *SL,int n);  //������ŷ���Ԫ��
int SeqListFindByCont(SeqListType *SL,char *key); //���ؼ��ֲ���
int SeqListAll(SeqListType *SL);//����˳����е�����

void SeqListInit(SeqListType *SL) { //��ʼ��˳���
    SL->ListLen=0;     //��ʼ��ʱ������˳�����Ϊ0
}
int SeqListLength(SeqListType *SL) { //����˳����Ԫ������
    return (SL->ListLen);
}
int SeqListAdd(SeqListType *SL,DATA data) { //����Ԫ�ص�˳���β��
    if(SL->ListLen>=MAXSIZE) { //˳�������
        printf("˳�����������������ӽ���ˣ�\n");
        return 0;
    }
    SL->ListData[++SL->ListLen]=data;
    return 1;
}
int SeqListInsert(SeqListType *SL,int n,DATA data) {
    int i;
    if(SL->ListLen>=MAXSIZE) { //˳����������ѳ����������
        printf("˳������������ܲ�����!\n");
        return 0;             //����0��ʾ���벻�ɹ�
    }
    if(n<1 || n>SL->ListLen-1) { //��������Ų���ȷ
        printf("����Ԫ����Ŵ��󣬲��ܲ���Ԫ�أ�\n");
        return 0;              //����0����ʾ���벻�ɹ�
    }
    for(i=SL->ListLen; i>=n; i--) //��˳����е���������ƶ�
        SL->ListData[i+1]=SL->ListData[i];
    SL->ListData[n]=data;        //������
    SL->ListLen++;               //˳�������������1
    return 1;                   //���سɹ�����
}
int SeqListDelete(SeqListType *SL,int n) { //ɾ��˳����е�����Ԫ��
    int i;
    if(n<1 || n>SL->ListLen+1) { //ɾ��Ԫ����Ų���ȷ
        printf("ɾ�������Ŵ��󣬲���ɾ����㣡\n");
        return 0;              //����0����ʾɾ�����ɹ�
    }
    for(i=n; i<SL->ListLen; i++) //��˳����е�������ǰ�ƶ�
        SL->ListData[i]=SL->ListData[i+1];
    SL->ListLen--;               //˳���Ԫ��������1
    return 1;                   //���سɹ�ɾ��
}
DATA *SeqListFindByNum(SeqListType *SL,int n) { //������ŷ�������Ԫ��
    if(n<1 || n>SL->ListLen+1) { //Ԫ����Ų���ȷ
        printf("�����Ŵ��󣬲��ܷ��ؽ�㣡\n");
        return NULL;              //����0����ʾ���ɹ�
    }
    return &(SL->ListData[n]);
}
int SeqListFindByCont(SeqListType *SL,char *key) { //���ؼ��ֲ�ѯ���
    int i;
    for(i=1; i<=SL->ListLen; i++)
        if(strcmp(SL->ListData[i].key,key)==0)  //����ҵ�������
            return i;        //���ؽ�����
    return 0;  //��������û���ҵ����򷵻�0
}

int SeqListAll(SeqListType *SL) { //����˳����еĽ��
    int i;
    for(i=1; i<=SL->ListLen; i++)
        printf("(%s,%s,%d)\n",SL->ListData[i].key,SL->ListData[i].name,SL->ListData[i].age);
}
int main() {
    int i;
    SeqListType SL;         //����˳������
    DATA data,*data1;       //�����㱣���������ͱ�����ָ�����
    char key[15];           //����ؼ���

    SeqListInit(&SL);       //��ʼ��˳���

    do {                    //ѭ����ӽ������
        printf("������ӵĽ��(ѧ�� ���� ����)��");
        fflush(stdin);              //������뻺����
        scanf("%s%s%d",&data.key,&data.name,&data.age);
        if(data.age) {                                  //�����䲻Ϊ0
            if(!SeqListAdd(&SL,data))                   //����ӽ��ʧ��
                break;                                  //�˳���ѭ��
        } else   //������Ϊ0
            break;          //�˳���ѭ��
    } while(1);
    printf("\n˳����еĽ��˳��Ϊ��\n");
    SeqListAll(&SL);                     //��ʾ���н������

    fflush(stdin);                       //������뻺����
    printf("\nҪȡ��������ţ�");
    scanf("%d",&i);                 //�����ռ�����
    data1=SeqListFindByNum(&SL,i);  //����Ų��ҽ��
    if(data1)                       //�����صĽ��ָ�벻ΪNULL
        printf("��%d�����Ϊ��(%s,%s,%d)\n",i,data1->key,data1->name,data1->age);

    fflush(stdin);                                                             //������뻺����
    printf("\nҪ���ҽ��Ĺؼ��֣�");
    scanf("%s",key);  //����ؼ���
    i=SeqListFindByCont(&SL,key);      //���ؼ��ֲ��� �����ؽ�����
    data1=SeqListFindByNum(&SL,i);     //����Ų�ѯ�����ؽ��ָ��
    if(data1)                          //�����ָ�벻ΪNULL
        printf("��%d�����Ϊ��(%s,%s,%d)\n",i,data1->key,data1->name,data1->age);
    getch();
    return 0;
}

