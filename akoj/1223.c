int main()
{
    int a,b,c;
    double d;
    while(scanf("%d%d%d",&a,&b,&c)==3)
    {
        d=(a-b)*5/2+c;
        printf(d>=b?"You have slain an enemy\n":"You have been slayed\n");
    }
}
