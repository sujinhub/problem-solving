#include <stdio.h>
#include <string.h>

int main(void) {
	char S[51] = { 0 };
	char base64[64] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
	unsigned int bitBuffer[24] = { 0 };
	int bufferIdx = 0, SIdx = 0;
	int encodedValue = 0;

	gets(S);

	while (1) {
		// 1byte ---> Bit pattern
		for (int i = 7; i >= 0; i--)
			bitBuffer[bufferIdx++] = (S[SIdx] >> i) & 1;

		// 버퍼가 꽉찰 때마다 출력 후 버퍼 초기화
		if (bufferIdx == 24) {
			for (int i = 0, j = 5; i < 24; i++) {
				if (bitBuffer[i]) encodedValue += 1 << j;
				if (--j == -1) {
					j = 5;
					printf("%c", base64[encodedValue]);
					encodedValue = 0;
				}
			}
			memset(bitBuffer, 0, sizeof(int) * 24);
			bufferIdx = 0;

			// 버퍼가 꽉차고 다음 문자가 없는 경우
			if (!S[++SIdx]) break;
		}

		// 버퍼가 꽉차지 않았는데 다음 문자열이 없는 경우
		else if (bufferIdx && !S[++SIdx]) {
			if (SIdx % 3 == 1) { // 입력된 바이트가 하나
				for (int i = 0, j = 5; i < 12; i++) {
					if (bitBuffer[i]) encodedValue += 1 << j;
					if (--j == -1) {
						j = 5;
						printf("%c", base64[encodedValue]);
						encodedValue = 0;
					}
				}
				printf("==");
			}
			else if (SIdx % 3 == 2) { // 입력된 바이트가 둘
				for (int i = 0, j = 5; i < 18; i++) {
					if (bitBuffer[i]) encodedValue += 1 << j;
					if (--j == -1) {
						j = 5;
						printf("%c", base64[encodedValue]);
						encodedValue = 0;
					}
				}
				printf("=");
			}
			break;
		}
	}
}