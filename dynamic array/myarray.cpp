#include "myarray.h"


//Set size to two and n to zero and set arr to point an array of two integers.
MyArray::MyArray()
{
    size = 2; 
    n = 0; 
    arr = new int[2];
}

//Set size to two and n to one and set array to point an array of two integers
//The first element in the array must be first_el
MyArray::MyArray(int first_el)
{
    size = 2; 
    n = 1; 
    arr = new int[2];
    arr[0] = first_el;
}

// Set size and n of the newly created MyArray same as  the size and n of rhs 
// Allocate new space and assign it to arr of the newly created MyArray
// Copy all elements in rhs to arr of the newly created MyArray
MyArray::MyArray(const MyArray& rhs)
{
    int i; 
    size = rhs.size;
    n = rhs.n;
    arr = new int[size];
    
    for(i = 0; i < n; i++)
    {
        arr[i] = rhs.arr[i];
    }
    
}

// Set size and n to zero and deallocate arr.
MyArray::~MyArray()
{
    size = 0;
    n = 0; 
    delete[] arr;
}

// Similar to copy constructor (i.e. deep copy semantics)
// Make sure you don't assign object to itself.
MyArray& MyArray::operator=(const MyArray& rhs)
{
    int i;
    if(this != &rhs)
    {
        delete [] arr;
        size = rhs.size;
        n = rhs.n;
        arr = new int[size];
        
        for(i=0; i<n; i++)
        {
            *(arr+i) = *(rhs.arr+i);
        }
    }
    return *this;
}


// Allocate a bigger array of size (2*size).
// Copy n elements in arr to the new space.
// At the end of the function execution, arr must point to the bigger array 
// Set size correctly.
// Don't forget to delete the old space.
void MyArray::double_size()
{
    int i;
    size = 2 * size;
    
    
    int *arr1 = new int[size];
    
    
    
    
    for(i = 0; i < n; i++)
    {
        arr1[i] = arr[i];
    }
    
    delete[] arr;
    
    arr = arr1;
    
    
}

// Check if arr is full
// If it is full double the size of arr (i.e. call double_size function)
// Insert element as the last item in the arr.
// Don't forget to increment n.
void MyArray::insert_data(int el)
{
    if(n != size)
    {
        arr[n] = el;
        n++;
    }
    
    else
    {
        this->double_size();
        arr[n] = el;
        n++;
    }
}

// You can assume that ind >=0 and ind < n.
// Delete the element at ind, by shifting all elements after index ind
// one position to the left.
// You don't change the size but you must decrement n.
void MyArray::delete_data(int ind)
{
    int i; 
    
    for(i = ind; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    
    n--;
    


}

int MyArray::get_n()
{
    return n;
}

int MyArray::get_size()
{
    return size; 
}

// gets the element in ind index where 0 <= ind < n. 
int MyArray::get_element(int ind)
{
    return arr[ind];
}

// Note that default parameters are only
// specified in the function declaration
// (not the definition, which is below).
void MyArray::print(char separator) const
{
    for (int i = 0; i < n-1; i++)
    {
        // We should use braces in "for", "if", "while"
        // constructs even if we have a single line
        // of code. This improves code clarity.
        
        std::cout << arr[i] << separator;
    }
    
    std::cout << arr[n-1] << std::endl;
}