#include "bits/stdc++.h"
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

using namespace std;
unsigned short int a, aux=0, n=3;

int main(){
	optimizar_io
	while(n--){
		cin >> a;
		if(aux<a) aux = a;
	}
	cout << aux;
	return 0;
}
