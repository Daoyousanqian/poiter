#include<stdio.h>


int x = 10;
int y = 20;
int a = 1;
int b = 2;

void swap(int m, int n){

	int temp;
	temp = a;
	a = b;
	b = temp;

}

void swapp(int *m, int *n){

	int *temp;
	temp = *m;
	*m = *n;
	*n = temp;

}

int main(){

	printf("here the is number x y : %d %d\n", x,y);
	swap(x,y);
	printf("here the is number x y : %d %d\n", x,y);

	printf("here the is number x y : %d %d\n", a,b);
	swapp(&a,&b);
	printf("here the is number x y : %d %d\n", a,b);


	return 0;

}
