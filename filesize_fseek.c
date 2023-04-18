#include <stdio.h>

int main()
{
    FILE* fp; /*to create file*/
    long int size = 0;

    /*Open file in Read Mode*/
    fp = fopen("temp.txt", "r");
 
    /*Move file point at the end of file.*/
    fseek(fp, 0, SEEK_END);

    /*Get the current position of the file pointer.*/
    size = ftell(fp);

    if (size != -1)
        printf("File size is: %ld\n", size);
    else
        printf("There is some ERROR.\n");

    return 0;
}
