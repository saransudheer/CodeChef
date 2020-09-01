#include <iostream>
using namespace std;
int main(){
	int temp=0,n,c;
	cin>>n;
	
	int d[n];
	for(int i=0; i<n; i++)
	{
		int a;
		cin>>a;
		c=0;
		int b[8];
		while(a!=0){
						
			temp=a%10;
			b[c]=temp;
			a=a/10;
			temp=0;
			c++;
		}
		d[i]=b[0]+b[c-1];		
	}
	for(int i=0; i<n; i++){
		cout<<d[i]<<endl;
	}
	return 0;
}
		
