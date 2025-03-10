#include <iostream>
#include <fstream>
#include <string>
using namespace std;
//linear search function
bool linearsearch(int arr[],int value){
	for (int i = 0; i < 3; i++){
		if (arr[i] == value){
			cout << "It is present in index " << i << endl;
			return true;
		}	
	}
	return false;
}
int fibseries(int n) {
	int a = 0, b = 1, result;

	
	if (n == 0) return a;
	if (n == 1) return b;

	
	for (int i = 2; i <= n; i++) {
		result = a + b;
		a = b;
		b = result;
	}
	return result;  
}
int main(){
	//pointer
	int* arr = new int[3];
	for (int i = 0; i < 3; i++){
		arr[i] = i;
	}
	int value = 2;
	if (linearsearch(arr, value)==true){
		cout << "The value is in it !" << endl;
	}
	else{
		cout << "The value is not present in the array!" << endl;
	}
	//file handling
	string filename = "fil";
	ofstream fin;
	fin.open(filename);
	if (fin.is_open()){
		cout << "Open Successfully!" << endl;
	}
	else{
		cout << "File didnt open!" << endl;
	}
	//fibenoni series
	int number = 24;
	cout << fibseries(number) << endl;
	cout << "hi" << endl;
	system("pause");
	return 0;
}