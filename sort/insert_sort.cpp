//
// Created by cust on 17-4-10.
//
#include "sort.h"
void insert_sort(int *a ,int len) {
    int j, key;
    for (int i = 1; i < len; i++) {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1]=key;
    }
}

