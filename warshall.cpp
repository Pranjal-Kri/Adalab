#include<iostream>
using namespace std;

int main()
{
    int mat1[4][4]={
    //   0 1 2 3
        {0,1,0,0},
        {0,0,0,1},
        {0,0,0,0},
        {1,0,1,0}
    };

    for (int k = 0; k < 4; k++)
    {
        cout<<"For matrix when k= "<<k<<endl;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (i!=k && j!=k)
                {
                    if (mat1[i][j]==0)
                    {
                        mat1[i][j]=mat1[i][k]&&mat1[k][j];
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