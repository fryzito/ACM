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
#define S(x)scanf("%d\n",&x)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
map<int,int> ids;
int main(){
  int n;
  REP(i,31){
    ids[(1<<i)]=i;
  }
  // REP(i,31){
  //   printf(" %d",ids[i]);
  // }
  putchar('\n');
  int A[10]={1,2,3,4,5,6,7,8,9,0};
  S(n);
  int mask;
  bool goal=0;
  for(int i=0;i<(1<<n);i++) {
    mask=i;
    int sum=0;
    while(mask){
      int j=mask&(-mask);
      sum+=A[ids[j]];
      // dbg2(j,ids[j]);
      mask-=j;
    }
    if(sum==232)
      goal=true;
  }
  printf("%s\n",goal?"Existe":"No existe");
  
  return 0;	
}
