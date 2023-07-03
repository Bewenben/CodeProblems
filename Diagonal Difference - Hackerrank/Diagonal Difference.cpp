/*

This is a C++ program that takes input of a square matrix of size n from the user and calculates the absolute difference between the sum of elements on the main diagonal and the sum of elements on the anti-diagonal.

The program first declares an array arr of size n x n to store the input matrix. It then declares two variables positiveSum and negativeSum to store the sum of elements on the main diagonal and the anti-diagonal respectively.

The program then uses nested loops to read in the elements of the matrix from the user and stores them in the array arr.

After reading in the matrix, the program calculates the sum of elements on the main diagonal by adding up the elements in the first row. It then calculates the sum of elements on the anti-diagonal by adding up the elements in the first column.

Finally, the program calculates the absolute difference between the two sums and prints it to the console.

Overall, this program is a simple implementation of the formula for the sum of a matrix's diagonal.

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int arr[100][100];
    int n;
    int positiveSum = 0;
    int negativeSum = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        positiveSum += arr[i][i];
    }
    for(int i = 0; i < n; i++){
        negativeSum += arr[i][n-i-1];
    }
    cout << abs(positiveSum - negativeSum) << endl;
}