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
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x);
#define f first
#define s second
#define MAXN 11
using namespace std;
int A[MAXN],n,nc,m,aux;
void flip(int inic){
  int med = (inic+n+1)>>1;
  int end=n-1;
  REPN(i,inic,med){
    swap(A[i],A[end]);
    end--;
  }
  return;
}

int main(){
  S(nc);
  while(nc--){
    SC(n);
    REP(i,n){
      SC(A[i]);
    }
    vector<int> v(A,A+n);
    sort(RALL(v));
    int cont=0;
    REP(i,v.size()){
      
      // REP(k,n){
      // 	dbg2(A[k],v[k]);
      // }
      // putchar('\n');
      
      if(v[i]==A[i])
	continue;
      else{
	if(v[i]==A[n-1]) {
	  cont++;
	  flip(i);
	}else {
	  // buscar
	  int id;
	  REPN(j,i+1,n){
	    if(v[i]==A[j]){
	      id=j;
	      break;
	    }
	  }
	  flip(id);
	  flip(i);
	  cont+=2;
	}
      }
    }
    P(cont);

  }
  return 0;	
}
