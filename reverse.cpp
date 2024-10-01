#include <iostream>
using namespace std;

// Corrected function definition: Added 'int n' after 'int r,' and made n redundant as it is not used in the function.
void reverse(int l, int arr[], int r) {
    if (l >= r) return;  // Base case: If left index is greater or equal to right index, return
    swap(arr[l], arr[r]);  // Swap the elements at left and right index
    reverse(l + 1, arr, r - 1);  // Recursively call to reverse inner elements
}

int main() {
    int n;
    
    cin >> n;  // Input the size of the array

    int arr[n];  // Declare array with size n (C++ allows VLA in some compilers, though this is not standard)
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Input array elements
    }
    
    reverse(0, arr, n - 1);  // Call reverse function (Note: r should be n-1 to match the array's index)

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Print the reversed array elements
    }

    return 0;
}

// optimal approach for reverse the array
*******************************************************************************/
#include <iostream>
using namespace std;
void reverse(int i, int arr[],int n){
    if(i>n/2) return;
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,arr,n);
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    reverse(0,arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}