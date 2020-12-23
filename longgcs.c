#include <stdio.h>

int lgs(char x[],char y[],int count,int i,int j){
	
	if (x[i] == '\0' || y[j] == '\0'){
		return count;
	}
	if (x[i]==y[j]){
		return lgs(x,y,count+1,i+1,j+1);
	}
	int a,b;
	a = lgs(x,y,count,i+1,j);
	b = lgs(x,y,count,i,j+1);
	if(a>b) return a;
	return b;
	
	
}

 int main(){
	 char a[505];
	 char b[505];
	 scanf("%s",a);
	 scanf("%s",b);
	 int count = lgs(a,b,0,0,0);
	 printf("%d",count);
	 return 0;
	 
	 
	 
	 
 }
