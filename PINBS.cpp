#Problem Link : https://www.codechef.com/JAN221C/problems/PINBS
#Problem Code : PINBS

#include <iostream>
using namespace std;
int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int c = 0, p = -1;
	    string s;
	    cin>>s;
	    int n = s.length();
	    if(n == 1)
	    {
	        cout<<"No"<<endl;
	        continue;
	    }
	    int temp = 0;
	    for(int i=0;i<n-1;i++)
	    {
	        if(s[i] == '1')
	        {
	            temp = 1;
	            cout<<"Yes"<<endl;
	            break;
	        }
	    }
	    if(temp == 0)
	    {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
