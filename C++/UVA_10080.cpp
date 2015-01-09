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
#define dbg4(x,y,z,q)cout<<#x<<"="<<x<<" "<<#y<<"="<<y<<" "<<#z<<"="<<z<<" "<<#q<<"="<<q<<endl
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
#define MAXN 103
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}
int n,m,s,v;
vector<int> G[2*MAXN];
vi visit,matchs;
struct point{
  double x,y;
  point(){};
  point(double px,double py){x=px;y=py;}
};
double dist(point A,point B){
  return (sqrt(sqr(A.x-B.x)+sqr(A.y-B.y)));
}
int Aug(int nodo){
  if(visit[nodo]) return 0;
  visit[nodo]=1;
  REP(j,G[nodo].size()){
    int r=G[nodo][j];
    if(matchs[r]==-1||Aug(matchs[r])) {
      matchs[r]=nodo;
      return 1;
    }
  }
  return 0;
}
int main(){
  while(scanf("%d %d %d %d\n",&n,&m,&s,&v)==4){
    vector<point> v1,v2;
    point P1;
    REP(i,n){
      scanf("%lf %lf\n",&P1.x,&P1.y);
      v1.pb(P1);
    }
    REP(i,m){
      scanf("%lf %lf\n",&P1.x,&P1.y);
      v2.pb(P1);
    }
    fill(G,G+n+m,vector<int>());
    REP(i,v1.size()){
      REP(j,v2.size()){
	// dbg(dist(v1[i],v2[j]));
	//int auxli= (dist(v1[i],v2[j])<=(double)v*s);
	//	dbg4(i,j,dist(v1[i],v2[j]),auxli);
	if(dist(v1[i],v2[j])<=(double)v*s){
	  // hacer conexion
	  G[i].pb(j+n);
	}
      }
    }
    int ans=0;
    matchs.assign(n+m,-1);

    // REP(i,n){
    //   printf("G=%d\n",i);
    //   REP(j,G[i].size()){
    // 	printf("%d ",G[i][j]);
    //   }
    //   putchar('\n');
    // }

    REP(i,n){
      visit.assign(n,0);
      ans+=Aug(i);
    }
    P(n-ans);
  }
  return 0;
}
