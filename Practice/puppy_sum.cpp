#include <iostream>
using namespace std;
long long int sum(int a, int b){
    long long ans=b;
    while(a--){
        ans=((ans*(ans+1))/2);
    }
    return ans;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b;
	    cin>>a>>b;
	    cout<<sum(a,b)<<endl;
	}
	return 0;
}
