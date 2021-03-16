#include <stdio.h>

int main() {


    // 2 7 4 11 10 12 9 21 24 <- input
    // 7 9 11 21 2 4 10 12 24 -> output

    int theAry[20];
    int ary[20];
    int count = 0;
    int limit = 0;

    printf("Enter the length of the array(must be less than 20):  ");
    scanf("%d", &limit);

    for (int i = 0; i < limit; ++i) {
        printf("Enter your %d value: ", i);
        scanf("%d", &theAry[i]);
    }

    for (int i = 0; i < limit; ++i) {
        for (int j = i + 1; j < limit; ++j) {
            if (theAry[i] > theAry[j]) {
                int temp = theAry[i];
                theAry[i] = theAry[j];
                theAry[j] = temp;
            }
        }
    }

    for (int i = 0; i < limit; ++i) {
        if (theAry[i] % 2 == 0) {
            count++;
        }
    }

    int j = 0;
    int oddLen = limit - count;

    for (int i = 0; i < limit; ++i) {
        if (theAry[i] % 2 == 1) {
            if (j < oddLen) {
                ary[j] = theAry[i];
                j++;
            }
        } else {
            ary[oddLen] = theAry[i];
            oddLen++;
        }
    }

    for (int i = 0; i < limit; ++i) {
        printf("%d  ", ary[i]);
    }

}
