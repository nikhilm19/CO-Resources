#include<stdio.h>
#include<string.h>
int main()
{
    int key,i,l,c;
    char a[100],b[i];
    printf("Enter a string:");
    scanf("%s",a);
    printf("Enter key:");
    scanf("%d",&key);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            c=(int)a[i]+key;
            if(c>122)
            b[i]=((c-122)%26)+96;
        }
        if(a[i]>='A' && a[i]<='Z')
        {
            c=(int)a[i]+key;
            if(c>90)
            b[i]=((c-90)%26)+64;
        }
    }
    b[i]='\0';
    printf("The cipher text with key %d is: %s",key,b);
    printf("\n");
    int y=strlen(b),e;
    char d[100];
    for(i=0;i<y;i++)
    {
        if(b[i]>='a' && b[i]<='z')
        {
            e=(int)b[i]-key;
            if(e<97)
            d[i]=((e-97)%26)+123;
            int p=(int)d[i];
            if(p>122)p-=26;
            d[i]=p;
        }
        if(a[i]>='A' && a[i]<='Z')
        {
            e=(int)b[i]-key;
            if(e<65)
            d[i]=((e-65)%26)+91;
            int q=(int)d[i];
            if(q>90)q-=26;
            d[i]=q;
        }
    }
    d[i]='\0';
    printf("The decrypted text with key %d is: %s",key,d);
    return 0;
}
