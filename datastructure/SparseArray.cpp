#include "cstring"
#include "iostream"
#include "map"

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
  map<pair<int, int>, int> m;
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
        pair<int, int> p = make_pair(i, j);
        m.insert(pair<pair<int, int>, int>(p, chessArr1[i][j]));
      }
    }
  }
  int chessArr2[sum + 1][3];
  chessArr2[0][0] = getLength(chessArr1);
  chessArr2[0][1] = getLength(chessArr1[0]);
  chessArr2[0][2] = sum;
  for (map<pair<int, int>, int>::iterator iter = m.begin(); iter != m.end();
       iter++, a++) {
    pair<int, int> p = iter->first;
    chessArr2[a][0] = p.first;
    chessArr2[a][1] = iter->first.second;
    chessArr2[a][2] = iter->second;
  };
  cout << "-----------------------���ϡ������------------------------"
       << "\n";
  for (int i = 0; i < sizeof(chessArr2) / sizeof(chessArr2[0]); i++) {
    for (int j = 0; j < sizeof(chessArr2[0]) / sizeof(chessArr2[0][0]); j++) {
      cout << chessArr2[i][j] << "\t";
    }
    cout << endl;
  }
  
//   cout << "-----------------------���ԭʼ����------------------------"
//        << "\n";
//   //   int row = chessArr2[0][0];
//   //   int col = chessArr2[0][1];
//   //   int **chessArr3 = (int **)new int *[row];
//   //   for (int i = 0; i < row; i++) {
//   //     chessArr3[i] = new int[col];
//   //   }
//   //  cout<<sizeof(chessArr3) / sizeof(chessArr3[0])<<"\t";
//   //  cout<<sizeof(chessArr3[0]) / sizeof(chessArr3[0][0]);
//   int chessArr3[11][11];

//   for (int i = 1; i <3; i++) {
//     int row = chessArr2[i][0];
//     // cout << row<<"\t";
//     int col = chessArr2[i][1];
//     // cout << col<<"\t";
//     int data = chessArr2[i][2];
//     chessArr3[row][col] = data;
//     // cout << data<<"\n";
//     // cout << chessArr3[row][col]<<"\n";
//   }
//   for (int i = 0; i < sizeof(chessArr3) / sizeof(chessArr3[0]); i++) {
//     for (int j = 0; j < sizeof(chessArr3[0]) / sizeof(int); j++) {
//       cout << chessArr3[i][j] << "\t";
//     }
//     cout << endl;
//   }
}