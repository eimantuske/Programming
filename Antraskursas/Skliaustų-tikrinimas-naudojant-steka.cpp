#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool arTeisingiSkliaustai(string tekstas) {
    stack<char> s;

    for (char c : tekstas) {
        if (c == '(' || c == '{' || c == '[') {
            s.push(c);
        }
        else if (c == ')' || c == '}' || c == ']') {
            if (s.empty()) {
                return false;
            }

            char virsus = s.top();
            
            if ((c == ')' && virsus == '(') ||
                (c == '}' && virsus == '{') ||
                (c == ']' && virsus == '[')) {
                s.pop();
            } else {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    string testai[] = {
        "(a+b)*(c-d",
        "((a+b)*c)",
        "(a+b",
        "(a+b))",
        ")((a+b)(",
        "([{}])",
        "([)]",
        "{[()]}",
        "{[(])}"
    };

    for (string testas : testai) {
        if (arTeisingiSkliaustai(testas)) {
            cout << testas << " -> Teisinga\n";
        } else {
            cout << testas << " -> Klaida\n";
        }
    }

    return 0;
}