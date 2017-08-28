#include "bits/stdc++.h"

using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
int n, m, aux, ax2=0;
int main(){
	optimizar_io
	cin >> n >> m;
	while(n--){
		cin >> aux;
		if(aux == m) ax2++;
	}
	cout << ax2;
	return 0;
}
