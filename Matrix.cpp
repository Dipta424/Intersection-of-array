#include<iostream>
using namespace std;

void matrix_product( int **x,int **y,int **c,int r1,int c1,int r2,int c2 );

int main()
{
    int r1,r2,c1,c2;
    cout<<"enter r1,c1,r2,c2 respectively: "<<endl;
    cin>>r1>>c1>>r2>>c2;
    //dynamic memory allocation

    int **a=new int*[r1];       //memory allocation  each row
    for(int i=0; i<r1; i++)
    {
        a[i]=new int[c1];     //memory allocation for column
    }

    int **b=new int *[r2];
    for(int i=0; i<r2; i++)
    {
        b[i]=new int [c2];
    }

    //taking inputs for a matrix
    cout<<"Enter a matrix"<<endl;
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }
    //taking inputs for b matrix
    cout<<"Enter b matrix"<<endl;
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            cin>>b[i][j];
        }
        cout<<endl;
    }


    int **c=new int *[r1];          //memory allocation for row
    for(int i=0; i<r1; i++)
    {
        c[i]=new int[c2];

    }
    matrix_product(a,b,c,r1,c1,r2,c2);

    for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }

    cout<<"\n";
    return 0;

    }

void matrix_product( int **x,int **y,int **c,int r1,int c1,int r2,int c2 )
{
    if(c1!=r2)
    {
        cout<<"Matrix is multiplication is not possible"<<endl;
    }
    else
    {


        for(int i=0; i<r1; i++)
        {
            for(int j=0; j<c2; j++)
            {
                int sum=0;
                for(int k=0; k<c1; k++)
                {
                  sum+=x[i][k]*y[k][j];
                }
                c[i][j]=sum;
            }
        }


}

}
