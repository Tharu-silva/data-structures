#ifndef DATA_STRUCTURES_BSTREE_H
#define DATA_STRUCTURES_BSTREE_H
#include "BSNode.h"

template <typename T>
class BSTree {
public:
    explicit BSTree(BSNode<T>* root);
    void insert(BSNode<T>* node);
    BSNode<T>* getRoot() const;

private:
    BSNode<T>* m_root{};
};

#include "BSTree.tpp"

#endif //DATA_STRUCTURES_BSTREE_H
