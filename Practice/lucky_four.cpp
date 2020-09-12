#include <iostream>
#include <cstdio>
using namespace std;
int fourty(int val){
    int count=0;
    while(val!=0){
        int n=val%10;
        val/=10;
			if(n==4){
				count ++;
			}
		}
		return count;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++){
		int val;
		scanf("%d",&val);
		printf("%d\n",fourty(val));
	}
	
	return 0;
}
