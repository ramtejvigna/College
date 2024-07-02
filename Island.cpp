#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
    cin >> rows;
    int col;
    cin >> col;
    int arr[rows][col];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    vector<int> v1;
    for (int i = 0; i < rows; i++)
    {
        int j = 0;
        int cnt = 0;
        while (j < col)
        {
            if (arr[i][j] == 1)
            {
                if ((j > 0 && arr[i][j - 1] == 1) || (j < col - 1 && arr[i][j + 1] == 1) || (i > 0 && arr[i - 1][j] == 1) || (i < rows - 1 && arr[i + 1][j] == 1))
                {
                    cnt++;
                    arr[i][j] = 0;
                    if (j > 0 && arr[i][j - 1] == 1)
                        j = j - 1;
                    else if (j < col - 1 && arr[i][j + 1] == 1)
                        j = j + 1;
                    else if (i > 0 && arr[i - 1][j] == 1)
                    {
                        i = i - 1;
                    }
                    else if (i < rows - 1 && arr[i + 1][j] == 1)
                        i = i + 1;
                }
                else
                {
                    cnt++;
                    arr[i][j] = 0;
                    break;
                }
            }
            else
            {
                j++;
            }
        }
        if(cnt/2 >= 1) v1.push_back(cnt);
    }
    for (int i = 0; i < rows; i++)
    {
        int j = 0;
        int cnt = 0;
        while (j < col)
        {
            if (arr[i][j] == 1)
            {
                if ((j > 0 && arr[i][j - 1] == 1) || (j < col - 1 && arr[i][j + 1] == 1) || (i > 0 && arr[i - 1][j] == 1) || (i < rows - 1 && arr[i + 1][j] == 1))
                {
                    cnt++;
                    arr[i][j] = 0;
                    if (j > 0 && arr[i][j - 1] == 1)
                        j = j - 1;
                    else if (j < col - 1 && arr[i][j + 1] == 1)
                        j = j + 1;
                    else if (i > 0 && arr[i - 1][j] == 1)
                    {
                        i = i - 1;
                    }
                    else if (i < rows - 1 && arr[i + 1][j] == 1)
                        i = i + 1;
                }
                else
                {
                    cnt++;
                    arr[i][j] = 0;
                    break;
                }
            }
            else
            {
                j++;
            }
        }
        if(cnt/2 >= 1) v1.push_back(cnt);
    }
    
    cout << "Maximum sets : " << v1.size() << endl;
}