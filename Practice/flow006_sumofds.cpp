#include <iostream>
using namespace std;
int sumofd(int d){
	int sum=0;
	while (d!=0){
		sum = sum + int(d%10);
		d = int(d/10);
	}
	return sum;
}
int main(){
	int n,i,b;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++){
		cin>>b;
		a[i] = sumofd(b);
	}
	for(i=0; i<n; i++){
		cout<<a[i]<<"\n";
	}
	return 0;
}
