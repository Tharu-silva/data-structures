#include "BSNode.h"


template<typename T>
BSNode<T>::BSNode(const T& data, int key):
    m_data{data}, m_key{key}
{};

template<typename T>
void BSNode<T>::insert(BSNode<T>* node) {

    if (m_key >= node->m_key)
    {
        if (m_left)
            m_left->insert(node);
        else
            m_left = node;
    } else
    {
        if (m_right)
            m_right->insert(node);
        else
            m_right = node;
    }

}

template<typename T>
BSNode<T>* BSNode<T>::getLeftNode() const {
    return m_left;
}

template<typename T>
BSNode<T>* BSNode<T>::getRightNode() const {
    return m_right;
}

template<typename T>
T BSNode<T>::getData() const {
    return m_data;
}

template<typename T>
int BSNode<T>::getKey() const {
    return m_key;
}


