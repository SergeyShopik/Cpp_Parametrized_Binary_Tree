#include "BTree.cpp"


int main()
{
    BTree<int> tree(10);
    tree.add(7);
    tree.add(54);
    tree.add(2);
    tree.add(1);
    tree.add(41);

    tree.print();

    tree.erase(1);

    tree.print();


    return 0;
}