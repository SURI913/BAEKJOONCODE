#include <cstdlib>
#include <iostream>
using namespace std;

//오류 처리 함수
inline void error(const char* message) {
	cout << message << endl;
	exit(1);
}

const int MAX_STACK_SIZE = 100000; //스택의 최대 크기 설정
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
		if (isEmpty())  error("스택 공백 에러");
		else return data[top--];
	}
};

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0); //c++ cin 사용시 실행속도 보완을 위한 구문
	ArrayStack coin;

	int size, n;
	cin >> size;
	for (int i = 0; i < size; i++) {
		cin >> n;
		if (n == 0) {
			coin.pop();
		}
		else coin.push(n);
	}
	int result = 0;
	
	while (!coin.isEmpty()) {
		if (!coin.isEmpty()) {
			result += coin.pop();
		}
	}
	cout << result;
	return 0;
}