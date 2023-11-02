#include<stdio.h>
int main()
{
    FILE *file;
    file = fopen("text.txt","w");

    if(file == NULL)
    {
        printf("File does not opened");
    }
    else
    {
        printf("File is opened");
    }


    getch();
}
