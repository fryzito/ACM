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
#define SC(x)scanf("%d",&x)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 100005
using namespace std;
int A[100];
int main(){
  int nc,n;S(nc);
  while(nc--){
    S(n);
    int cont=0;
    REP(i,n){
      SC(A[i]);
      if(A[i]==1)
	cont++;
    }
    if(cont==n) {
      if(n&1) {
	printf("Brother\n");
      } else {
	printf("John\n");
      }
    } else {
      REPN(i,1,n){
	A[0]^=A[i];
      }
      if(A[0]==0) {
	printf("Brother\n");
      } else {
	printf("John\n");
      }
    }
  }
  return 0;
}
