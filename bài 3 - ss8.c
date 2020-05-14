#include<stdio.h>
void main(){
	int x;
	int y;
	int z;
	printf("nhap vao so x : \n");
	scanf("%d",&x);
	printf("nhap vao so y : \n");
	scanf("%d",&y);
	printf("nhap vao so z : \n");
	scanf("%d",&z);
	if(x>y && x>z){
		printf("so lon nhat la : %d \n",x);
	}else
	if(y>x && y>z){
		printf("so lon nhat la : %d \n",y);
	}else
	if(z>x && z>y){
		printf("so lon nhat la : %d \n",z);
	}
	
}
