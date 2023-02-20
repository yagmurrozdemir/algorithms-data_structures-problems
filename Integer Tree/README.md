A integer tree implementation with several functionalities:

        1. A function called height that returns the height of the tree.


        2. A function called contains that returns if the tree contains the value val or not.


        3. A function called printLeaves that prints the leaves of the tree from right to left (i.e. the leaves must be printed in the reverse order that they would be printed using a standard traversal). If the tree is empty function will produce the output "no leaves”.


        4. A function called numberNodes that changes the data stored in a binary tree, assigning sequential integers starting with 1 to each node so that preorder traversal will produce the numbers in order (1, 2, 3, etc.).


        5. A function called removeLeaves that removes the leaves from a tree. A leaf node is a node that has empty left and right subtrees. If function is called on an empty tree, the function does not change the tree.


        6. A function called printLevel that accepts an integer n and prints the values at level n from left to right on one line. (Root of the tree is at level 1, its children are at level 2 and so on). If there are no values at the level, function should produce no output. Function should throw an IllegalArgumentException if it is passed a value for a level that is less than 1.
