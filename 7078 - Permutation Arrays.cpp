#include <stdio.h>
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

int main(void){

	char ch;
	int num, j=0;
	string position, value;
	stringstream tmpposition, tmpvalue;

	scanf("%d", &num);
	scanf("%c", &ch);

	for(int i=0; i<num; i++){
		scanf("%c", &ch);
		string finalposition[5000];
		int table[5000];
		getline(cin, position);
		tmpposition << position;

		getline(cin, value);
		tmpvalue << value;

		j =0;
		while(tmpposition>>table[j]){
			j++;
		}
		tmpposition.clear();

		j = 0;
		while(tmpvalue >> finalposition[table[j]]){
			j++;
		}
		tmpvalue.clear();

		for(int k=1; k<=j; k++){
			cout << finalposition[k] <<endl;
		}
		if(i!=num-1){
			cout<<endl;
		}
	}

	return 0;
}
