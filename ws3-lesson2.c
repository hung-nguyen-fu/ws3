#include<stdio.h>
#include<math.h> 
#include<stdlib.h>

int main(){
	int m=1,n=0;
//	do{
//	printf("Enter 2 numbers m and n(m<n): ");	 scanf("%d%d",&m,&n);
//	}
//	while(n<=m);
//	
	for(;n <= m;){
		printf("Enter m,n:");		scanf("%d%d",&m,&n);
	}
	
	
	int i,j,count;
	int rev;
	printf("Palindromic numbers in the interval [m,n] is: ");

	for(i=m;i<=n;i++){
		for(j=i,count=0;j>0;j/=10){
			count++;
		}
		for(j=i,rev=0,count-=1;j>0;){
			rev+=(j%10)*pow(10,count);
			count--;
			j/=10;
		}
		if(rev==i)
			printf("%d ",i);
	}
	return 0;
}
