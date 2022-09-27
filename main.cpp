#include <iostream>

using namespace std;

int userInput(){
    int num;
    cout << "Enter the length of the sequence:\n";
    cin >> num;
    return num;
}

int main() {
    srand(int(time(nullptr))%60);
    int len = userInput();
    for (int i = 0; i < len; i++) {
        int n = rand();
        cout << n <<endl;
    }
    return 0;
}
