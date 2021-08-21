#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define e 2.718281828

int main(){
	double x;
	int n;
	again:
	printf("Enter a real number x and an integer number n(n>5): ");		scanf("%lf%d",&x,&n);
	while(n <= 5){
		printf("Please re-enter the integer number n: ");	scanf("%d",&n);
	}
	//S
	printf("\nS=1.2.3 + 2.3.4+...+(n-2)(n-1)n");
	int i,j;
	int s;
	
	for(i = 3;i <= n;i++){
		s += (i-2)*(i-1)*i;
	}
	printf("\nS=%d",s);
	//S1
	printf("\n\nS1=1+ x/1! - x^2/2! +...+ (-1)^(n+1).x^n/n!");
	double s1 = 1;
	long long int giaithua;
	for(i = 1;i <= n;i++){
		giaithua = 1;
		for(j = i;j >= 1;j--){		//n!=
			giaithua *= j;
		}
		s1 += (pow(-1,i+1)*pow(x,i) / giaithua);
	}
	printf("\nS1=%lf",s1);
	
	//S2.
	printf("\n\nS2=e^x + sin2x - (x+1)/2 + (x+2)/3+...+(-1)^n * (x+n)/(n+1)\n");
	double s2 = pow(e,x)+sin(2*x);
	for(i = 1;i <= n;i++){
		s2 += pow(-1,i)*(x+i)/(i+1);
	}
	printf("S2=%f",s2);
	
	//S3.
	printf("\n\nS3= 1 + x/(1!) + x^3/(3!) +...+ (x^(2n+1))/(2n+1)!");
	double s3 = 1;
	giaithua = 1;
	for(i = 0;i <= n;i++){
		giaithua=1;
		for(j = (2*i+1) ;j >= 1;j--){		//n!=
			giaithua *= j;
		}
		s3 += pow(x,2*i + 1) / giaithua;
	}
	printf("\nS3=%f",s3);
	return 0;
}
