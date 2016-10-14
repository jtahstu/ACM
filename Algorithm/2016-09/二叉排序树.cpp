#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node *lchild;
    struct Node *rchild;
} NODE,*BSTree;

/*
��ָ��T��ָ�Ķ����������еݹ���ҹؼ���Ϊkey��Ԫ�أ�
�����ҳɹ����򷵻�ָ���Ԫ�ؽڵ��ָ�룬���򷵻�NULL
*/
BSTree SearchBST(BSTree T,int key) {
    if(!T || T->data == key) //���ҵ�ʱ���ص�TΪ��Ԫ�ؽڵ㣬û���ҵ�ʱΪNULL
        return T;
    else if(key < T->data)            //���keyС�ڵ�ǰ�ڵ��ֵ���������������еݹ����
        return SearchBST(T->lchild,key);
    else                                //���key���ڵ�ǰ�ڵ��ֵ���������������еݹ����
        return SearchBST(T->rchild,key);
}

/*
��ָ��T��ָ�Ķ����������еݹ���ҹؼ���Ϊkey��Ԫ�أ�
�����ҳɹ����򷵻�ture�������ҵ������ݶ�Ӧ�Ľڵ�ָ�뱣����p�У�
���򷵻�false����������·���Ϸ��ʵ����һ���ڵ�ָ�뱣����p�С�
����Ĳ���parentָ��ÿ�εݹ�����������ĸ��ڵ�ĸ��ڵ㣬��ʼ���ǲ���T�ĸ��ڵ㣬
���ĳ�ʼֵΪNULL����Ŀ���Ǹ��ٲ���·���Ϸ��ʵĵ�ǰ�ڵ�ĸ��ڵ㣨����һ�����ʽڵ㣩
�ú�������������Ĳ��뺯�����á�
*/
bool SearchBST(BSTree T,int key,BSTree parent,BSTree &p) {
    if(!T) {       //���TΪNULL������Ҳ��ɹ�
        //������������գ���TΪNULL�����
        p = parent;
        return false;
    } else {         //���򣬼�������
        if(key == T->data) {         //�����ȣ�����ҳɹ�
            p = T;
            return true;
        } else if(key < T->data)      //���������еݹ����
            return SearchBST(T->lchild,key,T,p);
        else                            //���������еݹ����
            return SearchBST(T->rchild,key,T,p);
    }
}

/*
����T��ָ��Ķ����������в��Ҳ����ؼ���Ϊkey������Ԫ��ʱ��
�������ö�����������������ture�����򷵻�false��
����ʱ�����ı���ڵ��ֵ�����Ҫ�������á�
*/
bool InsertBST(BSTree &T,int key) {
    BSTree p;
    if(!SearchBST(T,key,NULL,p)) {      //�������ʧ�ܣ���ִ�в������
        //Ϊ�½ڵ����ռ䣬���Ը���ֵ
        BSTree pNew = (BSTree)malloc(sizeof(NODE));
        pNew->data = key;
        pNew->lchild = pNew->rchild = NULL;

        if(!p)                          //������գ���ֱ����pNewΪ���ڵ�
            T = pNew;
        else if(key < p->data)            //��Ϊ���Ӳ���p�����
            p->lchild = pNew;            //��Ϊ�Һ��Ӳ���p���ұ�
        else
            p->rchild = pNew;
        return true;
    } else
        return false;
}

/*
���õ�һ���㷨�Ӷ�����������ɾ��ָ��p��ָ��Ľڵ�,
���ڱ��ֶ������������������£��������������ؽӵ��ö�����������.
�ú�����Ҫ�����������ɾ����������
*/
void DeleteNode1(BSTree &p) {
    BSTree q,s;
    if(!p->lchild) {
        //���������Ϊ�գ���ֻ���ؽ���������
        //�������������������Ϊ�յ����
        q = p;
        p = p->rchild ;
        free(q);
    } else if(!p->rchild) {
        //���������Ϊ�գ���ֻ���ؽ���������
        q = p;
        p = p->lchild;
        free(q);
    } else {
        //���������������Ϊ�գ����ǲ�ȡ��һ�ַ������ؽ�����������
        //���������ȡ�޸��������ķ�����Ҳ�����޸�����������������
        s = p->lchild;       //ȡ��ɾ�ڵ����ڵ�

        //һֱ���ң�����sΪ��ɾ�ڵ��ǰ���ڵ�
        //��������ڵ�Ԫ�ذ���С����˳�����г�һ�����У�
        //��ĳ�ڵ��ǰ���ڵ㼴Ϊ�����иýڵ��ǰ��һ���ڵ�
        while(s->rchild)
            s = s->rchild;
        s->rchild = p->rchild;    //��p����������Ϊs��������
        q = p;
        p = p->lchild;       //��p��������ֱ�ӽӵ��丸�ڵ����������
        free(q);
    }
}

/*
���õڶ����㷨�Ӷ�����������ɾ��ָ��p��ָ��Ľڵ�,
���ڱ��ֶ������������������£��������������ؽӵ��ö�����������.
�ú�����Ҫ�����������ɾ����������
*/
void DeleteNode2(BSTree &p) {
    BSTree q,s;
    if(!p->lchild) {
        //���������Ϊ�գ���ֻ���ؽ���������
        //�������������������Ϊ�յ����
        q = p;
        p = p->rchild ;
        free(q);
    } else if(!p->rchild) {
        //���������Ϊ�գ���ֻ���ؽ���������
        q = p;
        p = p->lchild;
        free(q);
    } else {
        //���������������Ϊ�գ����ǲ�ȡ�ڶ��ַ������ؽ�����������
        //���������ȡ�޸��������ķ�����Ҳ�����޸�����������������
        q = p;
        s = p->lchild;       //ȡ��ɾ�ڵ����ڵ�
        while(s->rchild) {
            //һֱ���ң�����sΪ��ɾ�ڵ��ǰ���ڵ㡣
            //��������ڵ�Ԫ�ذ���С����˳�����г�һ�����У�
            //��ĳ�ڵ��ǰ���ڵ㼴Ϊ�����иýڵ��ǰ��һ���ڵ�
            q = s;
            s = s->rchild;
        }
        //��s���滻��ɾ�ڵ�p
        p->data = s->data;
        //�����������s���������ؽӵ�q��
        if(p != q)
            q->rchild = s->lchild;
        else
            q->lchild =s->lchild;
        free(s);
    }
}

/*
��T��ָ��Ķ����������в��ҵ��ؼ���Ϊkey������Ԫ�أ�
��ɾ����Ԫ�ض�Ӧ�Ľڵ㣬������true�����򷵻�false
���Ҫɾ����ǡ���Ǹ��ڵ㣬���ı���ڵ��ֵ�����Ҫ��������
*/
bool DeleteBST(BSTree &T,int key) {
    //�����ڹؼ���Ϊkey�Ľڵ�
    if(!T)
        return false;
    else {
        if(key == T->data) {     //���ҵ��ؼ���Ϊkey�Ľڵ�
            DeleteNode1(T);
            //          DeleteNode2(T);
            return true;
        } else if(key < T->data) //��������������
            return DeleteBST(T->lchild,key);
        else                        //��������������
            return DeleteBST(T->rchild,key);
    }
}

/*
���������ĳ�Ϊlen��arr���飬��������Ԫ�ص�˳�򹹽�һ�ö���������
*/
BSTree CreatBST(int *arr,int len) {
    BSTree T = NULL;
    int i;
    //��˳������ڵ���뵽������������
    for(i=0; i<len; i++)
        InsertBST(T,arr[i]);
    return T;
}

/*
�ݹ���������������������õ�Ԫ�ش�С�����������е�����
*/
void inTraverse(BSTree T) {
    if(T) {
        if(T->lchild)
            inTraverse(T->lchild);
        printf("%d ",T->data);
        if(T->rchild)
            inTraverse(T->rchild);
    }
}

int main() {
    int i;
    int num;
    printf("������ڵ������");
    scanf("%d",&num);

    //����num������
    int *arr = (int *)malloc(num*sizeof(int));
    printf("������������%d�����������뻥����ȣ���",num);
    for(i=0; i<num; i++)
        scanf("%d",arr+i);

    //��������ö�����������ʹ���ݰ��մ�С�����˳�����
    BSTree T = CreatBST(arr,num);
    printf("��������ö����������Ľ����");
    inTraverse(T);
    printf("\n");

    //���Ҹ���������
    int key;
    printf("������Ҫ���ҵ�������");
    scanf("%d",&key);
    if(SearchBST(T,key))
        printf("���ҳɹ�\n");
    else
        printf("���Ҳ���������\n");

    //�������������
    printf("������Ҫ�����������");
    scanf("%d",&key);
    if(InsertBST(T,key)) {
        printf("����ɹ���������������������");
        inTraverse(T);
        printf("\n");
    } else
        printf("����ʧ�ܣ��ö������������Ѿ���������%d\n",key);

    //ɾ������������
    printf("������Ҫɾ����������");
    scanf("%d",&key);
    if(DeleteBST(T,key)) {
        printf("ɾ���ɹ���������������������");
        inTraverse(T);
        printf("\n");
    } else
        printf("ɾ��ʧ�ܣ��ö����������в���������%d\n",key);

    return 0;
}
