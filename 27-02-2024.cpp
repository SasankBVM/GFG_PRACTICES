int* game_with_number(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        if(i+1<n)
            arr[i]=arr[i]|arr[i+1];
    }
    return arr;
    
}
