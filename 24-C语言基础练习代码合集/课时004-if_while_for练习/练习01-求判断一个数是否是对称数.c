#include <stdio.h>
int main(){
	int i;
	scanf("%d", &i);
	
	if(i>=1 && i<10){
		printf("%d不是一个对称数\n", i);
	}
	else if(i>=10 && i<100){
		if(i/10==i%10){
			printf("%d是一个对称数\n", i);
		}
		else{
			printf("%d不是一个对称数\n", i);
		}
	}
	else if(i>=100 && i<1000){
		if(i/100==i%10){
			printf("%d是一个对称数\n", i);
		}
		else{
			printf("%d不是一个对称数\n", i);
		}
	}
	else if(i>=1000 && i<=10000){
		if(i/1000==i%10 && i%1000/100==i%100/10){
			printf("%d是一个对称数\n", i);
		}
		else{
			printf("%d不是一个对称数\n", i);
		}
	}
	
	return 0;
}
