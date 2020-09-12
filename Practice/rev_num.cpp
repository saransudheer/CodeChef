#include <iostream>
using namespace std;
int revv(int n){
    int rev=0,digit;
    while(n!=0){
        digit=n%10;
        rev=(rev*10)+digit;
        n/=10;
    }
    return rev;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n!=0){
	    int val;
	    cin>>val;
	    cout<<revv(val)<<endl;
	    n--;
	}
	return 0;
}
