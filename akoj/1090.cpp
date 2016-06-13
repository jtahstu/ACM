#include<stdio.h>
#include<string.h>
using namespace std;

char Input[1000];

char Convert[26];

int main(void)
{
    int i;
    int Len;
    char* EndP;

    for (i='A'; i<='Z'; i++)
    {
        Convert[i - 'A'] = i;
    }

    Convert['A' - 'A'] = Convert['W' - 'A'] = Convert['F' - 'A'] = 'I';
    Convert['C' - 'A'] = 'L';
    Convert['M' - 'A'] = 'o';
    Convert['S' - 'A'] = 'v';
    Convert['D' - 'A'] = Convert['P' - 'A'] = Convert['G' - 'A'] = Convert['B' - 'A'] = 'e';
    Convert['L' - 'A'] = 'Y';
    Convert['X' - 'A'] = 'u';

    while(gets(Input))
    {
        EndP = strstr(Input, "END");
        if ( EndP!= NULL)
        {
            if (EndP == Input)
            {
                break;
            }
        }

        Len = strlen(Input);

        for (i=0; i<Len; i++)
        {
            if (Input + i == EndP)
            {
                return 0;
            }

            if (Input[i] >= 'A' && Input[i] <= 'Z')
            {
                printf("%c", Convert[Input[i] - 'A']);
            }
            else
            {
                printf("%c", Input[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
