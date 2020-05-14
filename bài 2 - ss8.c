#include<stdio.h>
void main(){
	char x;
	printf("nhap gia tri cua x : \n");
	x=getchar();
	switch(x){
		case 'A':
		case 'a':
			printf("Ada");
			break;
		case 'B':
		case 'b':
			printf("Basic");
			break;
		case 'C':
		case 'c':
			printf("COBOL");
			break;
		case 'D':
		case 'd':
			printf("dBASE III");
			break;
		case 'E':
		case 'e':
			printf("Fortran");
			break;
		case 'P':
		case 'p':
			printf("Pascal");
			break;
		case 'V':
		case 'v':
			printf("Visual C++");
			break;
	}	
}
