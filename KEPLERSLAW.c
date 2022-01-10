#Problem Link : https://www.codechef.com/JAN221C/problems/KEPLERSLAW 
#Problem Code : KEPLERSLAW

#include <stdio.h>
int main() 
{
    int t;
    float a,b,c,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%f%f%f%f",&a,&b,&c,&d);
        if((a*a)/(c*c*c) == (b*b)/(d*d*d))
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
	  return 0;
}

