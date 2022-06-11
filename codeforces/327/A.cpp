#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0), cin.tie(0);
	
	int n;
	cin >> n;
	vector<int> a;
	int ones = 0;
	for(int i = 0; i < n; i++){
		int t;
		cin >> t;
		ones += t;
		a.push_back(t);
	}
	
	if(ones == n){
		cout << n-1 << endl;
		return 0;
	}
	
	int mcnt = 0;
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++){
			for(int k = i; k <= j; k++){
				a[k] = 1-a[k];
			}
			int cnt = 0;
			for(int k = 0; k < n; k++)
				cnt += a[k];
			mcnt = max(mcnt, cnt);
			for(int k = i; k <= j; k++){
				a[k] = 1-a[k];
			}
		}
	}
	
	cout << mcnt << endl;
	
	return 0;
}