#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    for (int i=0;i<t;i++)
    {
        cin>>a>>b;
        cout<<((2*a*b)/(a+b))<<endl;
    }
    return 0;
}
