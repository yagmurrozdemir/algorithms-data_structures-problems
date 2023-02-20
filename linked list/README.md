Generic linked list implementation with several functionalities:

   set(int index, int value): Sets the value of the element at the given index in the list to the given value.

   min(): Returns the minimum value in the list of integers. If the list is empty, a NoSuchElementException is thrown.

   lastIndexOf(int value): Returns the index of the last occurrence of the given value in the list, or -1 if the value is not found.
    
   deleteBack(): Deletes and returns the last element in the list. If the list is empty, a NoSuchElementException is thrown.

   removeAdjacentDuplicates(): Removes all adjacent duplicate elements in the list.

   removeAll(int value): Removes all occurrences of the given value from the list.

   equals(LinkedList list): Returns true if the given list is equal to this list in terms of element values, ordering, and length.

   invert(): Inverts the list so that the first element becomes the last, the second becomes the second-last, and so on.

   numberOfOccurences(int value): Returns the number of occurrences of the given value in the list.

   isSorted(): Returns true if the list is sorted in ascending order, false otherwise.
