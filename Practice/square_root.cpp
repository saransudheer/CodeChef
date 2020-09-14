#include <iostream>
#include <cmath>
using namespace std;
int square(int val)
{
	return int(sqrt(val));
}
int main(){
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		int val;
		cin>>val;
		cout<<square(val)<<endl;
	}
	return 0;
}



