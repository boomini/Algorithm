/*�ϳ��� ������ �� �ѹ��� Ǯ���� �ϴ� �˰����� 
 �Ǻ���ġ ������ ���� ���� ����� ����ϸ� �ذ��� ������ �ٽ� �ݺ��ؾ��ϹǷ� ��ȿ����
 
 ���̳��� ���α׷����� ������ ���� �Ͽ� ����� �� �ִ�. 
	1. ū ������ ���� ������ ���� �� �ִ�.
	2. ���� �������� ���� ������ �װ��� �����ϴ� ū ���������� �����ϴ�.
	
	
	�޸������̼�(memoization)�� ���ȴٴ� ���� ���� ������ �ٸ���.	
	
�ð����⵵ o(n)	
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