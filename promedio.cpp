#include "bits/stdc++.h"
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;

int n, aux;
float p=0;
int main(){
	optimizar_io
	cin >> n;
	for(int i=0; i<n; i++){
		cin>>aux;
		p += aux;
	}
	printf("%.2f",(p/n));
	return 0;
}
