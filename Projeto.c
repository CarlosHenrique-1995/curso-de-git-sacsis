#include <stdio.h>

int soma(int a, int b)
{
	int soma_num = a+ b;
	return soma_num;
}

int main(){
	
	printf("soma:%d", soma(5,5));
	return 0;
}
