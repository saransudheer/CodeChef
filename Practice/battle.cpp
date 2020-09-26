#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	int count=0,count1=0;
	while(n--){
	    cin>>a[n];
	    if(a[n]%2==0){
	        count++;
	    }else{
	        count1++;
	    }
	}
	if(count>count1){
	    cout<<"READY FOR BATTLE";
	}else{
	    cout<<"NOT READY";
	}
	return 0;
}
