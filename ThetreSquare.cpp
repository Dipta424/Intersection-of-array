#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long long n,m,a;

    cin>>n>>m>>a;

    long long row=ceil(static_cast<double>(n)/a);
    long long column=ceil(static_cast<double>(m)/a);

    long long result=row*column;

    cout<<result<<endl;

    return 0;

}
