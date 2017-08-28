#include "bits/stdc++.h"
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

#define ANS1 "Es Mayor"
#define ANS2 "Es Menor"
using namespace std;


short int a;

int main(){
	optimizar_io
	
	cin >> a;
	if(a>=18) cout << ANS1;
	else cout << ANS2;
	return 0;
}
