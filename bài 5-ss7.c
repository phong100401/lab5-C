#include<stdio.h>
void main(){
	int x;
	printf("nhap diem : \n");
	scanf("%d",&x);
	if(x>=75 && x<100){
		printf("Loai A \n");
	}else
	if(x>=60 && x<75 ){
		printf("Loai B \n");
	}else
	if(x<60 && x>=45){
		printf("Loai C \n");
	}else
	if(x<45 && x>=35){
		printf("Loai D \n");
	}
	else printf("Loai E \n");
}
