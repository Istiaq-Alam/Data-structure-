#include <stdio.h>
int main() {
    FILE *inputFile = fopen("ID-05.txt", "r");
    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }

    int n;
    fscanf(inputFile, "%d", &n); //file scanning

    int array[n];
    for (int i = 0; i < n; i++) {
        fscanf(inputFile, "%d", &array[i]);
    }

    fclose(inputFile);

    printf("Output:\n");
    for (int i = 0; i < n; i++) {
        printf("A[%d]=%d \n", i, array[i]);
    }
    printf("\n");

    return 0;
}

