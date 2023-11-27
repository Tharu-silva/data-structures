#include "BSTree.h"

template <typename T>
void BSTree<T>::insert(BSNode<T>* node) { m_root->insert(node); }

template<typename T>
BSNode<T> *BSTree<T>::getRoot() const {
    return m_root;
}

template <typename T>
BSTree<T>::BSTree(BSNode<T>* root):
    m_root{root}
{}

