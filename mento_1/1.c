#include <stdio.h>
#include <stdlib.h>

struct Item {
    int Id;
    int Level;
};

struct Item* MakeItem(int id, int level) {
    struct Item* NewItem = (struct Item*)malloc(sizeof(struct Item));
    NewItem-> Id = id;
    NewItem->Level = level;

    return NewItem;
}

int main() {

    struct Item* Items[4] = {
        MakeItem(1, 0),
        MakeItem(3, 1),
        MakeItem(2, 2),
        MakeItem(4, 3) 
    };

    for (int i = 0; i < 4; i++) {
        printf("item, id : %d, Level : %d\n", Items[i]->Id, Items[i]->Level);
    }

    for (int i = 0; i < 4; i++) {
        free(Items[i]);
    }
    return 0;
}