#include <iostream>

using namespace std;

/*
3장의 카드를 골라야 하는데 카드의 수가 최대 100개 이므로
삼중포문을 돌려 구해도 시간초과가 나지 않는다. (완탐)

*/

int main(){

    int N, M, max = 0;

    cin >> N >> M;

    int card[N];

    for(int i=0;i<N;i++){