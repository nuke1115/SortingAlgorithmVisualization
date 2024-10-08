SortingAlgorithmVisualization
==

1. 설명
2. 사용법
3. 기타
4. 연락처

|정렬 전|정렬 후|
|-|-|
|![unsorted](assets/unsorted.png)|![sorted](assets/sorted.png)|

1.설명
==
정렬 알고리즘의 정렬 과정을 보여주는 프로그램입니다.
콘솔에 명령어를 입력하면, 결과 출력창에 결과가 업데이트되는 형식으로 작동합니다.

2.사용법:
==
1. ExecutableApplication에서 ExecutableApplication.zip을 다운로드 하거나, Releases탭에서 SortingAlgorithmVisualization.zip을 다운로드합니다.
2. 원하는 폴더에 zip파일을 압축해제하여, 실행파일과 dll파일들을 둡니다.
3. SortingAlogrithmVisualization.exe파일을 실행합니다.
4. 콘솔창에 명령어를 입력하여 실행합니다.

> \*리눅스 환경에 한해 아래와 같은 방법으로 프로젝트 빌드가 가능합니다.
> 
> ```bash
> $ make
> $ ./build/main
> ```
>
> 빌드 의존성:
> ```
> SFML
> ```

명령어는 다음과 같습니다.

원소들의 갯수를 정한다.
```pwsh
SetSize [정수] (범위 : 1 ~ 65,536)
```

저장되있는 원소들을 전부 비운 후, 다시 생성한다.
```pwsh
Reset
```

알고리즘이 실행되는 지연시간을 정한다.  
```pwsh
Delay [정수] (범위 : 0 이상의 정수) (단위 : .ns)
```

원소들을 섞는다.
```pwsh
Shuffle
```

원소를 생성할때, 중복되는 원소의 생성을 허용할지 정한다
```pwsh
Duplication [On/Off]
```

원소들을 정렬한다.
```pwsh
Sort [알고리즘 이름]
```

프로그램을 종료한다.
```pwsh
Exit
```

알고리즘들:

BubbleSort

SelectionSort

InsertionSort

MergeSort

HoareQuickSort




이 내용들은 [README](ExecutableApplication/README)폴더의 [README.txt](ExecutableApplication/README/README.txt)파일에도 작성되어있습니다


3.기타
==

본인이 정렬 알고리즘을 만들어서 빌드하여 실행시킬수도 있습니다.
자세한 내용은 [README](ExecutableApplication/README)폴더의 [FOR_DEVELOPERS.txt](ExecutableApplication/README/FOR_DEVELOPERS.txt) 파일을 참고해주세요

4.연락처
==
X(구 Twitter) : @lysrhythmgamer [Link](https://x.com/lysrhythmgamer)

Discord : yellowsticker_ 또는 노란딱지#7701

