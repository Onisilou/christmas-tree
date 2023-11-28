#include <iostream>
using namespace std;
int main(){
	int i, j, z, tree,count=1;
	cout << "How big do you want the tree? (i recommend sizes between 20 and 60) ";
	cin >> tree;
	for(i=0;i<=tree-1;i++){
		for (j = 1; j <= tree - i; j++)
			cout << " ";
		for(z=1;z<=count;z++)
		cout << "*";
		count = count + 2;
		cout << endl;
		
	}
	int trunk_h;
	int trunk_w;
	trunk_h = tree / 2;
	trunk_w = tree;
	for (i = 1; i <= trunk_h; i++){
		for (j = 1; j <= trunk_w-tree/4;j++)
			cout << " ";
		for (j = 1; j <= trunk_w/2;j++)
			cout << "*";
		cout << endl;
	}
		


	
}