#include <stdio.h>

int main()
{
    printf("----------Main Menu----------\n");
    printf("1. Add books\n");
    printf("2. Display book information\n");
    printf("3. Search Books (Book Status)\n");
    printf("4. Exit");

    int a1;
    printf("\nEnter your choice: ");
    scanf("%d", &a1);
    printf("\n\n");

    if (a1 == 1)
    {
        printf("You can add book information\n\n");
        printf("Choose the category : \n\n");
        printf("1. Computer Science\n");
        printf("2. Electronics\n");
        printf("3. Mechanical\n");

        int a2;
        printf("Choose a Category : ");
        scanf("%d", &a2);

        printf("\n\n");

        if (a2 == 1)
        {
            printf("You have choose Computer Science category\n\n");

            printf("1. Introduction to C\n");
            printf("2. Introduction to Python\n");
            printf("3. Introduction to R programming\n\n");

            int a3;
            printf("Choose a book : ");
            scanf("%d", &a3);
            printf("\n\n");

            if (a3 == 1)
            {
                printf("You have choose Introduction to C\n\n");

                char book_namea[50];
                char author_namea[50];
                int pagesa;
                int pricea;

                printf("Book name : ");
                scanf("%s", &book_namea);

                printf("Author name : ");
                scanf("%s", &author_namea);

                printf("Pages : ");
                scanf("%d", &pagesa);

                printf("Price : ");
                scanf("%d", &pricea);
                printf("\n\n");
            }
            else if (a3 == 2)
            {
                printf("You have choose Introduction to Python\n\n");

                char book_nameb[50];
                char author_nameb[50];
                int pagesb;
                int priceb;

                printf("Book name : ");
                scanf("%s", &book_nameb);

                printf("Author name : ");
                scanf("%s", &author_nameb);

                printf("Pages : ");
                scanf("%d", &pagesb);

                printf("Price : ");
                scanf("%d", &priceb);
                printf("\n\n");
            }
            else if (a3 == 3)
            {
                printf("You have choose introduction to R programming\n\n");

                char book_namec[50];
                char author_namec[50];
                int pagesc;
                int pricec;

                printf("Book name : ");
                scanf("%s", &book_namec);

                printf("Author name : ");
                scanf("%s", &author_namec);

                printf("Pages : ");
                scanf("%d", &pagesc);

                printf("Price : ");
                scanf("%d", &pricec);
                printf("\n\n");
            }
        }
        else if (a2 == 2)
        {
            printf("You have choose Electronics category\n\n");

            printf("1. Practical Electronics for Investors\n");
            printf("2. The art of electronics\n");
            printf("3. Fundamental of digital circuits\n");

            int a4;
            printf("Choose a book : ");
            scanf("%d", &a4);

            printf("\n\n");

            if (a4 == 1)
            {
                printf("You have choose Practical electronics for Investors book\n\n");

                char book_named[50];
                char author_named[50];
                int pagesd;
                int priced;

                printf("Book name : ");
                scanf("%s", &book_named);

                printf("Author name : ");
                scanf("%s", &author_named);

                printf("Pages : ");
                scanf("%d", &pagesd);

                printf("Price : ");
                scanf("%d", &priced);
                printf("\n\n");
            }
            else if (a4 == 2)
            {
                printf("You have choose The art of electronics book\n\n");

                char book_namee[50];
                char author_namee[50];
                int pagese;
                int pricee;

                printf("Book name : ");
                scanf("%s", &book_namee);

                printf("Author name : ");
                scanf("%s", &author_namee);

                printf("Pages : ");
                scanf("%d", &pagese);

                printf("Price : ");
                scanf("%d", &pricee);
                printf("\n\n");
            }
            else if (a4 == 3)
            {
                printf("You have choose Fundamental of digital circuits book\n\n");

                char book_namef[50];
                char author_namef[50];
                int pagesf;
                int pricef;

                printf("Book name : ");
                scanf("%s", &book_namef);

                printf("Author name : ");
                scanf("%s", &author_namef);

                printf("Pages : ");
                scanf("%d", &pagesf);

                printf("Price : ");
                scanf("%d", &pricef);
                printf("\n\n");
            }
        }
        else if (a2 == 3)
        {
            printf("You have choose Mechanical Category\n\n");

            printf("1. Introduction to Autocad\n");
            printf("2. Fundamental of Thermodynamics\n");
            printf("3. Mechanical Engineering\n\n");

            int a5;

            printf("Choose a book : ");
            scanf("%d", &a5);

            printf("\n\n");

            if (a5 == 1)
            {
                printf("You have choose Introduction to Autocad book\n\n");

                char book_nameg[50];
                char author_nameg[50];
                int pagesg;
                int priceg;

                printf("Book name : ");
                scanf("%s", &book_nameg);

                printf("Author name : ");
                scanf("%s", &author_nameg);

                printf("Pages : ");
                scanf("%d", &pagesg);
                ;

                printf("Price : ");
                scanf("%d", &priceg);
                printf("\n\n");
            }
            else if (a5 == 2)
            {
                printf("You have choose Fundamental of Thermodynamics book\n\n");

                char book_nameh[50];
                char author_nameh[50];
                int pagesh;
                int priceh;

                printf("Book name : ");
                scanf("%s", &book_nameh);

                printf("Author name : ");
                scanf("%s", &author_nameh);

                printf("Pages : ");
                scanf("%d", &pagesh);

                printf("Price : ");
                scanf("%d", &priceh);
                printf("\n\n");
            }
            else if (a5 == 3)
            {
                printf("You have choose Mechanical Engineering book\n\n");

                char book_namei[50];
                char author_namei[50];
                int pagesi;
                int pricei;

                printf("Book name : ");
                scanf("%s", &book_namei);

                printf("Author name : ");
                scanf("%s", &author_namei);

                printf("Pages : ");
                scanf("%d", &pagesi);
                ;

                printf("Price : ");
                scanf("%d", &pricei);
                printf("\n\n");
            }
        }
    }
    else if (a1 == 3)
    {
        printf("You can search the book (Book Status)\n\n");

        printf("Press the code : 121 for Introduction to C\n");
        printf("Press the code : 122 for Introduction to Python\n");
        printf("Press the code : 123 for Introduction to R programming\n");
        printf("Press the code : 124 for Practical Electronics for Investors\n");
        printf("Press the code : 125 for The art of electronics\n");
        printf("Press the code : 126 for Fundamental of digital circuits\n");
        printf("Press the code : 127 for Introduction to Autocad\n");
        printf("Press the code : 128 for Fundamental of Thermodynamics\n");
        printf("Press the code : 129 for Mechanical Engineering\n\n");

        int a6;
        printf("Enter the book to search (Use The Code) : ");
        scanf("%d", &a6);
        printf("\n");

        switch (a6)
        {
            case 121:
            printf("Book Name : Introduction to C\n");
            printf("Book status : 2 copies left");
            break;

            case 122:
            printf("Book Name : Introduction to Python\n");
            printf("Book status : Out of stock");
            break;

            case 123:
            printf("Book Name : Introduction to R programming\n");
            printf("Book status : 40 copies left");
            break;

            case 124:
            printf("Book Name : Practical Electronics for Investors\n");
            printf("Book status : 3 copies left");
            break;

            case 125:
            printf("Book Name : The art of electronics\n");
            printf("Book status : 31 copies left");
            break;

            case 126:
            printf("Book Name : Fundamental of digital circuits\n");
            printf("Book status : 7 copies left");
            break;

            case 127:
            printf("Book Name : Introduction to Autocad\n");
            printf("Book status : 32 copies left");
            break;

            case 128:
            printf("Book Name : Fundamental of Thermodynamics\n");
            printf("Book status : 56 copies left");
            break;

            case 129:
            printf("Book Name : 129 for Mechanical Engineering\n");
            printf("Book status : 20 copies left");
            break;
        }
    }
    else if (a1 == 4)
    {
        printf("The Library is closed\n");
        printf("Have a nice day");
    }
}