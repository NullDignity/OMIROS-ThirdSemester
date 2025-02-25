#ifndef CREATEANDDESTROY_H
    #define CREATEANDDESTROY_H

    #include <iostream>
    #include <ctime> // clock_t
    using namespace std;

    class CreateAndDestroy {

        private:
            int objectID; // You can also make the objectID static through 'static int objectID'. But you must make sure all getters return a static value.
            string message;
            clock_t start, end;
            
        public:
            // Constructor
            CreateAndDestroy(int, string);
            // Destructor, characterized by the ~ and fires at the end of scope.
            ~CreateAndDestroy();
            // For Educational Reasons only. Normally, there would be setters and getters.

    };
#endif