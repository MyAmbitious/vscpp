#include "cstring"
#include "iostream"

using namespace std;
int chessArr1[11][11];

// ͨ������꺯������ȡ���鳤��
#define foo(arr) sizeof(arr) / sizeof(arr[0]);

// ͨ������ģ������ȡ���鳤��
template <class T>
int getLength(
    const T &arr) { //�������ǲ�֪��T��ʲô�����Բ��� pass by reference-to-const
  return sizeof(arr) / sizeof(arr[0]);
};

template <typename T, size_t N> inline size_t GetArrayLength(const T (&)[N]) {
  return N;
};
int main() {
  int sum = 0, a = 1;
  memset(chessArr1, 0, size(chessArr1));
  chessArr1[1][2] = 1;
  chessArr1[2][3] = 2;
  cout << "���ԭʼ�Ķ�ά����"
       << "\n";
  for (int i = 0; i < GetArrayLength(chessArr1); i++) {
    for (int j = 0; j < GetArrayLength(chessArr1[0]); j++) {
      cout << chessArr1[i][j] << "\t";
    }
    cout << endl;
  }
  for (int i = 0; i < sizeof(chessArr1) / sizeof(chessArr1[0]); i++) {
    for (int j = 0; j < sizeof(chessArr1[0]) / sizeof(int); j++) {
      if (chessArr1[i][j]) {
        sum++;
      }
    }
  }
  int chessArr2[sum + 1][3];
  chessArr2[0][0] = getLength(chessArr1);
  chessArr2[0][1] = getLength(chessArr1[0]);
  chessArr2[0][2] = sum;
  int count = 1;
  for (int i = 0; i < sizeof(chessArr1) / sizeof(chessArr1[0]); i++) {
    for (int j = 0; j < sizeof(chessArr1[0]) / sizeof(int); j++) {
      if (chessArr1[i][j]) {
          chessArr2[count][0] = i;
          chessArr2[count][1] = j;
          chessArr2[count][2] = chessArr1[i][j];
          count++;
      }
    }
  }

  cout << "-----------------------���ϡ������------------------------"
       << "\n";
  for (int i = 0; i < sizeof(chessArr2) / sizeof(chessArr2[0]); i++) {
    for (int j = 0; j < sizeof(chessArr2[0]) / sizeof(chessArr2[0][0]); j++) {
      cout << chessArr2[i][j] << "\t";
    }
    cout << endl;
  }
}