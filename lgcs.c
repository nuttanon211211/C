
#include<stdio.h>
#include<string.h>
int main() {
	int n,m;
	char a[1002],b[1002]; 
	int mem[1002][1002];
	scanf("%d %d",&n,&m);
	scanf("%s",a);
	scanf("%s",b);
	for(int i = 0;i< n+1;i++){
		for(int j=0;j<m+1;j++){
			scanf("%d",&mem[i][j]);
		}
	}
	char x[1002] ="";
	for(int i = 0;i<m;i++){
		if (mem[n][m-i]!= mem[n][m-i-1]){
		char y[1002] = b[i];
		x = strcat(x,b[i]);
	}
	}
	printf("%s",x);
	return 0;	
}
