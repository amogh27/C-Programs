int main()
{
 
    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i;
 
    // Get the number of elements for the array
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
 
    // Get the elements of the array
    for (i = 0; i < n; ++i) 
    {
       printf("Enter the Element No. %d: ",i+1);
       scanf("%d",&ptr[i]);
    }
 
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) 
        {
            printf("%d ", ptr[i]);
        }
    
 
    return 0;
}
