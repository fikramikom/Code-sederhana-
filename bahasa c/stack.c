#include <stdio.h>
#define max 5

int stack[max];
int top = -1;
int menu;

void display()
{
    if (top == -1)
    {
        printf("\n Stack Empty! \n");
    }

    else
    {
        int i;
        for (i = top; i >= 0; i--)
        {
            printf("\n| \t %d \t| ", stack[i]);
        }
        puts("");
    }
}

void push()
{
    if (top == max - 1)
    {
        printf("\n Stack Overflow ! \n");
    }

    else
    {
        top = top + 1;
        printf("\n Input elemen Stack = ");
        scanf("%d", &stack[top]);
    }

    display();
}

void pop()
{
    if (top == -1)
    {
        printf("\n Stack Empty ! \n");
    }

    else
    {
        printf("\n Pop elemen Stack = %d \n", stack[top]);
        top--;
    }
    display();
}

main()
{
kembali:
    while (1)
    {
        printf("\n\n   Welcome to Linked List");
        printf("\n\tPILIHAN MENU\n\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Quit\n");
        printf("Masukan Pilihan Menu = ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
        {
            push();
        }
        goto kembali;
        case 2:
        {
            pop();
        }
        goto kembali;
        case 3:
        {
            display();
        }
        goto kembali;
        case 4:
        {
            printf("\n\n\tProgram Selesai");
            break;;
        }
        default:
        {
            printf("\nPilihan Tidak Ada\n");
            break;
        }
        }
    }
}
