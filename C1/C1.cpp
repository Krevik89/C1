#include <iostream>
#include <string>

using namespace std;
void f() {
    int znak;
    string str; cin >> str;
    long long i = 0;
    long long i1 = 0;
    try {
        if ((znak = str.find_first_of("+-/*",1)) == string::npos)
            throw "Нету знака\n";
        
        i  = stoll(str.substr(0, znak));
        i1 = stoll(str.substr(znak+1));
        
        if (str[znak] == '+') {
            if (i + i1 > INT_MAX || i + i1 < INT_MIN)
                throw"Число большое чем граница диапазона INT";
            cout << i + i1;
        }
        if (str[znak] == '-') {
            if (i - i1 > INT_MAX || i - i1 < INT_MIN)
                throw"Число большое чем граница диапазона INT";
            cout << i - i1;
        }
        if (str[znak] == '*') {
            if (i * i1 > INT_MAX || i * i1 < INT_MIN)
                throw"Число большое чем граница диапазона INT";
            cout << i * i1;
        }
        if (str[znak] == '/') {
            if (i / i1 > INT_MAX || i / i1 < INT_MIN)
                throw"Число большое чем граница диапазона INT";
            cout << i / i1;
        }
    }
    catch (const char* s) {
        cout << "Eror " << s;
    }
    catch (const  out_of_range& e) {
            cout << "Eror " << e.what();
    }
}

int main()
{
    setlocale(LC_ALL, "");
    f();
  
}


