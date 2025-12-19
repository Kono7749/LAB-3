#include <stdio.h>

struct student {
    char name[50];
    int age;
};

void GetStudent(struct student child[][10], int *room) {
    printf("Enter number of rooms: ");
    scanf("%d", room);

    for (int i = 0; i < *room; i++) {
        printf("\n--- Room %d ---\n", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("Enter student %d name: ", j + 1);
            scanf("%s", child[i][j].name);
            printf("Enter student %d age: ", j + 1);
            scanf("%d", &child[i][j].age);
        }
    }
}

int main() {
    struct student children[20][10];
    int group;

    GetStudent(children, &group);
    
    return 0;
}