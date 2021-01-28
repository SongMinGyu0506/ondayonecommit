# TMUX 명령어 정리
## 세션 관련
### 새 세션 생성
* $ tmux new -s <session-name>

### 세션 이름 수정
* ctrl + b, $

### 세션 종료
* $ (tmux에서) exit

### 세션 중단하기 (detached)
* ctrl + b, d

### 세션 목록 보기 (list-session)
* $ tmux ls

### 세션 다시 시작
* $ tmux attach -t <session-number or session-name>
---
## 윈도우 관련
### 새 윈도우 생성
* ctrl + b, c

### 세션 생성시 윈도우랑 같이 생성
* $ tmux new -s <session-name> -n <window-name>

### 윈도우 이름 수정
* ctrl + b, ,

### 윈도우 종료
* ctrl + b, &
* ctrl + d

### 윈도우 이동
* ctrl + b, 0-9 : window number
            n : next window
            p : prev window
            l : last window
            w : window selector
            f : find by name