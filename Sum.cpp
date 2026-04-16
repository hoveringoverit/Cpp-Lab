#include <iostream>
using namespace std;

int main() 
{
    int num;
    cin>>num;
    int sum=0;
    while(num>0)
    {
        int temp=num%10;
        sum+=temp;
        num/=10;
    }
    cout<<"The Sum is "<<sum;
    return 0;
}
