#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int lenSeqInput(){
    int num;
    cout << "Enter the length of the sequence:\n";
    cin >> num;
    return num;
}

int InputPow(){
    int power;
    cout << "Enter the power of your polynomial:\n";
    cin >> power;
    return power;
}

vector <double> InputCoefs(int power) {
    vector<double> coefs;
    for (int i = 0; i < power + 1; i++) {
        double coef;
        cout << "Enter the coefficient of " << power - i << "th power:\n";
        cin >> coef;
        coefs.push_back(coef);
    }
    return coefs;
}

void countVals(){
    int p = InputPow();
    vector <double> cs = InputCoefs(p);
    for (int i = 0; i <= 2; i++){
        double val = 0;
        for (int j=0;j<cs.size();j++){
            val += cs[j]*pow(i, p-j);
        }
        cout <<"value of the polynomial at point "<<i<<": "<<val<<endl;
    }
}

int main() {
    srand(int(time(nullptr))%60);
    int len = lenSeqInput();
    int s = 0;//counter for sum of evens
    int max = INFINITY*(-1);
    int min = INFINITY;
    for (int i = 0; i < len; i++) {
        int n = rand();

        if (n <= min)
            min = n;
        if (n >= max)
            max = n;

        if (n%2 == 0)
            s += n;

        cout << n <<endl;
    }
    cout<<"min: "<<min<<endl<<"max: "<<max<<endl<<"sum of even numbers: "<<s<<endl;
    countVals();
    return 0;
}
