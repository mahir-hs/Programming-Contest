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
    vii v[1000001];
    int dis[1000001],lev[1000001];
    int chk[1000001];
     
    void bfs(int srs)
    {
        queue <int> q;
        q.push(srs);
        chk[srs] = 1;
        dis[srs] = 0;
        while(!q.empty())
        {
            int cur = q.front();
            q.pop();
     
            for(int kk : v[cur])
            {
                if(chk[kk] == 0)
                {
                    dis[kk] = dis[cur] + 1;
                    q.push(kk);
                    chk[kk] = 1;
                    lev[dis[kk]]++;
     
                }
            }
        }
    }
     
    int main()
    {
        int n,e,x,y,z,srs,b;
        cin>>n>>e;
     
        for(int i=0; i<e; i++)
        {
            cin>>x>>y;
            v[x].pb(y);
            v[y].pb(x);
        }
     
        cin>>z;
        for(int i=0; i<z; i++)
        {
            cin>>srs>>b;
            for(int i=0; i<=n; i++)
            {
                lev[i] = 0;
                chk[i] = 0;
            }
     
            bfs(srs);
     
            cout<<lev[b]<<endl;
     
        }
     
    }