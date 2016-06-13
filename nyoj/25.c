
/*
A Famous Music Composer
时间限制：1000 ms  |  内存限制：65535 KB
难度：1

描述
    Mr. B is a famous music composer. One of his most famous work was his set of preludes. These 24 pieces span the 24 musical keys (there are musically distinct 12 scale notes, and each may use major or minor tonality). The 12 distinct scale notes are:
     A     	A#=Bb  	B       	 C      	 C#=Db 	D       	D#=Eb  	E       	F       	 F#=Gb 	 G      	 G#=Ab

    Five of the notes have two alternate names, as is indicated above with equals sign. Thus, there are 17 possible names of scale notes, but only 12 musically distinct notes. When using one of these as the keynote for a musical key, we can further distinguish between major and minor tonalities. This gives 34 possible keys, of which 24 are musically distinct.
    In naming his preludes, Mr. B used all the keys except the following 10, which were named instead by their alternate names:
     Ab minor 	 A# major 	A# minor  	C# major  	Db minor
     D# major 	 D# minor 	Gb major  	Gb minor  	G# major
    Write a program that, given the name of a key, give an alternate name if it has one, or report the key name is unique.

输入
    Each test case is described by one line having the format "note tonality", where "note" is one of the 17 names for the scale notes given above, and "tonality" is either "major" or "minor" (quotes for clarify).
输出
    For each case output the required answer, following the format of the sample.
样例输入

    Ab minor
    D# major
    G minor

样例输出

    Case 1: G# minor
    Case 2: Eb major
    Case 3: UNIQUE


*//*#include<stdio.h>
#include<string.h>
int main()
{
    char s[10];
    int n=0;
    while(gets(s))
    {
        printf("Case %d: ",++n);
        if(s[1]=='#')
        {
            s[1]='b';
            s[0]+=1;
            if(s[0]=='H')s[0]='A';

            puts(s);
        }
        else if(s[1]=='b')
        {
            s[1]='#';
            s[0]-=1;
            if(s[0]<'A')s[0]='G';
            puts(s);
        }
        else printf("UNIQUE\n");
    }
}
*/

#define _________ }
    #define ________ putchar
    #define _______ main
    #define _(a) ________(a);
    #define ______ _______(){
    #define __ ______ _(0x48)_(0x65)_(0x6C)_(0x6C)
    #define ___ _(0x6F)_(0x2C)_(0x20)_(0x77)_(0x6F)
    #define ____ _(0x72)_(0x6C)_(0x64)_(0x21)
    #define _____ __ ___ ____ _________
    #include<stdio.h>
    _____
