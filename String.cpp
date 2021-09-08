#include <bits/stdc++.h>
using namespace std;

class String
{
public:
    string s;
    String();
    String(string str){
        s = str;
    }
    // checks whether string s ends with a set of characters r or not.
    bool ends_with(string r) {
        int n = s.length();
        int m = r.length();
        // original string 's' must be bigger than or equal to the given suffix 'r'.
        // m>n means that the suffix 'r' is bigger than the original string which is not possible.
        if(m>n) return false;

        bool endsWith = true;
        for (int i = n-1, j = m-1; i>=0 && j>=0; --j, --i)
        {
            if (s[i] != r[j])
            {
                endsWith = false;
                break;
            }
        }
        return endsWith;
    }

    string getS(){
        return s;
    }
};

// checks whether string s ends with a set of characters r or not.
/*bool ends_with(string s, string r) {
    int n = s.length();
    int m = r.length();
    // original string 's' must be bigger than or equal to the given suffix 'r'.
    // m>n means that the suffix 'r' is bigger than the original string which is not possible.
    if(m>n) return false;

    bool endsWith = true;
    for (int i = n-1, j = m-1; i>=0 && j>=0; --j, --i)
    {
        if (s[i] != r[j])
        {
            endsWith = false;
            break;
        }
    }
    return endsWith;
}*/

int main() {
    String s("textbook");
    string r = "book";
    string t = "sook";
    cout << s.getS() << " ends with " << r << ": " << (s.ends_with(r) ? "true" : "false") << endl;
    cout << s.getS() << " ends with " << t << ": " << (s.ends_with(t) ? "true" : "false") << endl;
    return 0;
}