#include <iostream>
using namespace std;

void printMatrix(int **, int, int);

int main()
{
    int rows, col, k;
    cin >> rows >> col;
    cin >> k;
    
    // Dynamic memory allocation for the matrix
    int **mat = new int*[rows];
    for (int i = 0; i < rows; ++i)
    {
        mat[i] = new int[col]();
    }
    int rowHalf[2] = {0};
    int colHalf[2] = {0};
    
    if(rows%2 != 0) {
        rowHalf[0] = rows/2;
    } else {
        rowHalf[0] = rows/2;
        rowHalf[1] = rows/2 - 1;
    }
    if(col%2 != 0) {
        colHalf[0] = col/2;
    } else {
        colHalf[0] = col/2;
        colHalf[1] = col/2 - 1;
    }

    for (int i = 0; i < rows; i++)
    {
        if(col%2 == 0) {
            mat[i][colHalf[0]] = -1;
            mat[i][colHalf[1]] = -1;
            mat[i][0] = -1;
            mat[i][col - 1] = -1; 
        } else {
            mat[i][colHalf[0]] = -1;
            mat[i][0] = -1;
            mat[i][col - 1] = -1;
        }
    }
    for (int i = 0; i < col; i++)
    {
        if(rows%2 != 0) {
            mat[rowHalf[0]][i] = -1;
            mat[0][i] = -1;
            mat[rows - 1][i] = -1;
        } else {
            mat[rowHalf[0]][i] = -1;
            mat[rowHalf[1]][i] = -1;
            mat[0][i] = -1;
            mat[rows - 1][i] = -1;
        }
    }

    printMatrix(mat, rows, col);
    
    int i, j, cnt = 0;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < col; j++)
        {
            cnt++;
            if (cnt == k) {
                if (mat[i][j] == -1)
                {
                    cout << "Foot";
                }
                else
                {
                    cout << "Land";
                }
            }
        }
    }
    // Deallocate memory
    for (int i = 0; i < rows; ++i)
    {
        delete[] mat[i];
    }
    delete[] mat;

    return 0;
}

void printMatrix(int **mat, int rows, int col)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}
