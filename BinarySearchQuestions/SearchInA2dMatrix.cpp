#include <iostream>
#include <vector>
using namespace std;

 bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row=matrix.size();
        int col=matrix[0].size();

        int n=row*col; //total number of boxes in 1d matrix
        int start=0;
        int end=n-1;
        int mid=start+(end-start)/2;
        while(start<=end){
            int rowIndex=mid/col;
            int colIndex=mid%col;

            int currentNumber=matrix[rowIndex][colIndex];

            if(currentNumber==target){
                return true;
            }
            else if(currentNumber>target){
                end=mid-1;//left me jaao
            }
            else{ //right me jaao
                start=mid+1;
            }
            mid=start+(end-start)/2;
        }
        return false;
   }
   int main(){
     vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 120},
        {23, 30, 34, 60},
    };
    int target = 5;

    if (searchMatrix(matrix, target)) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}
