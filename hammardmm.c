#include<stdio.h>
/*int[][] createHammad(int n){
	if (n==1) {
		int a[1][1];
			a[0][0]=1;
			return a;
	}
}*/
int main() {
	int n;
	scanf("%d",&n);
	
	
	int v[n];
	for(int i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	int d =1;
	while(d<n){
		int l=0;
		int f=0;
		int aC=0;
		while(aC<n/2){
		f=l;
		for(int i=0;i<d;i++){
			int sum = v[i+f]+v[i+f+d];
			int dif = v[i+f] - v[i+f+d];
			v[i+f] =sum;
			v[i+f+d] = dif;
			aC++;
			l = f+i+d;
		}
		l++;
	}
	d*=2;
}
	for(int i=0;i<n;i++){
		printf("%d ",v[i]);
	}
	
}

