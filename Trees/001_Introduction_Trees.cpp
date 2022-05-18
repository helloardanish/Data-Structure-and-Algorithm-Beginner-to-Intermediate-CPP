// Implementing tree : very similar to linked list

// Using vector because linked list takes O(n) time to access.Not using array because of memory shortage.


// If you know root in tree you know the whole tree. Similar to head in linked list :)
// You have address of next pointer in linked list. Here we have vector of all the pointers. Because tree can have multiple childs.



#include <iostream>
#include <vector>

using namespace std; 

template<typename T>
class TreeNode{
  public:
    T data;
    vector<TreeNode<T>*> childrens;

    TreeNode(T data){
      this->data = data;
    }
};

int main(){
  
  TreeNode<int> * root = new TreeNode<int>(1);
  TreeNode<int> * n1 = new TreeNode<int>(2);
  TreeNode<int> * n2 = new TreeNode<int>(3);

  root->childrens.push_back(n1);
  root->childrens.push_back(n2);


  cout << endl;
}
