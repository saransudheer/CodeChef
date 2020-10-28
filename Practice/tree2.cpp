#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		set<int> s;
		for(int i = 0;i < n;i++) {
			int num;
			cin >> num;
			if(num > 0)
				s.insert(num);
		}
		cout << s.size() << "\n";
	}
	return 0;
}
