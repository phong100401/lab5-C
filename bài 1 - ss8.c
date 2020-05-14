#include<stdio.h>
void main(){
	int x;
	int y;
	printf("nhap x : \n");
	scanf("%d",&x);
	printf("nhap y : \n");
	scanf("%d",&y);
	if(x<2000 || x>3000){
		printf("x : %d \n",x);
	}else
	if(y<500 && y>100){
		printf("y: %d \n",y);
	}
}
