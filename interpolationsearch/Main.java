public class Main {
    public static void main(String[] args) {

        int[] array = new int[100];
        for (int i = 0; i < 100; i++){
            array[i] = i * 2;
        }
        int index = interpolationSearch(array, 10);
        if (index != -1){
            System.out.println("Element found at index: " + (index));
        }
        else {
            System.out.println("Element not found");
        }
    }

    private static int interpolationSearch(int[] array, int value) {
        int high = array.length -1;
        int low = 0;

        while (value >= array[low] && value <= array[high] && low <= high){
            int probe = ((high - low) * (value - array[low]) / (array[high] - array[low]));
            System.out.println("probe: " + probe);

            if (array[probe] == value){
                return probe;
            }
            else if (array[probe] < value){
                low = probe + 1;
            }
            else {
                high = high - 1;
            }
        }
        return -1;
    }
}
