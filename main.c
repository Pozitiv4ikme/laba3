#include <stdio.h>
#include <math.h>
#include <stdlib.h>

static int arrayOfNumber[] = {3,4,3,2,3,1,3,3};
static int dominator;

void Find_Dominator() {
    int size = 0;
    int value = 0;
    
    for (int i = 0; i < 8; i++)                // проводимо сортування масиву
    {
        if (size == 0)
        {
            size++;
            value = arrayOfNumber[i];   // перебираючи список
        }
        else
        {
            if (value != arrayOfNumber[i])
                size--;
        }
    }
    
    dominator = -1;
    
    if (size > 0)
    {
        dominator = value;                       // визначаємо домінатор
    }
    
    int leader = -1;
    int count = 0;
    
    for (int j = 0; j < 8; j++)
    {
        if (arrayOfNumber[j] == dominator)         // перевіряємо скільки раз зустрічається домінатор у масисі
            count++;
    }
    if (count > (8 / 2))                           // проводимо перевірку чи складає домінатор хоч половину масиву
        leader = dominator;
    else
    {
        printf("-1");                            // якщо не складає то виводимо -1
    }
    printf("dominator=%d\n", dominator);
}
int main() {
    Find_Dominator();                            // запускаємо нашу функцію
    return 0;
}

