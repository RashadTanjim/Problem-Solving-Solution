//The Decoder UVA - 458

#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char a[100005];
    while(gets(a))
    {
        l=strlen(a);
        for(i=0;i<l;i++)
            a[i]=a[i]-7;
        puts(a);
    }
    return 0;
}
