#include "stack.h"

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();      
    s.peek();       
    s.pop();          
    s.display();      
    s.peek();        
    return 0;
}

