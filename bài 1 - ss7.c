#include<stdio.h>
void main(){
	int a,b;
	printf("Nhap vao so a: \n");
	scanf("%d",&a);
	printf("Nhap vao so b: \n");
	scanf("%d",&b);
	if(b==0){
		printf("Xin nhap lai gia tri \n");
		scanf("%d",&b);
	}
	if(a%b==0){
		printf("%d chia het cho %d \n",a,b);
	}
	else printf("%d khong chia het cho %d \n",a,b);
}
