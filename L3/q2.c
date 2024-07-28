#include <stdio.h>

#define MAX 256 

int main() {
    char str[100];
    int freq[MAX] = {0}; 
    int i;

    printf("Enter any string=");
    scanf("%s",str);

   
    for (i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    printf("Frequency =\n");
    for (i = 0; i < MAX; i++) {
        if (freq[i] > 0) {
            printf("%c => %d\n", i, freq[i]);
        }
    }

    return 0;
}