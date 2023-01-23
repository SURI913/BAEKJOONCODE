#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

//오류 처리 함수
inline void error(const char* message) {
	cout << message << endl;
	exit(1);
}

const int MAX_STACK_SIZE = 100000; //스택의 최대 크기 설정
class ArrayStack {
	int top;	//요소의 개수
	char data[MAX_STACK_SIZE];	//요소의 배열
public:
	ArrayStack() { top = -1; } //스택 생성자 (ADT의 create()역할)
	~ArrayStack() {} //소멸자
	bool isEmpty() { return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE - 1; }

	void push(char e) {
		if (isFull()) error("스택 포화 에러");
		else data[++top] = e;
	}

	char pop() {
		if (isEmpty())  error("스택 공백 에러");
		else return data[top--];
	}
};

bool checkMatching() {
	ios_base::sync_with_stdio(0), cin.tie(0); //c++ cin 사용시 실행속도 보완을 위한 구문
	ArrayStack stack; //스택 객체
	string ch;
	bool isValid = 1;
	cin >> ch;
	for (int j = 0; j < ch.size(); j++) {
		if ( ch[j] == '(' ) stack.push(ch[j]);
		else if ( ch[j] == ')' ) {
			if (stack.isEmpty()) {
				isValid = 0;
				break;
			}
			else {
				stack.pop();
				isValid = 1;
			}
		}
	}
	if ( !stack.isEmpty() || isValid == 0)
		cout << "NO" << endl;
	else if(stack.isEmpty() && isValid == 1)
		cout << "YES" << endl;

	return stack.isEmpty();
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		checkMatching();
	}

	return 0;
}