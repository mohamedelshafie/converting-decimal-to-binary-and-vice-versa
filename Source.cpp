//converting decimal to binary and vice versa
#include <iostream>
using namespace std;
int main(){
	while (1){
		int choice;
		cout << "to convert from decimal to binary click 1"<<endl;
		cout << "to convert from binary to decimal click 2"<<endl;
		cin >> choice;
		if (choice == 1){
			int decimal;
			cout << "enter a number: ";
			cin >> decimal;
			int b ;
			char binary[8];
			//char *pbinary = binary;
			for (int i = 0; i < 8; i++){
				if (decimal % 2 != 0){
					binary[i] = '1';
				}
				else{
					binary[i] = '0';
				}
				decimal = decimal / 2.0;
			}
			cout << "the equivalent binary number: ";
			for (int j = 7; j >= 0; j--){
			cout  << binary[j] ;
			}
			cout << endl;
		}
		if (choice == 2){
		char inbinary[9];
		cout << "Enter a binary number: ";
		cin >> inbinary;
		int d = 0;
		for (int k = 0; k < 9; k++){
			if (inbinary[k] == '1'){
				d = d + pow(2, 7 - k);
			}
		}
		cout << "The equivalent decimal: " << d << endl;
	   }
	}
}