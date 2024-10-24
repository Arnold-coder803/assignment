/*
Name:Litunya Arnold M Amolo
Reg No:CT101/G/23808/24
*/
//c structures
#include <stdio.h>
#include <string.h>
//defining a structure named book
struct Book
{
	char author[20];
	char title[20];
	char ISBN[10];
	int publication;
	float price;
}book1;
int main()
{
	//declaration and initiallization
	strcpy(book1.title,"Introduction to C Programming");
	strcpy(book1.author,"John Smith");
	strcpy(book1.ISBN,"12564");
	book1.publication=2022;
	book1.price=49.99;
	
	printf("book1.title:%s\n",book1.title);
	printf("book1.author:%s\n",book1.author);
	printf("book1.publication:%d\n",book1.publication);
	printf("book1.price:%.2f\n",book1.price);
	printf("book1.ISBN:%s\n",book1.ISBN);
	return 0;
}