#include <bits/stdc++.h>

#define in freopen( "in.txt", "r", stdin )
#define out freopen( "out.txt", "w", stdout )
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define FOR( i, l, r ) for( int i = l; i < r; ++i )

using namespace std;

using ll = long long;
using ld = long double;

typedef vector <int> vi;
typedef vector <long long> vll;
typedef pair <int, int> pi;

int main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    //in; out;

    int n, m ,k;
    cin >> n >> m >> k;

    vector <int> a(n) , b( m );

    FOR(i, 0, n) cin >> a[i];

    FOR(i, 0, m) cin >> b[i];

    sort( a.begin(), a.end() );
    sort( b.begin(), b.end() );

    int ans = 0 , j = 0;

    FOR( i , 0 , n ){
        while( j < m && b[j] < a[i] - k ) ++j;
        if( j < m && abs( a[i] - b[j] ) <= k  ) ++ans , ++j;
    }


    cout << ans;

    return 0;
}
