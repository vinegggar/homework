#include <iostream>
#include <cmath>

using namespace std;

int userInput(){
    int num;
    cout << "Enter the length of the sequence:\n";
    cin >> num;
    return num;
}


int main() {
    int max = INFINITY*(-1);
    int min = INFINITY;
    srand(int(time(nullptr))%60);
    int len = userInput();
    for (int i = 0; i < len; ++i) {
        int n = rand();
        if (n <= min)
            min = n;
        else if (n>=max)
            max = n;
        cout << n <<endl;
    }
    cout<<"min: "<<min<<endl<<"max: "<<max;
    return 0;
}
