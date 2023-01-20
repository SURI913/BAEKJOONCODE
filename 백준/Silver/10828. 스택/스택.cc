//ArrayStack.h : 배열을 이용한 int 스택 클래스
#include <cstdlib>
#include <iostream>
using namespace std;

//오류 처리 함수
inline void error(const char* message) {
	cout << message << endl;
	exit(1);
}

const int MAX_STACK_SIZE = 10000; //스택의 최대 크기 설정
class ArrayStack {
	int top;	//요소의 개수
	int data[MAX_STACK_SIZE];	//요소의 배열
public:
	ArrayStack() { top = -1; } //스택 생성자 (ADT의 create()역할)
	~ArrayStack() {} //소멸자
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE - 1; }

	void push(int e) {
		if (isFull()) error("스택 포화 에러");
		else data[++top] = e;
	}

	int pop() {
		if (isEmpty()) return -1;
		else return data[top--];
	}

	int peek() {
		if (isEmpty()) return -1;
		else return data[top];
	}

	void size() { //스택의 개수 출력
		cout << top + 1 << endl;
	}
};

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0); //c++ cin 사용시 실행속도 보완을 위한 구문

	int size;
	cin >> size;

	ArrayStack s;

	for (int i = 0; i < size; i++) {
		string line;
		cin >> line;
		if (line == "push") {
			int n;
			cin >> n;
			s.push(n);
		}
		else if (line == "pop")  cout << s.pop() << endl;
		else if (line == "size")  s.size();
		else if (line == "empty") cout << s.isEmpty() << endl;
		else if (line == "top") cout << s.peek() << endl;
	}
	return 0;
}