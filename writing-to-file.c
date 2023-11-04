#include<stdio.h>
int main()
{
    FILE *file;
    char name[35] = "Mahafuj Ahamed, Sourov Hasan";
    int length = strlen(name);
    int i;

    file = fopen("test.txt","w");
    if(file == NULL)
    {
        printf("File is not open");
    }
    else{
        printf("File open\n");
        for(i=0; i< length; i++)
        {
            fputc(name[i],file);
        }
        printf("text is written successfully\n");
        fclose(file);
    }

    getch();
}
