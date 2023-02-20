#include "brackets.h"

using namespace std;

int main() {
    
    string expr = "{()}[]";

    if (areBracketsBalanced(expr))
        cout << "Balanced";
    else
        cout << "Not Balanced";

    return 0;
}