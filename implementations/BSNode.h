#ifndef DATA_STRUCTURES_BSNODE_H
#define DATA_STRUCTURES_BSNODE_H

template <typename T>
class BSNode {
public:
    BSNode(const T& data, int key);

    T getData() const;
    [[nodiscard]] int getKey() const;
    BSNode<T>* getLeftNode() const;
    BSNode<T>* getRightNode() const;
    void insert(BSNode<T>* node);


    //Allow wrapper class(BSTree) access to private methods and functions
//    template <typename N>
//    friend class BSTree;
private:

    BSNode<T>* m_left{};
    BSNode<T>* m_right{};
    T m_data{};
    int m_key{};
};


#include "BSNode.tpp"
#endif //DATA_STRUCTURES_BSNODE_H
