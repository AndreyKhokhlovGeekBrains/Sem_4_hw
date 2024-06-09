// Задача 4. Перевернуть число
// Ввести целое число и «перевернуть» его, так чтобы первая цифра стала
// последней и т.д.
// Данные на входе: Целое неотрицательное число
// Данные на выходе: Целое неотрицательное число наоборот
// Пример №1
// Данные на входе: 1234
// Данные на выходе: 4321
// Пример №2
// Данные на входе: 782
// Данные на выходе: 287

#include <stdio.h>
int MULTIPLIER = 10;

int main(void) {
    int myNum, reversedNum = 0;
    printf("Enter a number:\n");
    scanf("%d", &myNum);
    
    while (myNum > 0)
    {
        reversedNum = reversedNum * MULTIPLIER + (myNum % 10);
        myNum /= 10;
    }
    printf("%d", reversedNum);

    return 0;
}
