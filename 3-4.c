#include <stdio.h>
#include <string.h>

struct student {
    char name[50];
    float score;
};

void GetStudent( struct student child[][ 10 ], int *room );

int main() {
    struct student children[ 20 ][ 10 ];
    int group;

    GetStudent( children, &group );

    printf("\n Data Summary \n");
    printf("Total rooms: %d\n", group);
    for(int i = 0; i < group; i++) {
        printf("Room %d student 1: %s\n", i + 1, children[i][0].name);
    }

    return 0;
}

void GetStudent( struct student child[][ 10 ], int *room ) {
    printf("Enter number of rooms: ");
    scanf("%d", room);

    // Loop ตามจำนวนห้อง
    for (int i = 0; i < *room; i++) {
        printf("\n Room %d \n", i + 1);

        for (int j = 0; j < 10; j++) {
            printf("Student %d name: ", j + 1);
            scanf("%s", child[i][j].name);
            printf("Student %d score: ", j + 1);
            scanf("%f", &child[i][j].score);
        }
    }
}