#include<stdio.h>
int main() {
	int n,m; // numarr , question
	scanf("%d %d",&n,&m);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int quest;
	for(int i=0;i<m;i++){
		scanf("%d",&quest);
		int j=0;
		while(j<n){
			if(arr[j]+arr[i]==quest){
				printf("YES\n");
				break;
			}
			j++;
		} if (j==n){
			printf("NO\n");
		}
	
}
	return 0;
}
