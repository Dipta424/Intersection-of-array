#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
void repeatedNum(vector<int>&v);

int main()
{


int n;
cin>>n;
vector<int>v;
for(int i=0; i<n; i++)
{
  int element;
  cin>>element;
  v.push_back(element);
}
/*int index=0,count=0;
for(int i=0; i<v.size(); i++)
{
    for(int j=i+1; j<v.size(); j++)
    {
        if(v[i]==v[j])
        {
            v[index++]=v[i];
            v[i]=INT_MAX;
            count++;
        }
    }
}

for(int i=0; i<count; i++)
{
    cout<<v[i]<<" ";
}
*/
repeatedNum(v);

return 0;


}

        // using sorting  array

void repeatedNum(vector<int>&v)
{
    sort(v.begin(),v.end());

    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i]==v[i+1])
        {
            cout<<v[i]<<" ";
        }
    }

}


