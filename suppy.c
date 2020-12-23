
#include<stdio.h>
int main(){
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	//int store[m];
	//int plant[n];
	int day[k];
	int d,e,l;
	for(int i=0;i<k;i++){
		scanf("%d %d %d",&d,&e,&l);
		day[d-1]=e*l;
	}
	/*for(int i=0;i<k;i++){
		printf("%d\n", day[i]);
	}*/
	int product = 0;
	for(int i = 0;i<k;i++){
		if(day[i]==0){
			product++;
			printf("%d\n",0);
		}
		else{
			if(product>0){
				printf("%d\n",day[i]);
				product--;
			}
			else printf("%d\n",0);
		}
	}


}

