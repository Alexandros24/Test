#include <stdio.h>
#include <stdlib.h>
#pragma pack(1)
/*
a store sells only 2 things: books and clothes, so if we create a struct have the vars wioll have no usage(it depends 
if we want to store a book or clothes)
*/

struct store
{
    double price;
    char *title;
    char *author;
    int num_pages;
    int color;
    int size;
    char *design;
};
//THIS will Use 44 bytes of memory without padding

struct newStore
{
    double price;
    union {
        struct {
            char *title;
            char *author;
            int num_pages;
        } book;
        struct {
            int color;
            int size;
            char *design;
        } clothes;
    } item;
};


int main()
{
    struct store y;
    struct newStore s;
    s.item.book.title = "peos";
    s.item.book.author = "afds";
    s.item.book.num_pages = 3912;
    printf("%s ", s.item.book.title);
    printf("%d %d %d", sizeof(y), sizeof(s), sizeof(s.item.book.author)); //last one is the size wich pointers take
}

