#include <bits/stdc++.h>
#include <stdio.h>
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
#define SS(str)scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 100005
#define ull unsigned long long
using namespace std;
string i2s(int x){stringstream ss;ss<<x;return ss.str();}
string R[731];
void Precalc(){
  REPN(i,1,731){
    ull nro,aux;
    set<ull> setp;
    bool goal=0;
    int veces=0;
    nro = i;
    aux=nro;
    while(nro!=1){
      if(setp.find(nro)==setp.end()) {
	setp.insert(nro);
	veces++;
      } else {goal=1; break;}
      aux=nro;
      ull cont=0;
      while(aux){
	cont+=sqr(aux%10);
	aux/=10;
      }
      nro=cont;
    }
    if(goal)
      R[i]="-1";
    else
      R[i]=i2s(veces+1);
  }
  return;
}
char str[15];
int fun(){
  int r=0;
  REP(i,strlen(str)){
    r+=sqr(str[i]-'0');
  }
  return r;
}
int nro;
int n;
int main(){
  Precalc();
  R[0]="-1";
  S(n);
  while(n--){
    SS(str);
    puts(R[fun()].c_str());
  } 
  return 0;
}
