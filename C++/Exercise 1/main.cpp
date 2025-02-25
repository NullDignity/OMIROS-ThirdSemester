#include "queue.h"

int main() {

    Queue q1;
    int number_of_enqueued_elements, number_of_dequeued_elements;
    char random_queue_element;

    cout << "How many random elements do you want to ENQUEUE inside the queue? (Type a positive integer and press ENTER): ";
    cin >> number_of_enqueued_elements;
    cout << endl << endl;

    srand(time(NULL));
    
    for (int i=0; i<number_of_enqueued_elements; i++) {
        random_queue_element = 33 + rand()%(127-33);
        q1.enqueue(random_queue_element);
    }

    cout << "\n\nHow many random elements do you want to DEQUEUE outside of the queue (FIFO mode of dequeueing)? (Type a positive integer and press ENTER): ";
    cin >> number_of_dequeued_elements;
    cout << endl << endl;

    for(int i=0; i<number_of_dequeued_elements; i++)
        cout << q1.dequeue() << (q1.getDequeueValue() < q1.getEnqueueValue() ? "'\n'" : "\n");

    return 0;
}