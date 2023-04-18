#include <stdio.h>
#define MAX 10

int queue[MAX];
int top = -1;
int i, j, temp;

void display()
{
    if (top == -1)
    {
        printf("\n queue Empty! \n");
    }
    else
    {
        for (i = 0; i <= top; i++)
        {
            printf(" %d <----", queue[i]);
        }
        puts(" ");
    }
}

void insertion_sort(int queue[])
{
    for (i = 1; i <= top; i++)
    {
        temp = queue[i];
        j = i - 1;

        while (queue[j] < temp && j >= 0)
        {
            queue[j + 1] = queue[j];
            j--;
        }
        queue[j + 1] = temp;
    }
}

void push()
{
    if (top == MAX - 1)
    {
        printf("\n queue Overflow! \n");
    }
    else
    {
        top = top + 1;
        printf("\n Input Elemen queue = ");
        scanf("%d", &queue[top]);
    }
    insertion_sort(queue);
    display();
}

void pop()
{
    if (top == -1)
    {
        printf("\n queue Empty! \n");
    }
    else
    {
        printf("\n Pop Elemen queue = %d \n", queue[top]);
        top = top - 1;
    }
    display();
}

main()
{
    int menu;
    while (1)
    {
        printf("\n Pilihan Menu : \n");
        printf(" [1] Push queue \n");
        printf(" [2] Pop queue \n");
        printf(" [3] Display queue \n");
        printf(" [4] Quit \n");
        printf(" Input Menu Pilihan Anda : ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            return 0;
            break;
        }
        default:
        {
            printf("\n Pilihan Tidak Tersedia! \n");
            break;
        }
        }
    }
}
