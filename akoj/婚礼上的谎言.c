#include<stdio.h>
void main()
{
    int cock,hen,chick;
    for(cock=0;cock<=20;cock++)
    for(hen=0;hen<=33;hen++)
    for(chick=0;chick<=99;chick++)
    if(5*cock+3*hen+chick/3==100)
    if(cock+hen+chick==100)
    if(chick%3==0)
    printf("¹«¼¦£º%d Ä¸¼¦£º%d Ð¡¼¦£º%d\n",cock,hen,chick);
}
