#include <iostream>

int factorial(int n){ 
    if (n == 0){
		return 1;
	}else{		        
		return n * factorial(n - 1);
	}    
} 
using namespace std;

int main() {
	// your code goes here
	int n,i;
	cin>>n;
	int a[n];
	for(i=0; i<n; i++){
	    cin>>a[i];   
	}
	for(i=0; i<n; i++){
		cout<<factorial(a[i])<<"\n";
	}	
	return 0;
}
