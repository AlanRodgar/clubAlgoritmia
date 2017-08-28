#include "bits/stdc++.h"
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;

unsigned int a, b, n, r=0;

int main(){
	optimizar_io
	cin>>n;
	while(n--){
		cin >> a >> b;
		r+=(a*b);
	}
	cout<<r<<endl;
	return 0;
}
