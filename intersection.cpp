#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n1;

    cin>>n1;
    vector<int>v1;
    for(int i=0; i<n1; i++)
    {
        int ele;
        cin>>ele;
        v1.push_back(ele);
    }
    int n2;
    cin>>n2;
    vector <int>v2;
    for(int i=0; i<n2; i++)
    {
        int ele;
        cin>>ele;
        v2.push_back(ele);

    }
    //sorting in ascending form
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    vector<int> res;
    //using two pointer

    int i=0,j=0;
    while(v1.size()>i && v2.size()>j)
    {
        if(v1[i]==v2[j])
        {
            res.push_back(v1[i]);
            i++;
            j++;
        }
        else if(v1[i]>v2[j])
        {
            j++;
        }
        else if(v1[i]<v2[j])
        {
            i++;
        }

    }
    for(int ele: res)
    {
        cout<<ele<<" ";
    }
  return 0;
}
