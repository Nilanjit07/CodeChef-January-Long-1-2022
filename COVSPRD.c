#Problem Link : https://www.codechef.com/JAN221C/problems/COVSPRD
#Problem Code : COVSPRD

#include <stdio.h>
int main() 
{
	int t,i,s=1;
	scanf("%d",&t);
	while(t--)
	{
	   int a,b,s=1;
	   scanf("%d %d",&a,&b);
	   for(int i=1;i<=b&&s<a;i++)
	   {
            if(i<11) 
                s*=2;
            else 
                s*=3;
        }
        if(s>=a) 
            s=a;
        printf("%d\n",s);
 	}
	return 0;
} 
