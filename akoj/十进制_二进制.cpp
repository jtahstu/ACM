int f(int a)//2����ת����10����
{
    int s=0,j=1;
    while(a)
    {
        s+=(a%10)*j;
        a=a/10;
        j=j*2;
    }
    return s;
}

int g(int s)//10����ת����2����
{
    int j=1,n=0;
    while(s)
    {
        n+=(s%2)*j;
        s=s/2;
        j*=10;
    }
    return n;
}
