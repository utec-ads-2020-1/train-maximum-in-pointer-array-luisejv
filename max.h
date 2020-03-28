int max(int *iptr[], int n)
{
    int maxNum = *(iptr[0]);
    for (int i = 0; i < n; i++)
    {
        if (*(iptr[i]) > maxNum)
        {
            maxNum = *(iptr[i]);
        }
    }
    return maxNum;
}