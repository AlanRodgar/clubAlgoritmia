#include "bits/stdc++.h"

#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
#define LEN 100002

using namespace std;
unsigned short int chapas[LEN];
unsigned short int llaves[LEN];

int i, n, aux;

int main(){
	optimizar_io
	cin >> n;
	for(i=1; i<=n; i++){
		cin >> aux;
		chapas[aux]=i;
	}
	cin >> n;
	for(i=0; i<n; i++){
		cin >> aux;
		if(chapas[aux]!=0)
			cout << chapas[aux] <<" ";
		else
			cout << 0 << " ";	
	}
	return 0;
}
