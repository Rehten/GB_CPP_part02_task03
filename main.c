#include <stdio.h>

#define ARR_LENGTH 5
#define SHRT_ARR_LENGTH ARR_LENGTH * 2

int main() {
    int arr[ARR_LENGTH];
    short rslt_arr[SHRT_ARR_LENGTH];

    printf("Введите элементы в целевой масив, моя программа соберет их в новый массив и выдаст значения на экран\n");

    // запись значений в изначальный массив
    for (int i = 0; i < ARR_LENGTH; i++) {
        printf("Укажите элемент %d: ", i);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < SHRT_ARR_LENGTH; i++) {
        short* value = (short*)&arr[0] + i;
        rslt_arr[i] = *value;
        printf("Выходное значение из %d половины %d числа основного массива: %d, %p\n", i%2 == 0 ? 1 : 2, i/2, rslt_arr[i], value);
    }

    return 0;
}