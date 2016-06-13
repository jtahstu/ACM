#include<stdio.h>
#include<string.h>
char s[10001];
int main()
{
    int t, c,i;
    scanf( "%d", &t );
    getchar();
    while( t -- )
    {
        scanf( "%s", s );
        int l = strlen(s);
        c = 1;
        for(i = 1; i < l; i ++ )
        {
            if( s[i]==s[i-1] ) ++c;
            else
            {
                if(c>1)
                    printf( "%d", c );
                printf( "%c", s[i-1] );
                c = 1;
            }
        }
        if( s[l-1] == s[l-2] )
            printf( "%d%c", c, s[l-2] );
        else
            printf( "%c", s[l-1] );
        printf( "\n" );
    }
}
