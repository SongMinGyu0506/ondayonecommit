#include <iostream>
#include <vector>
using namespace std;

void DFS(int start, vector<vector<int>> jungjum, bool check_vertical[]) {
    check_vertical[start]=true;
    printf("%d ",start);
    vector<int> temp =jungjum[start];
    for (int i = 0; i < jungjum[start].size(); i++)
    {
        int D1 = jungjum[start][i];
        if(check_vertical[D1] == false) {
            DFS(jungjum[start][i],jungjum,check_vertical);
        }
    }
}

int main() {
    int N,M,S;
    cin >> N >> M >> S;
    bool check_vertical[N+1] = {false};
    //vector<bool> check_vertical(N,false);
    vector<vector<int>> jungjum(N);

    for (int i = 0; i < M; i++)
    {
        int N1,N2;
        cin >> N1 >> N2;
        jungjum[N1].push_back(N2);
    }
    printf("%d\n",jungjum[4].size());
    vector<int> temp2 = vector<int>(jungjum[4]);
    printf("%d\n",temp2.size());
    //DFS(S,jungjum,check_vertical);
    return 0;
    
}