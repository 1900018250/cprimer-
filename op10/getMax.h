int getMax(int [], int cols);
int getDiff(int [], int cols);
void sortArr(int [], int cols);

int getMax(int arr[], int cols)
{
    int temp = arr[0];
    for (int i = 0; i < cols; i++)
    {
        if (temp < arr[i])
            temp = arr[i];
    }
    return temp;
}

int getDiff(int arr[], int cols)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < cols; i++)
    {
        max = max < arr[i] ? arr[i] : max;
        min = min > arr[i] ? arr[i] : min;
    }
    return max - min;
}

void sortArr(int arr[], int cols)
{   
    int t;
    for (int i = 0; i < cols - 1; i++)
    {
        for (int j = 0; j < cols - i -1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                t = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = t;
            }
        }
    }
}