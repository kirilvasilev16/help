#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <cstring>
#define  MAXN 100000
using namespace std;

vector<int> graph[MAXN];
int n,m,j=0,k[MAXN];
int used[MAXN];
queue<int> q;

int bfs( int top)
{
    memset(used, 0,sizeof(used));//ime,razmer,promenq vsichli elementi za BOOL
    used[1]=1;
    q.push(1);//dobavqme 1 element
    while(!q.empty ())//obhojdane
    {
        int top=q.front ();//vzimame tekushtiq
        q.pop();// mahame
        //cout<<top<<endl;
        k[j]=top;
        j++;
    for(int i=0; i<graph[top].size(); i++)// obikalqme susedite na vrux
    {
        if(used[graph[top][i]]==0)//ako suseda ne e vlqzal,
        {
            used[graph[top][i]]=1;
            q.push(graph[top][i]);//vliza
        }
    }
    }
}
int main()
{
    int flag=0,a,b,n,qq,r[MAXN],r1[MAXN];
    cin>>m>>n;
    for(int i=0; i<m; i++)
    {
        cin>>a>>b;
        graph[a].push_back (b);//sused na b
        graph[b].push_back (a);//sused na a
    }
    cin>>qq;
    for(int i=0; i<qq; i++)
    {
        cin>>r[i]>>r1[i];
    }
    used[1] = 1;
    bfs(1);
    for(int i=0; i<qq; i++)
    {
        flag=0;
        for(int f=0; f<j; f++)
        {
            if(r[i]==k[f])flag++;
            if(r1[i]==k[f])flag++;
        }
        if(flag==2)cout<<1;
        else cout<<0;
    }
    return 0;
}
