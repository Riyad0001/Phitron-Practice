#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 2;
int par[N];
int siz[N];
void initializ(int n)
{
    for (int i = 0; i < n; i++)
    {
        par[i] = -1;
        siz[i] = 1;
    }
}
class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};
bool cmp(Edge a, Edge b)
{
    return a.c < b.c;
}
int find(int node)
{
    if (par[node] == -1)
        return node;
    int leader = find(par[node]);
    par[node] = leader;
    return leader;
}
void unio(int node, int node2)
{
    int led1 = find(node);
    int led2 = find(node2);
    if (siz[led1] < siz[led2])
    {
        par[led1] = led2;
        siz[led2] += siz[led1];
    }
    else
    {
        par[led2] = led1;
        siz[led1] += siz[led2];
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    initializ(n);
    vector<Edge> edgl;
    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edgl.push_back(Edge(a, b, c));
    }
    sort(edgl.begin(), edgl.end(), cmp);
    int mst = 0;
    for (Edge v : edgl)
    {
        int leader1 = find(v.a);
        int leader2 = find(v.b);
        if (leader1 == leader2)
        {
            continue;
        }
        else
        {
            unio(v.a, v.b);
            mst += v.c;
        }
    }
    cout << mst;
    return 0;
}