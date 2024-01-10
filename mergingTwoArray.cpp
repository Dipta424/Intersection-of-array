#include<iostream>
#include<vector>
using namespace std;

vector<int> mergedArray(vector<int>&v1,int &size1,vector<int>&v2,int size2)
{
    int i=size1-1;
    int j=size2-1;
    int k=size1+size2-1;

    while(i>=0 && j>=0)
    {
        if(v1[i]<v2[j])
        {
           v1[k--]=v2[j--];
        }
        else
        {
            v1[k--]=v1[i--];
        }

    }

    while(j>=0)
    {
        v1[k--]=v2[j--];

    }

    size1=size1+size2;

    return v1;

}

int main()
{
    vector<int>v1={2,3,4,0,0,0},v2={1,2,5};

    int size1=3,size2=3;

    mergedArray(v1,size1,v2,size2);

    for(int i=0; i<size1; i++)
    {
        cout<<v1[i]<<" ";
    }

    return 0;
}


