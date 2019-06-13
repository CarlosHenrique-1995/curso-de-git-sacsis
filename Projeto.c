#include <stdio.h>

int soma(int a, int b)
{
	int soma_num = a+ b;
	return soma_num;
}
int subtracao(int a, int b)
{
	int sub_num = a- b;
	return sub_num;
}

int mult(int a, int b)
{
	int mult_num = a*b;
	return mult_num;
}


int main(){
	
	printf("soma:%d", soma(5,5));
	printf("\nsubtracao:%d", subtracao(15,5));
	printf("\nmultiplicacao:%d", mult(15,5));
	return 0;
}
