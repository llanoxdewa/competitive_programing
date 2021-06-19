#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>
#include <sstream>
using namespace std;

// debugging
// #include "testing_unit/debug.h"


// shorcut data type
#define endl "\n"
#define ll long long
#define ull unsigned long long


void solve(){
    int x1,x2;
    int v1,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if(v1 < v2){
        cout << "NO" << endl;
        return;
    }
    while(x1 < x2){
        x1 += v1;
        x2 += v2;
    }
    cout << ((x1 == x2)? "YES" : "NO") << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("dbg.txt","w",stderr);
   	#endif
    solve();
	return 0;
}
