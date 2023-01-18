#include <iostream>
using namespace std;

int mas[4][4] = { { 0, 1, 0, 1 },
                { 1, 0, 0, 0 },
                { 0, 0, 0, 1 },
                { 1, 0, 1, 0 } };
int nodes[4]; // вершины графа
void search(int st, int n)
{
    int r;
    cout << st + 1 << " ";
    nodes[st] = 1;
    for (r = 0; r < n; r++)
        if ((mas[st][r] != 0) && (nodes[r] == 0))
            search(r, n);
}
int main()
{
    for (int i = 0; i < 4; i++) // исходно все вершины равны 0
        nodes[i] = 0;
    search(0, 4);
    cin.get();
    return 0;
}