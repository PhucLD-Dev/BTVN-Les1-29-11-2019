#include<stdio.h>
int main(){
	int n;
	printf("nhap n so :\n");
	scanf("%d",&n);
	int p=1; 
	for(int i=1;i<=n;i++)
	 {p=p*i;} 
	 printf("giai thua cua %d a : %d",n,p) ;
} 
