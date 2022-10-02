public class CyclicSort {
    public static void cyclic(int[] arr) {
        int i=0;
        while (i<arr.length-1) {
            if (arr[i] != i+1) {
                swap(arr, i, arr[i]-1);
            } else {
                i++;
            }
        }
    }

    public static void swap(int[] arr, int first, int second) {
        int temp = arr[second];
        arr[second] = arr[first];
        arr[first] = temp;
    }
}
