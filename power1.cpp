//Program to print power of a given n0.//
#include<iostream>
using namespace std;
int pow(int a,int e)
{
    int ans=1;
        for(int i=0;i<e;i++)
        {
            ans=ans*a;
        }
        return ans;
}
int main()
{
    double a,e;
    cout<<" Enter two no.s(a=number,b=exponent)"<<endl;
        cin>>a>>e;
        int result=pow(a,e);
        cout<<"power of a= "<<result<<endl;
return 0;
}