#include <stdio.h>
#include <string.h>
 
struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int  book_id;
};
 
int main( ) {

	struct Books CProgramming;
	struct Books BelAmi;
 
	/* book 1 specification */
	strcpy( CProgramming.title, "C Programming");
	strcpy( CProgramming.author, "Nuha Ali"); 
	strcpy( CProgramming.subject, "C Programming Tutorial");
	CProgramming.book_id = 1;

	/* book 2 specification */
	strcpy( BelAmi.title, "Bel Ami");
	strcpy( BelAmi.author, "Maupassant");
	strcpy( BelAmi.subject, "A guy fucking his way to the top");
	BelAmi.book_id = 2;
 
	/* print CProgramming info */
	printf( "Book 1 title : %s\n", CProgramming.title);
	printf( "Book 1 author : %s\n", CProgramming.author);
	printf( "Book 1 subject : %s\n", CProgramming.subject);
	printf( "Book 1 book_id : %d\n", CProgramming.book_id);

	/* print BelAmi info */
	printf( "Book 2 title : %s\n", BelAmi.title);
	printf( "Book 2 author : %s\n", BelAmi.author);
	printf( "Book 2 subject : %s\n", BelAmi.subject);
	printf( "Book 2 book_id : %d\n", BelAmi.book_id);

	return 0;
}