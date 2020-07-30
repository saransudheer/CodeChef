#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a;
	float b;
	cin>>a;
	cin>>b;
	if(0.5+a>b){
	    cout<<b;
	}else if(a%5!=0){
	    cout<<b;
	}else{
	    cout<<((b-a)-0.5);
	}
	
	return 0;
}
