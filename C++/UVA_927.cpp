#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<utility>
#include<map>
#include<cmath>
#include<queue>
#include<stack>
#include<cstring>
#include<algorithm>
#include<sstream>
#define ll long long
#define VI vector<int>
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define REPR(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define eps (1e-9)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define S(x)scanf("%d\n",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int p[21];
int main(){
  int nc,k,d;S(nc);
  int g;
  while(nc--){
    scanf("%d",&g);
    REP(i,g+1){
      scanf("%d",&p[i]);
    }
    S(d);
    S(k);
    int i=1;
    int cont=d;
    int cont2=d;
    while(cont2<k){
      i++;
      cont+=d;
      cont2+=cont;
    }
    unsigned long long sum=0;
    REP(j,g+1){
      sum+=p[j]*pow(i,j);
    }
    printf("%lld\n",sum);
  }
  return 0;	
}
