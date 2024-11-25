#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace mylist {

	template<typename Type>
	class Node {
	public:
		Type info; //що зберігаємо
		Node* next; //адреса на наступний вузол

		Node(Type value) {
			info = value;
			next = nullptr;
		}
		void show() {
			cout << "Info: " << info << endl;
			cout << "\tNext: " << next << "\n\n";
		}
	};

	template <typename ListType>
	class MyList {
		Node<ListType>* head; //голова - адреса першого вузла
		Node<ListType>* tail; //хвіст - фдркса останнього вузла
	public:
		MyList() {
			head = tail = nullptr;
		}
		~MyList() {

		}

		void push_back(ListType value) {

		}
	};
}