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
#define SS(str) scanf("%[^\n]\n",str)
#define S2(x,y)scanf("%d %d\n",&x,&y)
#define SC(x)scanf("%d",&x)
#define SC2(x,y)scanf("%d %d",&x,&y)
#define P(x)printf("%d\n",x)
#define SZ(v) v.size()
#define f first
#define s second
#define MOD 100007
#define MAXN 100005
using namespace std;
string i2s(int x) { stringstream ss; ss << x; return ss.str();}
int s2i(string str) { istringstream ss(str);int nro; ss >> nro; return nro;}

int A[MAXN];
// Tener cuidad con el bucle infinito para eso se aumenta 1 en mid
int bb(int e, int d,int x){
    if(e>=d) return e;
    int m = (e+d+1)/2;
    if(A[m]<x) return bb(m,d,x);
    else return bb(e,m-1,x);

}
// Problema B
bool testa(int m){ // m numero de bolos
    int tenho =k;
    for (int i=0;i<n;i++){
        long long int preciso = m*a[i];
        if(b[i]>= preciso) continue;
        preciso -= b[i];
        if(tenho < preciso) retun false;
        tenho -=preciso;
    }
    return true;
}



int main(){
    int n;
    S(n);
    REP(i,n){
        SC(A[i]);
    }
    scanf("\n");
    sort(A,A+n);
    int q;
    S(q);
    int x;
    while(q--){
        S(x);
        //int id = bb(0,n-1,x);
        int id;
        if(x>=A[n-1]) {
            P(n);
            continue;
        }
        if(binary_search(A,A+n,x)){
            id = lower_bound(A,A+n,x)-A ;
            id++;
        } else {
            id = lower_bound(A,A+n,x)-A;
        }
        P(id);
    }

  return 0;
}
