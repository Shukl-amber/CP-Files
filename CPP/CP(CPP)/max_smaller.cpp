#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for(int i = 0; i < n; i++)
            cin >> a[i];
        
        vector<int> sortedPos;
        for(int i = 0; i < n; i++)
            sortedPos.push_back(i);
        
        sort(sortedPos.begin(), sortedPos.end(), [&](int i, int j) {
            return a[i] < a[j];
        });
        
        vector<int> perm(n);
        for(int i = 0; i < n; i++) {
            int pos = sortedPos[i];          
            int nextPos = sortedPos[(i+1)%n]; 
            perm[pos] = nextPos;              
        }
        
        int score = 0;
        for(int i = 0; i < n; i++) {
            if(a[perm[i]] <= a[i]) {
                score++;
            }
        }
        
        cout << score << endl;
        for(int i = 0; i < n; i++) {
            cout << perm[i] + 1;  
            if(i < n - 1) cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}
