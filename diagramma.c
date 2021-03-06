#include <stdio.h>

/*
 *  Напишите программу, котрая будет выводить диаграмму одного числа, относительно другого.
    Например, максимальное число - 3000. Его диаграмма представляет собой 24 позиции, заполненые звездочками:
    3000/3000 **********************
    Т.е. если наше текущее число 3000, мы должны вывести на экран 24 звездочки.
    Если текущее число 1500, то диаграмма должна быть заполнена на половину:
    1500/3000 ************..........
    Напишите программу, которая будет строить такую диаграмму для любого числа от 0 до 3000.
 */

int main() {
    int number = 0;
    int i;

    do{
        printf("Введите число от 0 до 3000:\n");
        scanf("%d", &number);

        if(number < 0 || number > 3000) { printf("Ошибка! Повторите ввод!\n"); }
    }while(number < 0 || number > 3000);

    for(i = 0; i < 3000; i += 125)
    {
        if(i < number) { printf("*"); }
        else { printf("."); }
    }
    printf("\n");
    return 0;
}