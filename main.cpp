//#include "BSTree.h"
#include <iostream>
#include "implementations/BSNode.h"
#include "implementations/BSTree.h"
int main()
{
    BSNode treeRoot{4,4};
    BSTree tree {&treeRoot};

    BSNode node1{3,3};
    tree.insert(&node1);



    return 0;
}
