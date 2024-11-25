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
			Node<ListType>* p = head;
			Node<ListType>* pDel = head;
			while (p != nullptr) {
				pDel = p;
				cout << "Del: " << pDel->info << endl;	 
				p = p->next;
				delete pDel;
			}
		}


		void push_back(ListType value) {
			//1 Створюємо новий вузол
			Node<ListType>* el = new Node<ListType>(value);
			//2.1 Якщо перший вузол в списку
			if (head == nullptr) {
				head = tail = el;
			}
			else {//2.2 Якщо НЕ перший вузол в списку
				//В хвіст зберігаємо адресу нового вузла (привязка вузлів)
				tail->next = el;
				//Оновлюємо значення хвоста - зсовуємо хвіст
				tail = el;
			}
		}

		void show() {
			if (head == nullptr) cout << "List is empty!\n";

			Node<ListType>* p = head;
			while (p != nullptr) {
				p->show();
				p = p->next;
			}
		}
	};
}