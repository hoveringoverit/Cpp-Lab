#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter The Number";
    cin>>n;
    for(int i=2; i<n; i++)
    {
        bool f=false;
        for(int j=2; j*j<=i; j++)
        {
            if(i%j==0)
            {
                f=true;
                break;
            }
        }
        if(!f) cout<<i<<" ";
    }
    return 0;
}
