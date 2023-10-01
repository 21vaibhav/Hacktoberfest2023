#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    unsigned int u=n;
    int a=0;
    int i=0;
    while(u!=0)
    {
        int bit=u & 1;
        a=((bit * pow(10,i))+a);
        u=u>>1;
        i++;
    }
    cout<<a;
    int d=(~a);
    d=d+1;
    cout<<d<<endl;
}
