#include<stdio.h>
void main(){
	int A,B;
	printf("Nhap so A : \n");
	scanf("%d",&A);
	printf("Nhap so B : \n");
	scanf("%d",&B);
	if(A-B==A||B-A==A || A-B==B ||B-A==B){
		printf("Hieu bang gia tri da nhap \n");
	}
	else printf("Hieu khong bang gia tri da nhap \n");
}
