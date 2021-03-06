//============================================================================
// Author       : LAM PHAN VIET
// Online Judge : LightOJ
// Problem Name : 1133 - Array Simulation 
// Time Limit   : 0.500s
// Description  : beginner
//============================================================================
#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define inpFile(f) freopen(f, "r", stdin)
#define outFile(f) freopen(f, "w", stdout)
#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define REP(i, n) for (int i = 0; i < n; i++)
#define foreach(it, ar) for ( typeof(ar.begin()) it = ar.begin(); it != ar.end(); it++ )
#define fill(ar, val) memset(ar, val, sizeof(ar))
#define PI 3.1415926535897932385
#define uint64 unsigned long long
#define int64 long long
#define all(ar) ar.begin(), ar.end()
#define pb push_back
#define ff first
#define ss second
#define bit(n) (1<<(n))
#define Last(i) ( i & -i )
#define INF 500000000
#define maxN 110
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

int n, m, a[maxN];

int main() {
    #ifndef ONLINE_JUDGE
        inpFile("test.inp"); outFile("test.out");
    #endif
    char ch;
    int caseNo, cases = 0, x, y;
    for (scanf("%d", &caseNo); caseNo--; ) {
        scanf("%d %d", &n, &m);
        REP(i, n) scanf("%d", &a[i]);
        printf("Case %d:\n", ++cases);
        while (m--) {
            scanf(" %c ", &ch);
            switch (ch) {
                case 'S': {
                    scanf("%d", &x);
                    REP(i, n) a[i] += x;
                } break;
                case 'M': {
                    scanf("%d", &x);
                    REP(i, n) a[i] *= x;
                } break;
                case 'D': {
                    scanf("%d", &x);
                    REP(i, n) a[i] /= x;
                } break;
                case 'R': {
                    reverse(a, a + n);
                } break;
                case 'P': {
                    scanf("%d %d", &x, &y);
                    swap(a[x], a[y]);
                } break;
            }
        }
        REP(i, n) {
            if (i) putchar(' ');
            printf("%d", a[i]);
        }
        puts("");
    }
    return 0;
}

// lamphanviet@gmail.com - 2011
