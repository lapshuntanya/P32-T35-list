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
			next = = prev = nullptr;
		}
		void show() {
			cout << "Info: " << info << endl;
			cout << "\tPrev: " << prev << "\n";
			cout << "\tNext: " << next << "\n\n";
		}
	};
}
