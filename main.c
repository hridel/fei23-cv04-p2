#include <stdio.h>
#include <string.h>

int main() {
    char myString1[20], myString2[20], myString3[20], myChar;
    char *p_myString = NULL;
    int comparison = 0;
    char temp;

    printf("Zadej myString1: ");
    scanf("%[^\n]", myString1);
    scanf("%c", &temp); // temp statement to clear buffer

    printf("Zadej myString2: ");
    scanf("%[^\n]", myString2);
    scanf("%c", &temp);

    printf("Delka myString1 je: %d\n", strlen(myString1));
    printf("Delka myString2 je: %d\n", strlen(myString2));

    strcpy(myString3, myString2);
    printf("Retezec myString3 je: %s\n", myString3);

   strcat(myString1, myString3);
   printf("Vysledek spojeni myString1 a myString3 je: %s\n", myString1);

    printf("\nZadej hledany zank: ");
    myChar = getchar();
    p_myString = strchr(myString1, myChar);
    if (p_myString != NULL) {
        printf("Znak '%c' se v retezci nachazi na pozici %d", myChar, (p_myString - myString1) + 1);
    } else {
        printf("Znak '%c' se v retezci nenachazi", myChar);
    }

    comparison = strcmp(myString1, myString2);
    if (comparison < 0) {
        printf("\nRetezec myString1 < myString2");
    } else if (comparison > 0) {
        printf("\nRetezec myString1 > myString2");
    } else {
        printf("\nRetezce myString1 a myString2 jsou si rovny");
    }


    return 0;
}
