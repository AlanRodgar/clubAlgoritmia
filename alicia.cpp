#include "bits/stdc++.h"

using namespace std;
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);

int chapas[100050];
int llaves[100050];

int main(){
	optimizar_io
	int n, m;
	cin >> n;
	//int chapas[n];
	for(int i=0; i<n; i++){
		cin >> chapas[i];
	}
	cin >> m;
	//int llaves[m];
	for(int i=0; i<m; i++){
		cin >> llaves[i];
		if(llaves[i]<chapas[n-1]){
			for(int j=0; j<n; j++){
				if(chapas[j]<=llaves[i]){
					if(llaves[i]==chapas[j]){
						cout << j+1 <<" ";
						break;
					}
				//if(j==(n-1))
					//cout << 0 << " ";
				}
				else{
					cout << 0 << " ";
					break;
				}
			}
		}
	}	
	return 0;
}
