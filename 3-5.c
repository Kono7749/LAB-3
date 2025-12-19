#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int score;
};

struct student (*GetStudent( int *room ))[ 10 ];

int main() {
    struct student ( *children )[ 10 ]; 
    int group;

    children = GetStudent( &group );

    printf("\n--- Data Entered ---\n");
    for (int i = 0; i < group; i++) {
        printf("Room %d, First Student: %s\n", i + 1, children[i][0].name);
    }

    free(children);

    return 0;
}

struct student (*GetStudent( int *room ))[ 10 ] {
    printf("Enter number of rooms: ");
    scanf("%d", room);

    struct student (*temp)[10] = malloc( (*room) * sizeof(struct student[10]) );

    for (int i = 0; i < *room; i++) {
        printf("\nInput for Room %d:\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("  Student %d Name: ", j + 1);
            scanf("%s", temp[i][j].name);
            printf("  Student %d Score: ", j + 1);
            scanf("%d", &temp[i][j].score);
        }
    }

    return temp;
}