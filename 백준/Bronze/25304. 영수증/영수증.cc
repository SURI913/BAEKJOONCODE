#include <iostream>
using namespace std;

class Item {
	int cost, amount;
public:
	Item(int c = 0, int a = 0): cost {c}, amount{a} {}//생성자
	//설정자
	void setCost(int c) { cost = c; }
	void setAmount(int a) { amount = a; }

	Item operator+= (const Item& other); 
	void operator== (const Item& other);
};

Item Item::operator+= (const Item& other) {
	this->cost += other.cost * other.amount;
	return *this;
}

//금액 비교
void Item::operator== (const Item& other) {
	if (this->cost == other.cost) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
}


int main() {
	int c, a, n;
	Item chack;

	//총 금액
	int t;
	cin >> t;
	Item total(t, 0);

	//구매 갯수
	cin >> n;
	Item* buy = new Item[n];

	//구매금액 설정
	for (int i = 0; i < n; i++) {
		cin >> c >> a;
		buy[i].setCost(c);
		buy[i].setAmount(a);

		//총 금액 계산
		chack += buy[i];
	}

	//총 금액 합산 체크
	total == chack;
	return 0;
}