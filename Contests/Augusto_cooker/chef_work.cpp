#include <iostream>
using namespace std; 
int countit(int a[],int n,int k){
	int count=0;
	int trip=1;
	for(int i=0; i<n; i++){
		if(a[i]>k){
			return -1;				
		}
		if(count+a[i]<=k){
				count += a[i];
			}
		else{
			trip++;
			count=0;			
			}
		}
	return trip;
}
int main(){
	int a;
	cin>>a;
	int weights[a];
	
	for(int i=0; i<a; i++){
		int n,k;
		cin>>n>>k;
		
		for(int j=0; j<n; j++){
			cin>>weights[j];
		}
		cout<<countit(weights,n,k);
		
	}
	
	
	return 0;
}
	
	
