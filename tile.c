#include<stdio.h>
#include<stdlib.h>
int maxNum = 1000000000;
int mem[20000];
int min(int a,int b){
	return (a<b) ? a:b;
}
int main() {
	for (int i=0;i<20000;i++){
		mem[i] = maxNum;
	}
	mem[0] = 0;
	int n,m,x;
	scanf("%d %d",&n,&m);
	for (int i=0;i<n;i++){
		scanf("%d",&x);
		for(int k=m;k>=0;k--) {
			int max = maxNum;
			for(int j=1;j<=100;j++) {
				int y=abs(x-j);
				y*=y;
				int z=k-j*j;
				if(z>=0){
					max = min(max,mem[z]+y);
				}
			}
			mem[k] = max;
		}
	}
	printf("%d",mem[m]==maxNum ? -1:mem[m]);
}
	
		



 
