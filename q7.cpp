// cyclically rotate array
// space is O(1)

void rotate(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n-1];
        arr[n-1] = temp;
    }
    
}
