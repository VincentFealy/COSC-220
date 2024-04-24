#ifndef BOOKINFO_CLASS
#define BOOKINFO_CLASS
#include <iostream>
#include "string.h"
using namespace std;

        class BookInfo{

                public:
                        string bookName;
                        string bookAuthor;
                        string bookDate;
                        bool bookRenew;

                        BookInfo* next;

                        BookInfo();
                        BookInfo(string, string, string, bool);

                        void printBook();
                        void deleteBook(string);
        };
#endif