#include <iostream>
#include <cstring>
using namespace std;
int main() {
    const int max = 1000;
    char *phrase = new char[max];
    cout << "Enter a string: " << endl;
    cin.getline(phrase,max);
    int length = strlen(phrase);
    for (int i = 0; i < length / 2; i++) {
        char temp = phrase[i];
        phrase[i] = phrase[length - i - 1];
        phrase[length - i - 1] = temp;
    }
    cout << "Reversed string: " << phrase << endl;
    delete[] phrase;
    return 0;
}