#include<stdio.h>
int main()
{
    FILE *file;
    char name[35];
    file = fopen("mahafuj.txt","w"); // w=mode overwrite your string and a use that means append new text
    if(file == NULL)
    {
        printf("File is not opened");
    }
    else{
        printf("File opened\n");
        printf("Enter your full name: \n");
        gets(name);

        fputs(name, file);
        printf("text are writtened");
        fclose(file);
    }

    getch();
}
