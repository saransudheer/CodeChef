#include <iostream>
#include <cstdio>
using namespace std;
typedef long long int lli;
lli fact(int n){
    lli result=1;
    while(n!=1){
        result*=n;
        n--;
    }
    return result;
}

int main() {
	// your code goes here
	int n;
	scanf("%d",&n);
	while(n!=0){
	    int val;
	    scanf("%d",&val);
	    printf("%lli\n",fact(val));
	    n--;
	}
	return 0;
}
