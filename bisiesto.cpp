#include "bits/stdc++.h"

using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

short int a, b, aux=0;

int main(){
	optimizar_io
	
	cin >> a;
	if((a%4)==0){
		if((a%100)== 0 && (a%400)!=0) cout << 'N';
		else cout << 'S';
		
	}
	else cout << 'N';
	return 0;
}
