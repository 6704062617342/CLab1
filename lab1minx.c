#include<stdio.h>
int main(){
	int n1,n2;
	scanf("%d %d",&n1,&n2);
	if(n1>n2){
		printf("n1 is greater than n2\n");
		printf("%d",n1-n2);
	}
	else{
	printf("n2 is greater than n1\n");
	printf("%d",n2-n1);	
	}
}
