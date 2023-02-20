A heap implementation with several functionalities:

    1) A method called descending that accepts an array of integers and the length of the array, and rearranges the integers in the array to be in descending order using a HeapPriorityQueue as a helper. For example if the array passed stores [42, 9, 22, 17, -3, 81], after the call the array should store [81, 42, 22, 17, 9, -3].

    

    2) A method called kthsmallest that accepts a HeapPriorityQueue of integers and an integer k as parameters and returns the kth-smallest integer from the priority queue. For example if the queue passed stores the integers [42, 50, 45, 78, 61] and k is 4, return the fourth-smallest integer which is 61. If k is 0 or negative or greater than the size of the priority queue, throw an IllegalArgumentException. If  method modifies the state of the priority queue during its computation it should restore the queue before it returns.

    

    3) A method called isConsecutive that accepts a HeapPriorityQueue of integers as parameter and returns true if the queue contains a sequence of consecutive integers starting from the front of the queue. For example if the priority queue stores [7, 8, 9, 10, 11] method should return true. If method modifies the state of the priority queue during its computation it restore the queue before it returns.

    

    4) A method called changePriority that accepts two elements oldVal and newVal as its parameters and changes the occurrence of oldVal to newVal. The method should make sure that the heap ordering property is satisfied after this update.

   
