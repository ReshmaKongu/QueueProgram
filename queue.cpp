#include "queue.h"

int main() {
    queue q;
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.display();      
    q.peep();        
    q.deque();        
    q.display();      
    return 0;
}

