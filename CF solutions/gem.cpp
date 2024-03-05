 #include <bits/stdc++.h> 
using namespace std; 
 
int maximize_gems(int n, vector<pair<int, int>>& d) { 
    sort(d.begin(), d.end()); 
    int s_min = 0, s_max = 0, g_min = d[0].second, g_max = d[0].second; 
    for (int i = 1; i < n; ++i) { 
        if (d[i].first == d[i-1].first + 1) { 
            g_min = min(g_min, d[i].second); 
            g_max = max(g_max, d[i].second); 
        } else { 
            s_min += g_min; 
            s_max += g_max; 
            g_min = d[i].second; 
            g_max = d[i].second; 
        } 
    } 
    s_min += g_min; 
    s_max += g_max; 
    return max(s_min, s_max); 
} 
 
int main() { 
    int n; 
    cin >> n; 
    vector<pair<int, int>> d(n); 
    for (int i = 0; i < n; ++i) { 
        char colon; 
        cin >> d[i].first >> colon >> d[i].second; 
    } 
    cout << maximize_gems(n, d) << endl; 
    return 0; 
}