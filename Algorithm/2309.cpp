#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solution(vector<int> length) {
    int sum_length = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = i+1; j < 9; j++)
        {
            for (int a = j+1; a < 9; a++)
            {
                for (int b = a+1; b < 9; b++)
                {
                    for (int c = b+1; c < 9; c++)
                    {
                        for (int d = c+1; d < 9; d++)
                        {
                            for (int e = d+1; e < 9; e++)
                            {
                                if(length[i]+length[j]+length[a]+length[b]+length[c]+length[d]+length[e] == 100) {
                                    cout << length[i] << endl;
                                    cout << length[j] << endl;
                                    cout << length[a] << endl;
                                    cout << length[b] << endl;
                                    cout << length[c] << endl;
                                    cout << length[d] << endl;
                                    cout << length[e] << endl;
                                }
                            }
                            
                        }
                        
                    }
                    
                }
                
            }
            
        }
        
    }
    
}

int main() {
    vector<int> length;
    int temp;
    for (int i = 0; i < 9; i++)
    {
        cin >> temp;
        length.push_back(temp);
    }
    stable_sort(length.begin(),length.end());
    solution(length);
    return 0;
}