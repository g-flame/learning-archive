#include <stdio.h>

int comparer(int user)
{
    switch (user)
    {
    case 69:
        printf("Seriously bro 69 are you a child!");
        printf("\n-----------------------------------------------\n");
        break;
    default:
        printf("The number you entered is -> ");
        printf("%d", user);
        printf("\n-----------------------------------------------\n");
    }
}

int main()
{
    printf("-----------------------------------------------");
    printf("\nA SIMPLE NUMBER COMPARER BUILT IN C BY G-FLAME!\n ");
    int user;
    printf("\nEnter a number please !:\n ");
    scanf("%d", &user);
    int give = comparer(user);
}
