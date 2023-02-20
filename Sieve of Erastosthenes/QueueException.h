#ifndef QUEUE_EXCEPTION_H
#define QUEUE_EXCEPTION_H

#include <string>

using namespace std;

class QueueException {

public:
    
    QueueException(string err) {
        
        error = err;
    }
    
    string error;
};

#endif //QUEUE_EXCEPTION_H
