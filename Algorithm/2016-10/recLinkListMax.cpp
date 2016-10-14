//求线性表的最大元素
ElemType Max(SqList L,int i,int j){
    int mid;
    ElemType max,max1,max2;
    if(i==j)
        max=L.data[i];
    else{
        mid=(i+j)/2;
        max1=Max(L,i,mid);
        max2=Max(L,mid+1,j);
        max=(max1>max2)?max1:max2;
    }
    return max;
}
