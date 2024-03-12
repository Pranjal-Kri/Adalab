#include <iostream>
using namespace std;
int n, a[10][10], i, j, v[10], count = 0;
void dfs(int x)
{
    count++;
    v[x] = count;
    if (v[x] != 0)
        cout << x << "\t";

    for (int k = 1; k <= n; k++)
        if (a[x][k] == 1 && v[k] == 0)
            dfs(k);
}
int main()
{
    cout << "\nEnter no. of Nodes: ";
    cin >> n;
    cout << "\nEnter the Adjacency Matrix:\n";
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            cin >> a[i][j];
    for (i = 1; i <= n; i++)
        v[i] = 0;

    cout << "\nDFS:\t";
    for (i = 1; i <= n; i++)
        if (v[i] == 0)
            dfs(i);
    cout << "\n";
    return 0;
}