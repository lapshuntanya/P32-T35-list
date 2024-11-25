#pragma once
#include <iostream>
using std::cout;
using std::endl;

namespace {

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
}