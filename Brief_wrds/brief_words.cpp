#include <bits/stdc++.h>
using namespace std;

unordered_map<string, string> generateShortForms(vector<string>& dictionary) {
    sort(dictionary.begin(), dictionary.end(), [](const string& a, const string& b) {
        return a.length() > b.length();
    });
    
    unordered_map<string, string> shortForms;
    
    for (const string& word : dictionary) {
        if (word.length() <= 4) {
            shortForms[word] = word;
        } else {
            for (int i = 0; i < word.length(); i++) {
                for (int j = i + 1; j <= min(i + 4, static_cast<int>(word.length())); j++) {
                    string shortForm = word.substr(i, j - i);
                    if (shortForms.find(shortForm) == shortForms.end()) {
                        shortForms[word] = shortForm;
                        break;
                    }
                }
            }
            if (shortForms.find(word) == shortForms.end()) {
                shortForms[word] = word;
            }
        }
    }
    
    return shortForms;
}

int main() {
    int n;cin>>n;
    vector<string> dictionary;
    for (int i = 0;i < n ; i++) {
        string s;cin>>s;
        dictionary.push_back(s);
    }

    unordered_map<string, string> shortForms = generateShortForms(dictionary);
    
    for (const auto& pair : shortForms) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    return 0;
}