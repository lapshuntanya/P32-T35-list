#include "MyList.h"
#include "DList.h"

int main()
{
    using namespace mylist;
    //4 8 2 5
    /*
    int a[4] = { 4, 8, 2, 5};
    //.... .... .... ....

    //-----------------------------------------
    Node<int> first(4); //info=4, next=nullptr

    Node<int> second(8); //info=8, next=nullptr
    first.next = &second;

    Node<int> third(2); //info=2, next=nullptr
    second.next = &third;

    Node<int> fourth(5);//info=5, next = nullptr
    third.next = &fourth;

    //Обхід списку
    Node<int>* p = &first;
    while (p != nullptr) {
       // cout << p->info << " "; //4
        p->show();
        p = p->next;
    }
    */

    /*
    MyList<int> b; // head = tail = nullptr
    b.show(); // empty

    b.push_back(4); // head = tail = 4
    b.push_back(8); // head=4, tail=8
    b.push_back(2); // head=4, tail=2
    b.push_back(5); // head=4, tail=5
    b.show();
    cout << "---------------------\n\n";*/


    DList<int> d;
    d.show();

    d.push_back(4);
    d.push_back(8);
    d.push_back(2);
    d.push_back(5);
    d.show(); //4 8 2 5

    d.showReverse();//5 2 8 4

    cout << "====================\n";
    DNode<int>* found = d.seach(-5);
    if (found == nullptr)
        cout << "Not found\n";
    else
        found->show();
}


