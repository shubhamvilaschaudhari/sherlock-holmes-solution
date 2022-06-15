#include <stdio.h>
#include<string.h>
 
int main()
{   int t;
char s[10005],a[100005],b[100005];	
    scanf("%d",&t);
    while(t--)
    {   
        int k,i;
    	scanf("%s",s);
    	scanf("%s",a);
    	k=strlen(a);
    	for(i=0;i<k;i++)
    	b[i]=a[k-i-1];
    	b[k]='\0';
    	if(strstr(a,s)!=NULL)
    	printf("YES\n");
    	else if(strstr(b,s)!=NULL)
    	printf("YES\n");
    	else
    	printf("NO\n");
    }
    return 0;
}