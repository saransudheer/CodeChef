// Certified Competitive Programmer Saran Sudheer.............
// Codechef King
// Second only to Gennady Korotkavich
// Master of all
// Never gives up!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

#include <iostream>
using namespace std; 
int countit(int a[],int n,int k){
	int count=0;
	int trip=1;
	
	for(int i=0; i<n; i++){
		if(a[i]>k){
			return -1;				
		}else{
			if(count+a[i]<=k){
				count += a[i];
			}
				
			else{
					trip++;
					count = a[i]; 			
				}
			}
			
		}
	return trip;
}
int main(){
	int a;
	cin>>a;
	int weights[a];
	int b[a];
	for(int i=0; i<a; i++){
		int n,k;
		cin>>n>>k;
		
		for(int j=0; j<n; j++){
			cin>>weights[j];
		}	
		b[i]=countit(weights,n,k);	
	}
	for(int i=0; i<a; i++)
	{
		cout<<b[i]<<endl;
	}
	
	return 0;
}
