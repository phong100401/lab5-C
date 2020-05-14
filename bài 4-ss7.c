#include<stdio.h>
void main(){
	int luong;
	char loai;
	printf("Nhap so luong : \n");
	scanf("%d",&luong);
	printf("Nhap loai cap : \n");
	scanf("%c",&loai);
	loai = getchar();
	if(loai == 'A'){
		printf("luong cua ban la : %d \n",luong+300);
	}
	else if(loai == 'B'){
		printf("luong cua ban : %d \n",luong+250);
	}
	else printf("luong cua ban la : %d \n",luong+100);
}
