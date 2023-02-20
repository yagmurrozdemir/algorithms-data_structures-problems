#include "primes.cpp"

using namespace std;

int main() {
    
    int n = 30;
    
    cout << "Following are the prime numbers smaller than or equal to " << n << endl;
    
    Queue<int> primeQueue = SieveOfEratosthenes(n);
    while (!primeQueue.isEmpty()) {
        cout << primeQueue.peek() << " ";
        primeQueue.dequeue();
    }
    cout << endl;
    
    return 0;
}