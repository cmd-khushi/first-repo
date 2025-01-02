#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int calculatesum(int a, int b) {
    return a+b;
}

int main() {
    printf("hello world\n");

    // 1. Conditionals
    int x = 10;
    printf("\n1. Conditionals:\n");
    if (x > 0) {
        printf("x is positive.\n");
    } else if (x < 0) {
        printf("x is negative.\n");
    } else {
        printf("x is zero.\n");
    }

    // 2. Loops
    printf("\n2. Loops:\n");

    // For loop
    printf("For Loop: ");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    // While loop
    printf("\nWhile Loop: ");
    int count = 1;
    while (count <= 5) {
        printf("%d ", count);
        count++;
    }

    // Do-while loop
    printf("\nDo-While Loop: ");
    count = 1;
    do {
        printf("%d ", count);
        count++;
    } while (count <= 5);
  
    // 3. Functions 
    int a = 5, b = 7;
    int sum = calculatesum(a,b);
    printf("\n\n3. Functions:\nSum of %d and %d is: %d\n", a, b, sum);

    // 4. Pointers
    printf("\n4. Pointers:\n");
    int num = 10;
    int *ptr = &num;
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value at ptr (dereferencing): %d\n", *ptr);
}
