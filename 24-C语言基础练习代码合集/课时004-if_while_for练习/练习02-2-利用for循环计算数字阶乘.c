/*
  description:
  利用while或者for循环计算n！的值。
  提示：n！＝1*2*3…*n
  input:
  一个正整数n，1≤n≤10。
  output:
  n！的值。  
 */
#include <stdio.h>
int main(){
	int n,result=1;
	scanf("%d", &n);
	for(n;n>=1 && n<=10;n--){
		result *= n;
	}
	printf("%d\n", result);
	
	
	return 0;
}
