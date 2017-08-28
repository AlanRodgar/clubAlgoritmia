#include "bits/stdc++.h"
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int n, m;

int main(){
	optimizar_io
	cin >> n >> m;
	n+=m;
	if(n<0) cout << (n*=-1);
	else cout << n;
	return 0;
}
