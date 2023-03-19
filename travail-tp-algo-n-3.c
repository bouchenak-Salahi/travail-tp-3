    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    void mathod1(double a[], int n) {
    int i, j;
    for (i = 0; i < n ; i++) {
        for (j = 0; j < n ; j++) {
            if (a[j] < a[j+1]) {
                double last = a[j];
                a[j] = a[j+1];
                a[j+1] = last;
            }
        }
    }
    }
    void mathod2(double arr[], int n) {
        int i, j, max;
        double l;
        for (i = 0; i < n; i++) {
            max = i;
            for (j = i+1; j < n; j++) {
                if (arr[j] > arr[max]) {
                    max = j;
                }
            }
            l = arr[i];
            arr[i] = arr[max];
            arr[max] = l;
        }
    }
    int main() {
    int i, n, j;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    double t[n];
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%lf", &t[i]);
    }
    mathod1(t, n);
    //    mathod2(t, n);
    printf("Sorted array in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%lf ", t[i]);
    }
    printf("\n");
    return 0;
    }