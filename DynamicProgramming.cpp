/*하나의 문제는 단 한번만 풀도록 하는 알고리즘 
 피보나치 수열은 분할 정복 기법을 사용하면 해결한 문제를 다시 반복해야하므로 비효율적
 
 다이나믹 프로그래밍은 다음의 가정 하에 사용할 수 있다. 
	1. 큰 문제를 작은 문제로 나눌 수 있다.
	2. 작은 문제에서 구한 정답은 그것을 포함하는 큰 문제에서도 동일하다.
	
	
	메모이제이션(memoization)이 사용된다는 점에 분할 정복과 다르다.	
	
시간복잡도 o(n)	
	*/
	
#include <stdio.h>

int d[100];

int dp(int x){
	if(x==1) return 1;
	if(x==2) return 2;
	if(d[x] != 0 ) return d[x];
	return d[x] = dp(x-1) + dp(x-2);
} 

int main(void){
	printf("%d", dp(30));
}
