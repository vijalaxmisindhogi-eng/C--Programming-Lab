#include <stdio.h>
#include <stdlib.h>

int main()
{
    char strl[50], str2[50];
    int i, j, len = 0;
    int same = 1;
    printf("Enter a string: ");
    scanf("%s", strl);

    // Length/
    for (i = 0; strl[i] != '\0'; i++)
    {
        len++;
    }
    printf("Length = %d\n", len);

    //copy//
    for(i = 0; strl[i] != '\0'; i++)
    {
        str2[i] = strl[i];


    }
     str2[i] = '\0';
     printf("Copied string = %s\n", str2);

     //revers//
     printf("Reverse = ");

     for(i = len - 1; i >= 0; i--)
     {
         printf("%c", strl[i]);

     }

     //palindrome//
     for (i = 0; i < len / 2; i++)
     {
         if(strl[i] != strl[len - 1 - i])
         {
             same = 0;
             break;

         }
     }
        if(same == 1)
            printf("\nPalnidrome");
        else
            printf("\nNot Palindrome");

    return 0;
}
