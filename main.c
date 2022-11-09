#include <stdio.h>
#include <conio.h>

int roman(int, int, char);

int main() {
    int a;
    printf("Cherry-Pick");
    //get user's input
    printf("Enter a number: \n");
    if(!scanf("%d", &a) || a <= 0) {
        printf("Invalid data");
        return 0;
    };

    //convert into roman
    a = roman(a, 1000, 'M');
    a = roman(a, 500, 'D');
    a = roman(a, 100, 'C');
    a = roman(a, 50, 'L');
    a = roman(a, 10, 'X');
    a = roman(a, 5, 'V');
    a = roman(a, 1, 'I');

    getch();
    return 0;
}

roman(int i, int j, char c) {
    while(i >= j) {
        putchar(c);
        i -= j;
    }

    return i;
}