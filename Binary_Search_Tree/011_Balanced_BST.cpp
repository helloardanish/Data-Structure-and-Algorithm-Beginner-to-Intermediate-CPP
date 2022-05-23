// Every node in a BST must follow the property |lh-rh| <= 1. |mod|


// Balanced tree - height will always be O(logn), we don't have to go for O(n) time complexity.

// So insert, delete and search will always be O(logn) time.

// In unbalanced tree it was going upto O(n) time complexity. So our code will be much faster.

// BST depends on the order of the input

// input [1,2,3,4,5] will be unbalanced while [3,2,1,4,5] will be balanced.



// There are BST which are always balanced

// 1. AVL Tree
// 2. Red-Black Tree
// 3. 2-4 Tree
// These tree doesn't depend on the input order and are always balanced.

// Height = O(logn)
// All operations are always O(logn)
// We will have to do operation/rotations while inserting data.
