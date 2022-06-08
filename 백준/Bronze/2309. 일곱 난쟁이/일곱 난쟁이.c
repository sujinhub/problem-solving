#include <stdio.h>

int main(){
	int dwarf[9] = { 0 }; // 난쟁이 키 저장할 배열
	int height; // 난쟁이 키 입력받을 변수
	int firstFakeDwarf, secondFakeDwarf; // 두 가짜 난쟁이 변수
	int sum = 0; // 난쟁이 키의 합 담을 변수
	int temp; // 버블 정렬에서 사용할 변수
	int findFlag = 0; // 가짜 난쟁이 발견 flag

	for (int i = 0; i < 9; i++) {
		scanf("%d", &height);
		dwarf[i] = height;
		sum += height;
	}

	for (int i = 0; i < 8; i++) {
		if (findFlag == 1) break;
		for (int j = i + 1; j < 9; j++) {
			firstFakeDwarf = dwarf[i];
			secondFakeDwarf = dwarf[j];
			sum = sum - firstFakeDwarf - secondFakeDwarf;
			if (sum == 100) { // 찾은 경우
				findFlag = 1;
				break;
			}
			else // 못 찾은 경우 
				sum = sum + firstFakeDwarf + secondFakeDwarf;
		}
	}

	for (int i = 0; i < 8; i++) { // 버블 정렬
		for (int j = i + 1; j < 9; j++) {
			if (dwarf[i] > dwarf[j]) {
				temp = dwarf[i];
				dwarf[i] = dwarf[j];
				dwarf[j] = temp;
			}
		}
	}

	for (int i = 0; i < 9; i++) { // 찾은 난쟁이 제외 출력
		if (dwarf[i] != firstFakeDwarf && dwarf[i] != secondFakeDwarf)
			printf("%d\n", dwarf[i]);
	}
}