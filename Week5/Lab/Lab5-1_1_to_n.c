#include <stdio.h>

int main() {
    int num;
    
    scanf("%d", &num);

    for (int i = 1; i < num+1; i++) {
        printf("%d ", i);
    }

    return 0;
}