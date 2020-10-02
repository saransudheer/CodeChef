#include <bits/stdc++.h>
using namespace std;
int solve(int a[],int n,int k){
	int rem=0, solved=0, day=0, count=1;
	for(int i=0; i<n; i++){
		solved=abs(a[i]-k);
		if(solved<k && rem>0){
			rem=rem-solved;
			++count;
			break;
		}else if(solved>=k && rem>0){
			rem=rem+solved;
			++count;
			break;
		}else if(solved>=k && rem==0){
			rem=rem+solved;
			++count;
			break;			
		}
		else if(solved==k && rem==0){
			day=count+1;
		}
		else if(solved<k && rem==0){
			day=count;
		}
	}
		
	return day;
}
		
		
int main()
{
	int t;
	scanf("%d",&t);
	int ans[t];
	int n,k;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	ans[0]=solve(a,n,k);
	
	for(int i=0; i<t; i++){
		cout<<ans[i]<<endl;
	}
	return 0;
}
		
		
