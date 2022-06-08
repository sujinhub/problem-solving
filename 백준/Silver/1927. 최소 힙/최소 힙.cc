#include <iostream>
#include <algorithm>

#define MAX_HEAP_SIZE 100001

using namespace std;

int heap[MAX_HEAP_SIZE];
int heapSize = 0;

void push(int data) {
	if (heapSize == MAX_HEAP_SIZE) return;
	else heap[heapSize] = data;

	int cur = heapSize++;

	while (cur && heap[cur] < heap[(cur - 1) / 2]) { // 자식보다 부모가 더 크면 교환
		swap(heap[cur], heap[(cur - 1) / 2]);
		cur = (cur - 1) / 2;
	}
}

int pop() {
	if (heapSize <= 0) return 0;

	int value = heap[0];
	int child, cur = 0;

	heap[0] = heap[--heapSize]; // 마지막 원소를 root로

	while (cur * 2 + 1 < heapSize) // 자식이 없을 때까지..
	{
		if (cur * 2 + 2 == heapSize) {  // 왼쪽 자식만 있는 경우
			child = cur * 2 + 1;
		}
		else { // 둘 다 있는 경우, 오른쪽 자식과 왼쪽 자식을 비교
			child = heap[cur * 2 + 1] < heap[cur * 2 + 2] ? cur * 2 + 1 : cur * 2 + 2;
		}
		
		if (heap[cur] < heap[child]) {  // 자식의 값이 더 크면 break
			break;
		}
		else { // 아니라면 교환
			swap(heap[cur], heap[child]);
			cur = child;
		}
	}

	return value;
}



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int N; cin >> N;
	int input;

	for (; N--;) {
		cin >> input;
		if (input == 0) cout << pop() << "\n";
		else push(input);
	}

	return 0;
}