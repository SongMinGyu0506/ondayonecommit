# GIT 명령어
## Git 초기 설정
* 깃 초기화
    * git init
* 사용자 설정
    * git config --global user.name "SongMinGyu0506"
    * git config --global user.email "ggp04114@naver.com"
* 사용자 확인
    * git config user.name
    * git config user.email
---
## 기본 git 사용방법
* git 기록확인
    * git log
* git 상태 확인
    * git status
* git 상태 갱신
    * git add -A (커밋하기 위한 모든 내용물을 스테이지에 올림)
    * git commit -m "메모할 내용"
* git 상태 복원 (되돌아가기 불가능)
    * git log -> 돌아갈 시점의 id 6자리 복사
    * git reset "id6자리" --hard
* git 상태 복원 (되돌아가기 가능)
    * git revert "id6자리"
    * 다시 원래대로 git revert "revert 아이디 6자리"
* git log --graph --all --decorate 
    * GUI 상태 로그 확인
---
## git branch (평행우주)
* Main branch -> master
* 브랜치 생성
    * git branch [branch name] (해당 branch의 상태를 그대로 가져감)
* 브랜치 이동
    * git checkout [branch name]
* git branch -a => 로컬 원격브랜치 확인
* git branch -b [branch name] ==> 브랜치 만들고 바로 체크아웃
* git branch -b [branch name] [remote branch name] ==> 브랜치 이름으로 원격 브랜치 가져오기
* git branch -D [branch name] ==> 브랜치 삭제
* git push -d [원격명] [브랜치명] ==> 원격 브랜치 삭제
---
## merge (Branch 병합)
* (중심이 될 브랜치에서) git merge [branch name]
* git rebase [branch name] ==> 한줄로 통합
---
## Github Push 방법
* git remote ==> 현 폴더의 원격 repository를 확인하는 명령어
* git remote add origin https://github.com.SongMinGyu0506/ondayonecommit.git
* git push -u origin main
* git branch -M main (미사용)
---
## 원격저장소 명령어
* git clone [sitename] => 레포지토리 내려받기
* git fetch -> git status => 레포지토리 수정사항 확인
* git pull [원격브랜치명] [브랜치명] => 수정사항 패치
* git push origin [branch name] ==> github에 브랜치 올리기
---
## git ignore
* .gitignore 참고 사이트 -> atlassian.com/git/tutorials/saving-changes/gitignore 
---
## 좋은 Commit 메시지를 작성하는 방법
* https://meetup.toast.com/posts/106


