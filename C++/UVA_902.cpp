#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define ii pair<int,int>
#define vii vector<ii>
#define REPN(i,x,y) for(int i=x;i<y;i++)
#define REP(i,y) REPN(i,0,y)
#define REPR(i,y,x) for(int i=y;i>=x;i--)
#define CLR(A,x) memset(A,x,sizeof(A))
#define INF (1<<30)
#define EPS (1e-9)
#define ones(x) __builtin_popcount(x)
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define dbg3(x,y,z)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define S(x)scanf("%d\n",&x)
#define SS(str)scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d ",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 1000006
using namespace std;
char str[MAXN];
string aux,aux1,s1;
int n;
int main(){
  while(SC(n)==1,SS(str)==1){
    int size=strlen(str)+1;
    size-=n;
    aux=(string)str;
    map<string,int> mapa;
    map<string,int>::iterator it;
    REP(i,size){
      aux1=aux.substr(i,n);
      mapa[aux1]++;
      // dbg(aux1);
    }
    int maxi=-1;
    for(it=mapa.begin();it!=mapa.end();it++){
      if(maxi<(*it).s){
	maxi=(*it).s;
	s1=(*it).f;
      }
    }
    printf("%s\n",s1.c_str());
  }
  return 0;
}
