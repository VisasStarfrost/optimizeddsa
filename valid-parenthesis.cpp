//runtime 0ms (beats 100%)

#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(const string& s) {
        stack<char> stk;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            } else {
                if (stk.empty()) return false; 
                
                char top = stk.top();
                if ((c == ')' && top == '(') ||
                    (c == '}' && top == '{') ||
                    (c == ']' && top == '[')) {
                    stk.pop();
                } else {
                    return false; 
                }
            }
        }
        return stk.empty(); 
    }
};
