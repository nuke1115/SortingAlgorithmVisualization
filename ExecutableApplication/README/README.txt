사용법:

SortingAlgorithmVisualization.exe를 실행시키면 창이 2개가 뜬다.

하나는 결과가 출력되는 창이고, 하나는 명령어를 입력하는 콘솔창이다.

콘솔창에 명령어를 입력하면, 결과가 출력되는 형식으로 동작한다.

명령어들은 다음과 같다.

명령어:

SetSize [정수] (범위 : 1 ~ 65,536)
: 원소들의 갯수를 정한다.

Reset
: 저장되있는 원소들을 전부 비운 후, 다시 생성한다.

Delay [정수] (범위 : 0 이상의 정수) (단위 : .ns)
: 알고리즘이 실행되는 지연시간을 정한다.  

Shuffle
: 원소들을 섞는다.

Duplication [On/Off]
: 원소를 생성할때, 중복되는 원소의 생성을 허용할지 정한다

Sort [알고리즘 이름]
: 원소들을 정렬한다.

Exit
: 프로그램을 종료한다.

알고리즘들:
BubbleSort
SelectionSort
InsertionSort
MergeSort
HoareQuickSort

Shuffle에 사용된 알고리즘:
FisherYates