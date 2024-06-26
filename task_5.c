// Задача 5. Все счастливые числа
// Ввести натуральное число и напечатать все числа от 10 до введенного числа -
// у которых сумма цифр равна произведению цифр
// Данные на входе: Одно натуральное число большее 10
// Данные на выходе: Числа у которых сумма цифр равна произведению
// цифр через пробел в порядке возрастания. Не превосходящие введенное
// число.
// Пример №1
// Данные на входе: 200
// Данные на выходе: 22 123 132
// Пример №2
// Данные на входе: 1000
// Данные на выходе: 22 123 132 213 231 312 321
// Пример №3
// Данные на входе: 22
// Данные на выходе: 22

#include <stdio.h>

int main(void) {
    int myNum;
    printf("Enter a number greater than 10:\n");
    scanf("%d", &myNum);

    for (int i = 10; i <= myNum; i++) {
        int mySum = 0, myProduct = 1;
        int checkNum = i;
        while (checkNum > 0)
        {
            mySum += checkNum % 10;
            myProduct *= checkNum % 10;
            
            checkNum /= 10;
        }

        if(mySum == myProduct) {
            printf("%d ", i);
        }
        
    }

    return 0;
}