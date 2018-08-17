#include <stdio.h>
#include <string.h>

struct Book 
{
    int isbn;
    char title[50];
    char author[50];
};

struct Point
{
    int x;
    int y;
};

struct Point add(struct Point p1, struct Point p2)
{
    struct Point result;
    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;

    return result;
}

int main()
{
    struct Point p1 = { 1, 1 };
    struct Point p2 = { 2, 2 };

    struct Point res = add(p1, p2);
    printf("result (x, y) : (%d, %d\n", res.x, res.y);

    // Book
    struct Book book1;
    book1.isbn = 12345;
    strcpy(book1.title, "C programming");
    strcpy(book1.author, "Javiel");

    printf("isbn: %d\n", book1.isbn);
    printf("title: %s\n", book1.title);
    printf("author: %s\n", book1.author);

    return 0;
}
