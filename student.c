#include <stdio.h>
#include <stdlib.h>

void inputDetails(char **names, int *marks, int n) {
    for (int i = 0; i < n; i++) {
        names[i] = (char *)malloc(50 * sizeof(char));  
        printf("Enter Student %d Name: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter Marks: ");
        scanf("%d", &marks[i]);
    }
}

void displayDetails(char **names, int *marks, int n) {
    printf("\nStudent Records:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %d\n", names[i], marks[i]);
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    char **names = (char **)malloc(n * sizeof(char *));  
    int *marks = (int *)malloc(n * sizeof(int));        

    if (names == NULL || marks == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    inputDetails(names, marks, n);
    displayDetails(names, marks, n);

    for (int i = 0; i < n; i++) {
        free(names[i]);
    }
    free(names);
    free(marks);

    return 0;
}
