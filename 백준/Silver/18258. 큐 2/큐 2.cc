#include<iostream>
#include<string>

#define MAX_DATA_SIZE 2000001

int data[MAX_DATA_SIZE];
class queue {

public:
	int front = -1, rear = -1;

	void Push(int _value) {
		if (Is_Full()) return;
		else {
			data[(++rear) % MAX_DATA_SIZE] = _value;
		}
	}

	int Pop() {
		if (Empty()) {
			return -1;
		}
		else {
			return data[(++front) % MAX_DATA_SIZE];
		}
	}

	bool Empty() {
		if (rear-front == 0) return true;
		else return false;
	}

	int Get_Front() {
		if (!Empty() && !Is_Full()) {
			return data[(front+1)% MAX_DATA_SIZE];
		}
		else return -1;
	}

	int Get_Back() {
		if (!Empty()) {
			return data[rear% MAX_DATA_SIZE];
		}
		else return -1;
	}

	int Size() {
		return rear - front;
	}

	bool Is_Full() {
		if (rear == MAX_DATA_SIZE - 1) {
			return true;
		}
		else return false;
	}
};


int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);
	
	queue my_queue;

	int N;
	std::cin >> N;

	//순서대로 받음
	while (N--)
	{
		std::string order;
		std::cin >> order;
		if (order == "push") {
			int tmp;
			std::cin >> tmp;
			my_queue.Push(tmp);
		}
		else if (order == "pop") {
			std::cout << my_queue.Pop() << '\n';
		}
		else if (order == "size") {
			std::cout << my_queue.Size() << '\n';
		}
		else if (order == "empty") {
			std::cout << my_queue.Empty() << '\n';
		}
		else if (order == "front") {
			std::cout << my_queue.Get_Front() << '\n';
		}
		else if (order == "back") {
			std::cout << my_queue.Get_Back() << '\n';
		}
	}

	return 0;
}