    #include<stdio.h>
    #include<string.h>
    int main()
    {
    char a[100],b[100][100],c[100];
    int key[100],i,j,m=1,k,l=0,n;
    printf("enter string:\n");
    gets(a);
    printf("enter n:\n");
    scanf("%d",&n);
    printf("enter key:\n");
    for(i=0;i<n;i++)
    {
    scanf("%d",&key[i]);
    }
    int col,x=0;
    col=strlen(a)/n;
    printf("col=%d\n",col);
    for(i=0;i<col+1;i++)
    {
    for(j=0;j<n;j++)
    { if(a[x]!=NULL)
    b[i][j]=a[x++];
    else
    b[i][j]='X';
    }
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
    printf("%d\t",key[i]);
    }
    printf("\n");
    for(i=0;i<col+1;i++)
    {
    for(j=0;j<n;j++)
    {
    printf("%c\t",b[i][j]);
    }
    printf("\n");
    }
    for(k=0;k<n;k++)
    {
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
    if(key[j]==m)
    {
    c[l++]=b[i][j];
    }
    }
    }
    m++;
    }
    for(i=0;i<100;i++)
    {
    printf("%c",c[i]);
    }
    return 0;
    }
