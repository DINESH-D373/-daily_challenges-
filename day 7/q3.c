#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	if(a>=90 && a<=100)
	printf("A");
	else if(a>=80 && a<=89)
	printf("B");
	else if(a>=70 && a<79)
	printf("C");
	else
	printf("Fail");
	return 0;
}
