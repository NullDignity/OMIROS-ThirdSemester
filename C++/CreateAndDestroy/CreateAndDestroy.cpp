#include "CreateAndDestroy.h"

CreateAndDestroy::CreateAndDestroy(int ID, string msg) {
    start = clock();
    objectID = ID;
    message = msg;
    cout << "Object " << objectID << " was created as " << message << endl << endl;
}

CreateAndDestroy::~CreateAndDestroy() {
    cout << "Press any key to pass some time.\n";
    getchar();
    end = clock();
    cout << "Object " << objectID << "(" << message << ") was destroyed and lived for " << (end-start)/(CLOCKS_PER_SEC/1000) << " milliseconds.\n";
    getchar();
}