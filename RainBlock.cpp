#include <bits/stdc++.h>
using namespace std;

// Function to compute the maximum amount of rainwater that can be trapped
int maxRainWater(vector<int> heights) {
    int n = heights.size();
    if (n == 0) return 0;
    
    vector<int> leftMax(n), rightMax(n);
    leftMax[0] = heights[0];
    rightMax[n - 1] = heights[n - 1];
    
    // Fill leftMax array
    for (int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i - 1], heights[i]);
    }
    
    // Fill rightMax array
    for (int i = n - 2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i + 1], heights[i]);
    }
    
    int water = 0;
    for (int i = 0; i < n; i++) {
        water += min(leftMax[i], rightMax[i]) - heights[i];
    }
    
    return water;
}

int main() {
    int n;
    cout << "Enter the number of blocks: ";
    cin >> n;
    
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter the height of block " << i + 1 << ": ";
        cin >> heights[i];
    }
    
    int water = maxRainWater(heights);
    cout << "Maximum amount of rainwater that can be stored: " << water << endl;

    return 0;
}
