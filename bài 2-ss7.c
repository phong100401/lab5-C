#include<stdio.h>
void main(){
	int a,b;
	printf("Nhap so a : \n");
	scanf("%d",&a);
	printf("Nhap so b : \n");
	scanf("%d",&b);
	if(a*b>1000){
		printf("Tich hai so lon hon 1000 \n");
	}
	else if(a*b==1000){
		printf("Tich hai so bang 1000 \n");
	}
	else printf("Tich hai so nho hon 1000");
}
