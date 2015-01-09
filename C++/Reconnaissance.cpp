#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cstring>
using namespace std;
#define pb push_back
#define mp make_pair
#define ALL(x) (x).begin(),(x).end()
#define CLR(a,b) memset(a,b,sizeof(a))
#define REPN(x,a,b) for (int x=a; x<b;++x)
#define REP(x,b) REPN(x, 0, b)
#define dbg(x) cout << #x << " = " << x << endl;
#define dbg2(x,y) cout << #x << " = " << x << "  " << #y << " = " << y << endl;
#define MAXN 10000
int main() {
	int d, n, i, j, cont = 0;
	cin >> n >> d;
	int A[n];
	REP(i,n) {
		cin >> A[i];
	}

	REP(i,n) {
		REP(j,n) {
			int h =abs(A[j] - A[i]);
			if (h <= d) {
				cont ++;
			}
		}
	}
	cont = cont - n;
	cout << cont << endl;
}
