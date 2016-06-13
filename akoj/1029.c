   #include<stdio.h>  
    #include<string.h>  
    int main()  
    {  
        int t;  
        scanf("%d",&t);  
        char s[10005],stack[10005];  
        while(t--)  
        {  
            scanf("%s",s);  
            int i,l=strlen(s),j=0,flag=1;  
            for(i=0; i<l; i++)  
            {  
                if(s[i]=='('||s[i]=='[')  
                    stack[j++]=s[i];  
                if(s[i]==')')  
                {  
                    if(stack[j-1]=='(')  
                    {  
                        j--;  
                        flag=1;  
                    }  
                    else  
                        flag=0;  
                }  
                if(s[i]==']')  
                {  
                    if(stack[j-1]=='[')  
                    {  
                        j--;  
                        flag=1;  
                    }  
                    else  
                        flag=0;  
                }  
                if(!flag) break;  
            }  
            printf(flag&&j==0?"Yes\n":"No\n");  
        }  
        return 0;  
    }  