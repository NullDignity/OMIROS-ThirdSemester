#ifndef QUEUE_H
    #define QUEUE_H

    #include <iostream>
    #include <cstring>
    #include <cstdlib>
    #include <ctime>
    using namespace std;

    #define SIZE 10

    class Queue {
        
        private:
            char queue[SIZE];
            int enqueue_value, dequeue_value;

        public:
            Queue(); //constructor

            //setters
            void setQueue(char);
            void setEnqueueValue(int);
            void setDequeueValue(int);
            //getters
            char getQueue() const;
            int getEnqueueValue() const;
            int getDequeueValue() const;

            void print();
            void enqueue(char);
            char dequeue();

    };
#endif
