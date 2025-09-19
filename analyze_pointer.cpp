#include<iostream>
using namespace std;
void analyze_pointer(int *ptr){
	cout <<"Memory Address: " << ptr << endl;
	cout <<"Value: " << *ptr << endl;
}
int main(){
	int iValue = 47;
	analyze_pointer(&iValue);
	int *ivalue = new int;
	*ivalue = 41;
	analyze_pointer(ivalue);
}