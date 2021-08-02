    #include<bits/stdc++.h>
    #define  FIO   ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define  pi    acos(-1.0)
    #define  ll    long long
    #define  EPS   1e-12
    #define  mx    210
    #define gcd(a,b) __gcd(a,b)
    #define lcm(a,b) (a*(b/gcd(a,b)))
    #define  vii   vector<int>
    #define  vll   vector<ll>
    #define  pii   pair<int,int>
    #define  pll   pair<ll,ll>
    #define  mii   map<int,int>
    #define  mll   map<ll,ll>
    #define  vip   vector<pair<int,int>>
    #define  vlp   vector<pair<ll,ll>>
    #define  pb    push_back
    #define  mp    make_pair
    using namespace std;
    bool cmp(string &a,string &b)
    {
        return a.size()<b.size();
    }
    vii v[10005];
    bool chk[10005];
    int dis[10005];
     
    void bfs(int srs)
    {
        chk[srs] = true;
        dis[srs] = 0;
        queue < int > q;
        q.push(srs);
        while(!q.empty())
        {
            int val = q.front();
            q.pop();
     
            for(int kk :  v[val])
            {
                if(chk[kk]==0)
                {
                    chk[kk] = true;
                    dis[kk] = dis[val] + 1;
                    q.push(kk);
                }
            }
        }
    }
     
    int main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n,m,x,y;
            cin>>n>>m;
            for(int i=1;i<=n;i++)
            {
                v[i].clear();
                chk[i] = false;
            }
            for(int i=1;i<=m;i++)
            {
                cin>>x>>y;
                v[x].pb(y);
                v[y].pb(x);
            }
     
            bfs(1);
     
            cout<<dis[n]<<endl;
     
        }
    }