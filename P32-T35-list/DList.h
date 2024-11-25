#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace mylist {

	template<typename Type>
	class DNode {
	public:
		Type info; //що зберігаємо
		DNode* prev; //адреса на попередній вузол
		DNode* next; //адреса на наступний вузол

		DNode(Type value) {
			info = value;
			next = prev = nullptr;
		}
		void show() {
			cout << "Info: " << info << endl;
			cout << "\tPrev: " << prev << "\n";
			cout << "\tNext: " << next << "\n\n";
		}
	};

	template <typename ListType>
	class DList {
		DNode<ListType>* head; //голова - адреса першого вузла
		DNode<ListType>* tail; //хвіст - aдрeса останнього вузла
	public:
		DList() {
			head = tail = nullptr;
		}
		~DList() {
			DNode<ListType>* p = head;
			DNode<ListType>* pDel = head;
			while (p != nullptr) {
				pDel = p;
				cout << "Del: " << pDel->info << endl;
				p = p->next;
				delete pDel;
			}
		}

		void push_back(ListType value) {
			//1 Створюємо новий вузол
			DNode<ListType>* el = new DNode<ListType>(value);
			//2.1 Якщо перший вузол в списку
			if (head == nullptr) {
				head = tail = el;
			}
			else {//2.2 Якщо НЕ перший вузол в списку
				//В хвіст зберігаємо адресу нового вузла (привязка вузлів)
				tail->next = el;
				el->prev = tail; //Новий вузол вказуємо на хвіст

				//Оновлюємо значення хвоста - зсовуємо хвіст
				tail = el;
			}
		}

		void show() {
			if (head == nullptr) cout << "List is empty!\n";

			DNode<ListType>* p = head;
			while (p != nullptr) {
				p->show();
				p = p->next;
			}
		}

		void showReverse() {
			//Вивести список в зворотньому порядку
			if (head == nullptr) cout << "List is empty!\n";

			DNode<ListType>* p = tail;
			while (p != nullptr) {
				cout << p->info << " ";
				p = p->prev;
			}
			cout << endl;
		}

		DNode<ListType>* seach(ListType value) {
			//Знайти вузол з зазначеним value
			//Якщо такого вузла немає, то повернути nullptr
			DNode<ListType>* p = head;
			while (p != nullptr) {
				if (p->info == value)
					return p;

				p = p->next;
			}
			return nullptr;
		}
	};
}
