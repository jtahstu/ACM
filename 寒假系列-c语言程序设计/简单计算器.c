main()
{
    float a,b;
    char c;

    scanf("%f%c%f",&a,&c,&b);
    switch(c)
    {
        case'+':printf("%.2f\n",a+b);break;
        case'-':printf("%.2f\n",a-b);break;
        case'*':printf("%.2f\n",a*b);break;
        case'/':printf("%.2f\n",a/b);break;
        default:printf("input error\n");
    }

    return 0;
}
