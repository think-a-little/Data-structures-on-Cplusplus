#include <iostream>
#include "Stack.h"
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#define DBG_NEW new( _NORMAL_BLOCK , __FILE__ , __LINE__ )
#define newDBG_NEW

using namespace std;

void test();

int main() {
	test();
	_CrtDumpMemoryLeaks();
}

void test() {
	Stack<int> stack;
	stack.push(3);
	stack.push(2);
	stack.push(1);
	cout << stack.top() << endl;
	stack.pop();
	cout << stack.top() << endl;
	stack.pop();
	cout << stack.top();
}