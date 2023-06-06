public class m9_basicSorting {
    public static void print(int arr[]){
        for(int i = 0; i < arr.length; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    public static void bubbleSort(int arr[]){
        int n = arr.length;
        for(int i = 0; i < n-1; i++){
            for(int j = 0; j < n-i-1; j++){
                if(arr[j] > arr[j+1]){
                    int t = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = t;
                }
            }
            print(arr);
        }
    }
    public static void selectionSort(int arr[]){
        int n = arr.length;
        for(int i = 0; i < n; i++){
            System.out.print("Pass " + (i+1) + " = ");
            for(int j = i; j < n; j++){
                if(arr[i] > arr[j]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
            print(arr);
        }
    }
    public static void insertionSort(int arr[]){
        int n = arr.length;
        for(int i = 1; i < n; i++){
            int curr = arr[i];
            int prev = i-1;
            // finding the correct position to insert
            while( prev>=0 && arr[prev] > curr){
                arr[prev+1] = arr[prev];
                prev--;
            }
            
            // insertion
            arr[prev+1] = curr;
            print(arr);
        }

    }
    
    public static void mergeSort(int arr[], int st, int en){
        if(st >= en){
            return ;
        }

        int mid = st + (en - st)/2;
        
        mergeSort(arr, st, mid);
        mergeSort(arr, mid+1, en);

        merge(arr, st, mid, en);
        // print(arr);
    }
    public static void merge(int arr[], int st, int mid, int en){
        int temp[] = new int[en-st+1];
        int i = st;
        int j = mid+1;
        int k = 0;

        while(i <= mid && j <= en){
            if(arr[i] < arr[j]){
                temp[k] = arr[i];
                i++;
                k++;
            }
            else{
                temp[k] = arr[j];
                k++;
                j++;
            }
        }
        while(i <= mid){
            temp[k] = arr[i];
            i++;
            k++;
        }
        while(j <= en){
            temp[k] = arr[j];
            j++;
            k++;
        }

        for(k = 0, i = st; k < temp.length; k++, i++){
            arr[i] = temp[k];
        }
    }
    public static void main(String[] args) {
        int arr[] = {5,4,3,2,1};
        // bubbleSort(arr);
        // selectionSort(arr);
        // insertionSort(arr);
        mergeSort(arr, 0, arr.length-1);
        print(arr);
    }
}
