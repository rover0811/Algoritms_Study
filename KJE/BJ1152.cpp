#include <stdio.h>
#include <string.h>
int main() {
	int cnt=0;
	char sen[1000010];
	scanf("%[^\n]s", sen);  //[^\n]s�� ������� �����Ͽ� ���ڿ��� �Է¹޴� ��
	//���Ͱ� ���� ������ ���ڿ��� �޴´�
	if (strlen(sen)==1&& sen[0] != ' ') {
		cnt++;
	}
	for (int i = 1; i < strlen(sen); i++) {
		if (sen[i - 1] = ' ' && sen[i] != ' ') {
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}
//ù��° ���ڰ� ������ �����ٰ� ����