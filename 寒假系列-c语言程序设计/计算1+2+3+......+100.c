main()
{
     /*int i=0,a=0,n=0;
      while(i<=100)
      {
          a+=i;
          i++;
          n++;
      }
      printf("%d %d\n",a,n);*/
    int i,n,m;
    long s=0;
    scanf("%d%d",&m,&n);
    for(i=m; i<=n; i++)
    {
        s+=i;
    }
       printf("%ld\n",s);

    return 0;
}
