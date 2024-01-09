#include<iostream>
#include<vector>

using namespace std;
vector<int> Plusone (vector<int> &digits,int l){

    int num=digits[l-1] +1;
    
    if(num<10)
    {
        digits[l-1]=num;
        
    }
    else
    {
        digits[l-1]=num%10;
        if(l>1)
        {
            Plusone(digits,l-1);
        }
        else
        {
            digits.insert(digits.begin(),1);
        }
    
    
    }
    return digits ;

}

int main()
{
    int n;
    cin>>n;
    vector<int>digits(n);
    for(int i=0; i<n; i++)
    {
        cin>>digits[i];
    }
    Plusone(digits,n);
    
    for(int ele: digits)
    {
        cout<<ele<<" ";
    }
    return 0;
}