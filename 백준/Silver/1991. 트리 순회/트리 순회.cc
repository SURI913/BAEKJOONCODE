#include <iostream>
#include <map>
using namespace std;

string resultPreorder = "";
string resultInorder = "";
string resultPostorder = "";
map<char, pair<char, char>> tree;

void PreorderTraversal( char node) {
	//전위 순회
	if (node != '.') {
		resultPreorder += node;
		PreorderTraversal(tree[node].first);       // 왼
		PreorderTraversal(tree[node].second);      // 오른 
	}

}
void Inorder(char node) {
	if (node != '.') {
		Inorder(tree[node].first);       // 왼
		resultInorder += node;
		Inorder(tree[node].second);      // 오른 
	}
}

void Postorder(char node) {
	if (node != '.') {
		Postorder(tree[node].first);       // 왼
		Postorder(tree[node].second);      // 오른
		resultPostorder += node;
	}
}


int main() {

	int num;
	cin >> num;
	for (int i = 0; i < num; i++) {
		char inputParent, inputLeft, inputRight;
		cin >> inputParent >> inputLeft >> inputRight;
		tree[inputParent] = { inputLeft, inputRight };
	}

	PreorderTraversal('A');
	Inorder('A');
	Postorder('A');

	cout << resultPreorder << "\n";
	cout << resultInorder << "\n";
	cout << resultPostorder << "\n";
	
	
	return 0;
}