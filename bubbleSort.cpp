//Leer un numero entero, con un ciclo for recibir todos los numeros de entrada
#include "bits/stdc++.h"

using namespace std;

int main(){
	
	int n=90001;
	int a[n];
	//cin >> n;
	//Llenando arreglo
	for(int i=0; i<n; i++){
		cin >> a[i];
	}

	for(int i=0; i<n; i++){
		//cout << a[i] << "\n";
		for(int j=0; j<(n-1); j++){
			if(a[j]>a[j+1]){
				int aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
			}
		}
	}

	for(int i=0; i<n; i++){
		cout << a[i] << "\n";
	}
	
	return 0;
}
