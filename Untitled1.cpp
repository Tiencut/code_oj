#include<bits/stdc++.h>
int main()
{
	/*
	printf("%2d\n",1234);
	printf("%6.3f\n",123.456);
	printf("12.6e\n",123.456);
	printf("%12.3e\n", 123.456);*/
//	printf("%-3d%-10s%-5.2f%-3c",5,"Hello",7.5,'g');
//	scanf("%d",&a);
//	printf("%d",a);
	int a; float x;
	char ch; char str[30];
	printf("nhap so nguyen: "); scanf("%d",&a);
	printf("nhap so thuc: "); scanf("%f",&x);
	printf("\n nhap so ki tu: "); 
	fflush(stdin); scanf("%c", &ch);
	printf("\n nhap vao xau ki tu: ");
	fflush(stdin); scanf("&s",str);
	// hien thi du lieu nhap vao
	printf("\n nhung du lieu vua nhap vao: ");
	printf("so nguyen: %d",a);
	printf("\n so thuc: %5.2f ",x);
	printf("\n ky tu: %c",ch);
	printf("\n xau ki tu: %s", str);
	
}