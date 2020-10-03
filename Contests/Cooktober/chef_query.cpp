#include <bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int k){
	int rem=0,day=0, rum=0, current=0;
	
	for(int i=0; i<n; i++){
	    if(a[i]>k){
	        day+=(a[i]/k)+1;
	    }else if(a[i]-k>=0){
	        current=(rem+a[i])-k;
	        rem+=current;
	        day=i;
	    }else if(a[i]-k<0){
	        if(rem>0){
	            current=k-a[i];
	            rem=rem-current;
	            day=i;
	            if(rem<0){
	                day=i;
	            }
	        }else{
	            day+=1;
	        }
	            
	    }
	    
	}
		
	return day;
}
		
		
int main()
{
	int t;
	scanf("%d",&t);
	int ans[t];
	while(t--){
		int n,k;
		scanf("%d%d",&n,&k);
		int a[n];
		for(int i=0; i<n; i++){
			scanf("%d",&a[i]);
		}
		cout<<solve(a,n,k)<<endl;
	}
	
	return 0;
}
		
		
