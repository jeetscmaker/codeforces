#include <vector>
#include <iostream>
#include <stack>

using namespace std;

stack<string> solve(int start, string &login, vector<stack<string>> &dp, vector<string> &pass) {
    stack<string> sol;
    if(start == login.size()) {
        return sol;
    }
    // else
    if(dp[start].top() == "UNVISITED") {
        for(int i = 0; i < pass.size(); i++) {        
            bool contains_pass_i = true;
            if(pass[i].size() > login.size() - start) {
                contains_pass_i = false;
            } else {
                for(int j = 0; j < pass[i].size(); j++) {
                    if(pass[i][j] != login[j + start]) {
                        contains_pass_i = false;
                        break;
                    }                    
                }            
            }

            if(contains_pass_i) {
                stack<string> sub_sol = solve(start + pass[i].size(), login, dp, pass);  
                if(sub_sol.size() == 0) {
                    sol.push(pass[i]);
                    dp[start] = sol;
                    return sol;
                }
                // else
                if(sub_sol.top() != "WRONG PASSWORD") {
                    sub_sol.push(pass[i]);
                    dp[start] = sub_sol;
                    return sub_sol;
                }
            }                    
        }

        // if we couldn't find any pass at index start
        sol.push("WRONG PASSWORD");
        dp[start] = sol;
        return sol;
    }
    
    return dp[start];    
}


int main() {
    int t;
    cin >> t;
    
    for(int q = 0; q < t; q++) {
        int n;
        cin >> n;
        
        vector<string> pass(n);
        for(int i = 0; i < n; i++) {
            cin >> pass[i];
        }
        
        string loginAttempt;
        cin >> loginAttempt;
        
        stack<string> unvisited;
        unvisited.push("UNVISITED");        
        vector<stack<string>> dp(loginAttempt.size(), unvisited);
        
        stack<string> solution = solve(0, loginAttempt, dp, pass);
        while(!solution.empty()) {
            cout << solution.top() << " ";
            solution.pop();
        }
        cout << endl;
    }
    
    return 0;
}

