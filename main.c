#include <stdio.h>

void PrintName();
void PrintInfo();

int main() {
    //printf("Hello, World!\n");
    PrintName();
    PrintInfo();
    return 0;
}

// ���� 1
// ������ �̸��� ����ϴ� ���α׷��� �ۼ�. ��, printf �Լ��� �� ���� ȣ���ؾ� �Ѵ�.
void PrintName() {
    printf("������\n�� �� ��\n��  ��  ��\n");
}

// �̸�, �ּ�, ��ȭ��ȣ ���
void PrintInfo() {
    printf("�̸�: %s", "������\n");
    printf("�ּ�: %s", "��⵵ �����ν�\n");
    printf("��ȭ��ȣ: %s", "010 7574 4125\n");
}
