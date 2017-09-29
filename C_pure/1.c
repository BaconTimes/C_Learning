#include <stdio.h>
int main(void){
	int a[10],i;
	for(i = 1; i <= 10; i++){
		a[i] = 0;
	}
	printf("%p --- %p\n", &a[10], &i);
}
