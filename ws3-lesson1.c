#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	float n;
	//1.
	do{
		printf("Enter n(n>0)= "); 	scanf("%f",&n);
	}
	while(n < 1 || n - (int)n != 0);

	//2.
	int i,j = n;
	long long int bin = 0;
	for(i = 0,j;j > 0;){
		bin += (j%2) * pow(10,i);
		j /= 2;
		i++;
	}
	printf("%d in binary number format is: %lld\n",(int)n,bin);

	//3.
	printf("\nEnter n= ");	scanf("%f",&n);
	int sum = 0, count = 0;

	for(j = n;j > 0;){
		sum += j%10;
		j /= 10;
		count++;
	}
	printf("\nThe sum of all digits in %d is %d",(int)n,sum);

	//4.
	int m=0;
	j = n;
	for(i=count-1;j>0;){
		m += (j%10) * pow(10,i);
		j /= 10;
		i--;
	}
	printf("\nThe reverse number of %d is %d",(int)n,m);
	

	return 0;
}
