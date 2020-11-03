#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 0, tc = 0, sm = 0;
	scanf("%d", &n);
	while (n--){
		scanf("%d", &tc);
		int nums[tc];
		for (int i = 0; i < tc; i++){
			scanf("%d", &sm);
			nums[i] = sm;
		
		}
		
		sort(nums, nums+tc);
		printf("%d\n", nums[0]+nums[1]);
		
	}
	
	return 0;
}
