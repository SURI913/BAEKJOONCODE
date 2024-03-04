#include<iostream>
#define MAX_STACK_DATA 1000000
int data[MAX_STACK_DATA];
class Stack {
	int top;
public:
	Stack() {
		top = -1;
	}
	void Push(int _value) {
		top++;
		data[top] = _value;
	}
	int Pop() {
		if (Is_Empty()) {
			//비어있으면
			return - 1;
		}
		return data[top--];
	}

	int Peek() {
		if (Is_Empty()) return -1;
		return data[top];
	}

	bool Is_Empty() {
		if (top < 0) return 1;
		else return 0;
	}

	int Size() {
		return top+1;
	}
};

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	Stack stack;
	
	int N;
	std::cin >> N;
	while (N--)
	{
		int oder;
		std::cin >> oder;
		switch (oder){
		case 1:
			int value;
			std::cin >> value;
			stack.Push(value);
			break;
		case 2:
			std::cout << stack.Pop() << '\n';
			break;
		case 3:
			std::cout << stack.Size() << '\n';
			break;
		case 4:
			std::cout << stack.Is_Empty() << '\n';
			break;
		case 5:
			std::cout << stack.Peek() << '\n';
			break;
		default:
			break;
		}

	}
	return 0;
}