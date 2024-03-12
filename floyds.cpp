#include<iostream>
using namespace std;
const int INF=999;

int main()
{
    int mat1[5][5]={
        {0,5,INF,6,INF},
        {INF,0,1,INF,7},
        {3,INF,0,4,INF},
        {INF,INF,2,0,3},
        {2,INF,INF,5,0}
    };
    for (int k = 0; k < 5; k++)
    {
        cout<<"For matrix when k= "<<k<<endl;
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i!=k && j!=k)
                {
                    if (i!=j)
                    {
                        mat1[i][j]=min(mat1[i][j],(mat1[i][k]+mat1[k][j]));
                    }
                    
                } 
                    cout<<mat1[i][j]<<'\t';
            }
            cout<<endl;   
        }
        cout<<"---------------------"<<endl;       
    }
 return 0;
}