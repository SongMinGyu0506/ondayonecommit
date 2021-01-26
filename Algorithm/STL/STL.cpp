#include <iostream>
#include <algorithm>
#include <utility>

#define MAP

using namespace std;
/*
    STL(Standard Template Library)
    C++의 템플릿을 사용하여 표준으로 정리된 라이브러리
    반복자 / 컨테이너 / 알고리즘 함수객체 등의 라이브러리로 구성
*/

/*
    시퀀스 컨테이너
    vector / list / string / deque 등등..
    자료를 입력한 순서대로 처리 저장,검색에 불리
    적은 양의 자료나 검색속도 불필요시 사용
*/

/*
    연관 컨테이너
    set / map / multiset / multimap 등등..
    일정한 규칙에 따라 자료를 조직화하여 저장
    자료를 정렬하여 저장하기 때문에 검색에 유리
    많은 양의 자료나 검색 속도가 중요한 경우에 사용함
*/

/*
    어댑터 컨테이너
    시퀀스 컨테이너를 변형시켜 스택 큐 우선순위 큐 형태로 저장
*/


#ifdef VECTOR
#include <vector>
int main() {
    vector<int> vec1;                                           // STL은 제네릭 형태로 구성
    vector<int> vec2(10);                                       // vector를 크기 10으로 설정
    vector<int> vec3(10, 1);                                    // vector를 크기 10으로 설정하고 1로 초기화
    vector<vector<int>> vec4;                                   // 이중vector
    vector<vector<int>> vec5(10, vector<int>(10,0));            // 이중벡터 10*10 vector
    vec1.push_back(1);                                          // 맨 뒤에 원소 추가
    vec1.pop_back();                                            // 맨 뒤 원소 출력
    cout << vec1.size() << endl;                                // vec1의 크기 출력
    vec1.resize(50);                                            // 크기 재배정
    vec1.clear();                                               // 모든 원소 삭제
    vec1.begin();vec1.end();                                    // 시작 끝주소
    vec1.erase(vec1.begin(),vec2.end());                        // 특정구간 삭제
    vector<int> vec6 = vector<int>(vec1.begin(), vec1.end());   // 원소 복사
    return 0;
}
#endif

#ifdef STACK
#include <stack>
int main() {
    stack<int> st;                                              // 스택 생성
    st.push(1);                                                 // 스택 삽입
    st.pop();                                                   // 스택 인출
    cout << st.top() << endl;                                   // 최상위 스택 출력
    cout << st.size() << endl;                                  // 스택 크기
    return 0;
}
#endif

#ifdef QUEUE
#include <queue>
int main() {
    queue<int> q;                                               // 큐 생성
    q.push(1);                                                  // 큐 삽입
    q.pop();                                                    // 큐 인출
    cout << q.front() << endl;                                  // 맨앞값 출력
    cout << q.empty() << endl;                                  // 큐 유무 확인
    cout << q.size() << endl;                                   // 사이즈 출력
    return 0;         
}
#endif

#ifdef SET
#include <set>
int main() {
    set<int> s;                                                 // 균형이진트리 생성
    s.insert(1);                                                // 원소 삽입
    if(s.find(6)!=s.end()) cout <<"존재"<<endl;                 // 원소 찾기 없으면 end 리턴
    cout << s.size() << endl;                                   // 크기 반환
    s.clear();                                                  // 초기화
    s.erase(++s.begin());                                       // 특정 부분 초기화
    return 0;
}
#endif

#ifdef PAIR
#include <utility>
int main() {
    pair<int, int> p;                                           // 자료형 선언
    p=make_pair(4,5);                                           // 자료 저장
    p={1,2};                                                    // C++ 11부터 사용
    cout << p.first << endl;
    cout << p.second << endl;
}
#endif

#ifdef MAP
#include <map>
int main() {
    map<string,int> m;
    m.insert(make_pair("a",2));
    m["a"]=5;
    cout << m.find("a")->second << endl;
    cout << m.count("a") << endl;
    cout << m.size() << endl;
    m.clear();
    m.erase(++m.begin());
    return 0;
}
#endif
