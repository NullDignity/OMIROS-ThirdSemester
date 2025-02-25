#include "CreateAndDestroy.h"

void create() {
    CreateAndDestroy fifth(5, "Local in create");
    static CreateAndDestroy sixth(6, "Static in create");
    CreateAndDestroy seventh(7, "Local in create");
}

int main() {

    CreateAndDestroy second(2, "Local in main");
    static CreateAndDestroy third(3, "Static in main");
    create();
    CreateAndDestroy fourth(4, "Local in main");

    return 0;
}