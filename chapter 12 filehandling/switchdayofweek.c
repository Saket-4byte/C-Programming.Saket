#include <stdio.h>

int main()
{
    int n;
    printf("enter day number (1-7): ");
    scanf("%d", &n);
    switch (n)
    {
    case 1: // ye n ki value hai
        printf("monday");
        break;
    case 2: // ye n ki value hai
        printf("tuesday");
        break;
    case 3: // ye n ki value hai
        printf("wednesday");
        break;
    case 4: // ye n ki value hai
        printf("thursday");
        break;
    case 5: // ye n ki value hai
        printf("friday");
        break;
    case 6: // ye n ki value hai
        printf("saturday");
        break;
    case 7: // ye n ki value hai
        printf("sunday");
        break;
    default:
        printf("invalid number");
    }
    return 0;
}