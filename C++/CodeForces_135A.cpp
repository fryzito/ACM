#include<iostream>
#include<cstdio>
#include<vector>
#include<set>
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
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 1003
using namespace std;
char str[MAXN];
int main(){
  int n;S(n);
  scanf("%[^\n]",str);
  map<char,int> mapa;
  map<char,int>::iterator it;
  int sz = strlen(str);
  REP(i,sz){
    mapa[str[i]]++;
  }
  string s="";
  for(it=mapa.begin();it!=mapa.end();it++) {
    if((*it).s%n!=0){
      P(-1);
      return 0;
    }
    REP(j,(*it).s/n){
      s+=(*it).f;
    }
  }
  REP(i,n){
    printf("%s",s.c_str());
  }
  putchar('\n');
  return 0;	
}
