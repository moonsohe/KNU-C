#include <stdio.h>
#include <stdlib.h>

struct Item {
    int Id;
    int Level;
};

struct Item* MakeItem(int id, int level) {
    struct Item* NewItem = (struct Item*)malloc(sizeof(struct Item));
    NewItem->Id = id;
    NewItem->Level = level;

    return NewItem;
}
int IsGoodItem(struct Item*it) {
    if (it->Level >= 2) return 1;
    return 0;
}
int IsLowItem(struct Item* it) {
    if (it->Id <= 2) return 1;
    return 0;
}

void FindItemByPredicate(struct Item** Items, int ItemCount, int(*Predicate)(struct Item*)) {
    for (int i = 0; i < ItemCount; i++) {
        if (Predicate(Items[i])) {
            printf("find Item! id : %d, Level : %d\n", Items[i]->Id, Items[i]->Level);
       }
    }
};


int main() {

    struct Item* Items[4] = {
        MakeItem(1, 0),
        MakeItem(3, 1),
        MakeItem(2, 2),
        MakeItem(4, 3)
    };

    FindItemByPredicate(Items,4,IsGoodItem);   
    FindItemByPredicate(Items, 4, IsLowItem);


    for (int i = 0; i < 4; i++) {
        free(Items[i]);
    }
    return 0;
}