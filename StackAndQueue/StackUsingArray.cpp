#include <iostream>
#include <vector>
#include <string>

using namespace std;

int top = -1;

void push(int i, vector<int>& nums) { 
    nums.push_back(i);
    top++;
}

void peek(const vector<int>& nums) {
    if (top >= 0)
        cout << nums[top] << endl;
}

void pop(vector<int>& nums) {
    if (top >= 0) {
        nums.pop_back();
        top--;
    }
}

void list(vector<int> &nums){
    for( int i : nums){
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    vector<int> nums;
    string s = "";

    while (s != "stop") {
        cout << "Enter the operation: ";
        cin >> s;

        if (s == "push") {
            int temp;
            cout << "Enter number to push: ";
            cin >> temp;
            push(temp, nums);
        }
        else if (s == "peek") {
            peek(nums);
        }
        else if (s == "pop") {
            pop(nums);
        }
        else if(s =="list"){
            list(nums);
        }
    }
}
