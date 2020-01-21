/*
https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0/

Given an unsorted array A of size N of non-negative integers, find a continuous sub-array which adds to a given number S.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of two lines. The first line of each test case is N and S, where N is the size of array and S is the sum. The second line of each test case contains N space separated integers denoting the array elements.

Output:
For each testcase, in a new line, print the starting and ending positions(1 indexing) of first such occuring subarray from the left if sum equals to subarray, else print -1.

Constraints:
1 <= T <= 100
1 <= N <= 107
1 <= Ai <= 1010

Example:
Input:
2
5 12
1 2 3 7 5
10 15
1 2 3 4 5 6 7 8 9 10
Output:
2 4
1 5

Explanation :
Testcase1: sum of elements from 2nd position to 4th position is 12
Testcase2: sum of elements from 1st position to 5th position is 15

*/
#include<iostream>
using namespace std;


int main() { 
    // For getting input from input.txt file 
    freopen("input.txt", "r", stdin); 

    // Printing the Output to output.txt file 
    freopen("output.txt", "w", stdout); 

    unsigned int t, n, s, i, j;
    unsigned int x, y, z;
    cin>>t;
    while(t--){
        cin>>n>>s;
        x = y = z = 0;
        unsigned int a[n];
        for(i = 0; i < n; i++)
            cin>>a[i];
        i = 0;
        while(z != s && i < n){
            x = y = i;
            while(z != s && x < n && y < n){
                if(z < s){
                    y++;
                }else x++;
                z = 0;
                for(i = x; i <= y; i++){
                    z += a[i];
                }
            }
            i++;
        }
        if(z == s)
            cout<<x+1<<" "<<y+1;
        else cout<<"-1";
        cout<<endl;
    }
    
    return 0;
}
