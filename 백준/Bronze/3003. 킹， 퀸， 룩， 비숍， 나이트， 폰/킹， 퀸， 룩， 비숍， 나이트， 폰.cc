#include<iostream>
using namespace std;

class Chess {
	int king, queen, rook, bishop, knight, pawn;
public:
	Chess(int k=1, int q=1, int r=2, int b=2, int n=2, int p=8) : king{k}, queen{q}, rook{r}, bishop{b}, knight{n}, pawn{p}{} //생성자
	//기본값은 체스 세팅에 맞춘다
	Chess operator-(const Chess& other); //연산자 중복 사용
	void print();
};

Chess Chess:: operator-(const Chess& other) {
	this->king -= other.king;
	this->queen -= other.queen;
	this->rook -= other.rook;
	this->bishop -= other.bishop;
	this->knight -= other.knight;
	this->pawn -= other.pawn;
	//현재 객체에 매개변수 객체만큼 sub
	return *this;
}

void Chess::print() {
	cout << king << " " << queen << " " << rook << " " << bishop << " " << knight << " " << pawn << endl;
}

int main() {
	Chess black;

	int k=0, q=0, r=0, b=0, n=0, p=0;
	cin >> k >> q >> r >> b >> n >> p;
	Chess white(k, q, r, b, n, p);
	
	
	Chess chack = black - white;
	chack.print();

	return 0;
}