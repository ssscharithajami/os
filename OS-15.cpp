#include <iostream>
#include <vector>
using namespace std; 
struct Node { 
	int block; 
	Node* next; 
}; 
int main() { 
	int n, f, length; 
	cout << "Enter total number of disk blocks: "; 
	cin >> n; 
	vector<int> block(n, 0);
cout << "Enter number of files: ";
cin >> f; 
for (int i = 0; i < f; i++) {
cout << "\nEnter number of blocks required for file " << i+1 << ": ";
cin >> length; 
Node* head = nullptr; 
Node* temp = nullptr; 
cout << "Enter block numbers: "; 
for (int j = 0; j < length; j++) { 
	int b; 
	cin >> b; 
	if (b < n && block[b] == 0) { 		block[b] = 1;
Node* newNode = new Node{b, nullptr}; 
			if (!head) head = newNode; 
			else temp->next = newNode; 
			temp = newNode; 
	} else { 
			cout << "Block " << b << " already allocated or invalid.\n"; 
	} 
} 
cout << "File " << i+1 << " allocated blocks (linked): "; 
temp = head; 
while (temp) { 
	cout << temp->block << " -> ";
			temp = temp->next; 		} 
		cout << "NULL" << endl; 	} 
	return 0; 
	} 
