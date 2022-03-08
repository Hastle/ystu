#include <stdio.h>
#include <stdlib.h>

void InsertionSortUp(int n, int mass[]) {
    int newElement, location, repos=0;
    for (int i=1; i<n; i++) {
        newElement = mass[i];
        location = i - 1;
        while(location >= 0 && mass[location] > newElement) {
            mass[location+1] = mass[location];
            repos++;
            location--;
        }
        mass[location+1] = newElement;
    }
    printf("Кол-во перемещений: %d\n", repos);
}

void InsertionSortDown(int n, int mass[]) {
    int newElement, location, repos=0;
    for (int i=1; i<n; i++) {
        newElement = mass[i];
        location = i - 1;
        while(location >= 0 && mass[location] <=newElement) {
            mass[location+1] = mass[location];
            repos++;
            location--;
        }
        mass[location+1] = newElement;
    }
    printf("Кол-во перемещений: %d\n", repos);
}

int main() {
    int N, min, max, pnt;
    printf("Введите N: ");
    scanf("%d", &N);
    int* mass;
    mass = (int *)malloc(N * sizeof(int));
    printf("Введите эллементы массива: ");
    for (int i=0; i<N; i++)
        scanf("%d", &mass[i]);
    min = mass[1];
    max = mass[1];
    for (int i=0; i<N; i++) {
        if (mass[i]<min)
            min = mass[i];
        if (mass[i]>max)
            max = mass[i];
    }
    printf("\n");
    printf("Для вывода массива в порядке возрастания нажмите 1, убывания 2\n");
    scanf("%d", &pnt);
    if (pnt == 1)
        InsertionSortUp(N, mass);
    if (pnt == 2)
        InsertionSortDown(N, mass);
    if (pnt != 1 && pnt != 2)
        return 0;
    printf("Сортированный массив: ");
    for (int i = 0; i < N; i++)
        printf("%d ", mass[i]);
    printf("\n");
    printf("Минимальный элемент: %d\n", min);
    printf("Максимальный элемент: %d", max);
    printf("\n\n");
    free(mass);
    return 0;
}
