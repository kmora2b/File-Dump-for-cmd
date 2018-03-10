#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

int main()
{   int choice;


    printf("File Dumper Program\n");
    do
    {
    printf("\nWhat will you like to dump?");
    printf("\n\n1. ipconfig\n2. netstat\n3. Quit\n");

    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        printf("\nFile is currently being created...");
        system("C:\\Windows\\System32\\ipconfig>IPCONFIGResults.txt");
        break;
    case 2:
        printf("\nFile is currently being created...");
        system("C:\\Windows\\System32\\netstat>NTResults.txt");
        break;
    case 3:
        printf("\nBye!");
        break;
    default:
        printf("\nERROR: INPUT FROM 1 TO 2");
        break;
    }
    }
    while(choice != 1 && choice != 2 && choice != 3);

}
