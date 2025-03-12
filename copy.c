#include <stdio.h>

int main() {
    int arr[100]; 
	int result[100]; 
    int n, search, count=0;
    scanf("%d %d", &n, &search);

    printf("Enter the elements: ");
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Append search results to a new array
    for(int i=0; i<n; i++) {
        if(arr[i] < search) {
            result[count] = arr[i];
            count++;
        }
    }

    // Print the search results array
    printf("Search results: ");
    for(int i=0; i<count; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
