#include<stdio.h>
int max(int a,int b){
	return (a>b) ? a:b;
}

int maxSubArraySum(int a[],int size){
	int max_so_far = 0 , max_ending_here = 0;
	for (int i =0;i< size;i++){
		max_ending_here = max_ending_here +a[i];
		if (max_ending_here < 0)
			max_ending_here = 0;
		else if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;
	}
	return max_so_far;
}

int maxSubArraySum2(int a[],int size){
	int max_so_far = a[0];
	int curr_max = a[0];
	
	for (int i = 1;i < size;i++){
		curr_max = max(a[i], curr_max+a[i]);
		max_so_far = max(max_so_far,curr_max);
	}
	return max_so_far;
}

int main(){
int n;

scanf("%d",&n);
int a[n];
for (int i=0 ; i<n ; i++) {
	scanf("%d",&a[i]);
	}

int ans = maxSubArraySum2(a,n);
printf("%d",ans);
return 0;
}
