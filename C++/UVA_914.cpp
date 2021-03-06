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
#define ALL(v) (v).begin(),(v).end()
#define RALL(v) (v).rbegin(),(v).rend()
#define pb push_back
#define mp make_pair
#define sqr(x) (x)*(x)
#define dbg(x) cout << #x << " = " << x << endl
#define dbg2(x,y)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<endl
#define dbg3(x,y,z)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<endl
#define S(x)scanf("%d\n",&x)
#define SS(str) scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define f first
#define s second
#define MOD 100007
#define MAXN 1000006
using namespace std;
int sieve[MAXN+1];
int primes[MAXN+1];
int primescount=1;
int n,b,e;
int main(){
  for(int i=2;i<=MAXN;i++){
    if(!sieve[i]){
      primes[primescount]=i;
      sieve[i]=primescount;
      primescount++;
    }
    for(int j=1;j<=sieve[i]&&i*primes[j]<=MAXN;j++){
      sieve[i*primes[j]]=j;
    }
  }
  S(n);
  while(n--){
    S2(b,e);
    int low=lower_bound(primes,primes+primescount,b)-primes;
    int upp=upper_bound(primes,primes+primescount,e)-primes;
    // dbg2(low,upp);
    vi v;
    map<int,int> mapa;
    map<int,int>::iterator it;
    REPN(i,low+1,upp){
      mapa[primes[i]-primes[i-1]]++;
      // dbg(primes[i]-primes[i-1]);
    }
    int maximo=-1,id;
    for(it=mapa.begin();it!=mapa.end();it++){
      if(maximo<(*it).s){
	maximo=(*it).s;
	id = (*it).f;
      }
    }
    int cnt=0;
    for(it=mapa.begin();it!=mapa.end();it++){
      if(maximo==(*it).s){
	cnt++;
      }
    }
    if(cnt==1){
      printf("The jumping champion is %d\n",id);
    } else {
      printf("No jumping champion\n");
    }
  }
  return 0;
}
