// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main(){
	int s, t ;
	cin >> s >> t;
	int cnt =0;
	for(int i = 0;i<=s;i++){
		for(int j = 0;i+j<=s;j++){
			for(int k = 0;i+j+k<=s;k++){
				if(i*j*k <= t){
					cnt++ ;
				}
			}
		}
	}
	cout << cnt << endl ;
}