#include<string.h>
#include<iostream>

using namespace std;
void palindromeCheck(string s) {
    string str2 = "";
    int n = s.size();

    for(int i=n-1;i>=0;i--) {
        str2.push_back(s[i]);
    }
    if(s.compare(str2) == 0)
        cout << "Palindrome.";
    else 
        cout << "Not a Palindrome";
}
int longestPalindrome(string s) {
    int n = s.length();
    string str2 = "";
    for(int i = n - 1; i >= 0; i--) {
        str2.push_back(s[i]);
    }
    if(s.compare(str2) == 0) {
        return n-1;
    } else {
        return n;
    }
}
int anagram(string s, string key) {
    int n = s.size();
    int k = key.size();
    for(int i=0;i<n-1;i++) {
        string str2 = s.substr(i,k);
        if(str2.compare(key) == 0) {
            return i;
        }
    }
    return -1;
}
void permute(string s, string a, int l, int r)  
{  
    // Base case  
    if (l == r) {
        if(anagram(s,a) != -1) {
            cout << anagram(s,a) << " ";
        }
    }
    else
    {  
        // Permutations made  
        for (int i = l; i <= r; i++)  
        {  
            // Swapping done  
            swap(a[l], a[i]);  
  
            // Recursion called  
            permute(s,a, l+1, r);  
  
            //backtrack  
            swap(a[l], a[i]);  
        }  
    }  
} 

void anagramCheck(string s, string key) {
    int n = s.size();
    int k = key.size();

    for(int i=0;i<=n-k;i++) {
        string temp = s.substr(i,k);
        for(int p=0;p<k;p++) {
            if(temp.find(key[p]) <= k-1 && key.find(temp[p]) <= k-1) {
                cout << i;
                break;
            } else {
                break;
            }
        }
    }
}

int main() {
    string str1; cin >> str1;
    string key; cin >> key;
    // palindromeCheck(str1);
    // int length = longestPalindrome(str1);
    // cout << length;
    anagramCheck(str1, key);
    // permute(str1, key, 0, key.size()-1);
 }