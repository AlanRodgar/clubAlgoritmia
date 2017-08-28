#include "bits/stdc++.h"

using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

short int a, b, aux=0;

int main(){
	optimizar_io
	
	cin >> a;
	while(a--){
		cin >> b;
		if(b>aux) aux=b;
	}
	cout << aux;
	return 0;
}
