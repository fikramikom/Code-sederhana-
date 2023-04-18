import java.util.Arrays;
import java.util.Scanner;

public class tugas_besar3 {

    private int[] numbers;

    public tugas_besar3(int size) {
        numbers = new int[size];
    }

    public void input() {

        for (int i = 0; i < numbers.length; i++) {
            Scanner dataInput = new Scanner(System.in);
            System.out.print("input data " + (i + 1) + " = ");
            int inputData = dataInput.nextInt();
            numbers[i] = inputData;
        }
    }

    public void insertionSort() {
        int n = numbers.length;
        for (int j = 1; j < n; j++) {
            int key = numbers[j];
            int i = j - 1;
            while ((i > -1) && (numbers[i] > key)) {
                numbers[i + 1] = numbers[i];
                i--;
            }
            numbers[i + 1] = key;
        }
    }

    public void dataurut() {

        System.out.print(Arrays.toString(numbers));
        System.out.println(" <--- Data Terurut");
    }

    public void dataacak() {
        System.out.print(Arrays.toString(numbers));
        System.out.println(" <--- Data Belum Terurut");
    }

    public double ratarata() {
        float sum = 0;
        for (int number : numbers) {
            sum += number;
        }
        return (double) sum / numbers.length;
    }

    public double Median() {
        if (numbers.length % 2 == 0) {
            // jika jumlah elemen genap, maka median adalah rata-rata dari dua elemen tengah
            int middleIndex1 = numbers.length / 2 - 1;
            int middleIndex2 = numbers.length / 2;
            return (numbers[middleIndex1] + numbers[middleIndex2]) / 2.0;
        } else {
            // jika jumlah elemen ganjil, maka median adalah elemen tengah
            int middleIndex = numbers.length / 2;
            return numbers[middleIndex];
        }
    }

    public int nilai_max() {
        int max = numbers[0];
        for (int number : numbers) {
            if (number > max) {
                max = number;
            }
        }
        return max;
    }

    public int nilai_min() {
        int min = numbers[0];
        for (int number : numbers) {
            if (number < min) {
                min = number;
            }
        }
        return min;
    }

    public int Range() {
        return nilai_max() - nilai_min();
    }

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        System.out.print("Input jumlah data = ");
        int size = scanner.nextInt();

        tugas_besar3 tb1 = new tugas_besar3(size);

        tb1.input();
        System.out.println("\n");

        tb1.dataacak();
        System.out.println("\n");
        tb1.insertionSort();
        tb1.dataurut();

        System.out.println("\n");

        System.out.println("Rata-rata: " + tb1.ratarata());
        System.out.println("Median: " + tb1.Median());
        System.out.println("Nilai Max: " + tb1.nilai_max());
        System.out.println("Nilai Min: " + tb1.nilai_min());
        System.out.println("Range: " + tb1.Range());

    }
}
