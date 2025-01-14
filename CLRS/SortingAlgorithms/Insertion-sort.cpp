#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& A) {
    int n = A.size();
    for (int i = 1; i < n; i++) { // 배열의 인덱스는 0부터 시작하므로 1로 설정
        int key = A[i];
        int j = i - 1;

        // A[j] > key인 동안 A[j]를 오른쪽으로 이동
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j = j - 1;
        }

        // key를 올바른 위치에 삽입
        A[j + 1] = key;
    }
}

int main() {
    // 예제 입력 배열
    std::vector<int> A = { 5, 2, 4, 6, 1, 3 };

    std::cout << "정렬 전 배열: ";
    for (int num : A) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 삽입 정렬 수행
    insertionSort(A);

    std::cout << "정렬 후 배열: ";
    for (int num : A) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
