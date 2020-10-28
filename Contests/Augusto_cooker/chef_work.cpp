// Certified Competitive Programmer Saran Sudheer.............
// Codechef King
// Second only to Gennady Korotkavich
// Master of all
// Never gives up!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <bits/stdc++.h>
using namespace std;

void solveTestCase() {
	int N, K;
	cin >> N >> K;
	vector<int> weight(N);
	for(int i = 0; i < N; i ++) {
		cin >> weight[i];
	}
	for(int i = 0; i < N; i ++) {
		if(weight[i] > K) { // If there is a box with weight higher than K, then chef can't lift it so answer is impossible or -1.
			cout << -1 << '\n';
			return;
		}
	}
	int trips = 0, id = 0;
	while(id < N) {
		trips ++;
		int pickedUp = 0;
		while((id < N) && (weight[id]+pickedUp <= K)) { // try to go as right as you can.
			pickedUp += weight[id];
			id ++;
		}
	}
	cout << trips << '\n';
}

int main() {
	ios_base::sync_with_stdio(0); // fast IO
	cin.tie(0);
	cout.tie(0);

	int testCase;
	cin >> testCase;
	for(int i = 1; i <= testCase; i ++) {
		solveTestCase();
	}

	return 0;
}
