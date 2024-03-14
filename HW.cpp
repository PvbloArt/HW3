#include <iostream>
using namespace std;

void Print_num(int N, int k)
{
    for (int i = k; i <= N; i += 2)
        cout << i << " ";
    cout << "\n";
}

int main()
{
    int N;
    cout << "N="; cin >> N;

    cout << "Even:\n";
    Print_num(N, 0);

    cout << "Odd:\n";
    Print_num(N, 1);

    system("pause");
    return 0;
}