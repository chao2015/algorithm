#include <iostream>
#include "SortTestHelper.h"
#include "Student.h"
#include "SelectionSort.h"
#include "InsertionSort.h"

int main1() {
    // 测试模板函数，传入整型数组
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    selectionSort( a , 10 );
    for( int i = 0 ; i < 10 ; i ++ )
        cout<<a[i]<<" ";
    cout<<endl;

    // 测试模板函数，传入浮点数数组
    float b[4] = {4.4,3.3,2.2,1.1};
    selectionSort(b,4);
    for( int i = 0 ; i < 4 ; i ++ )
        cout<<b[i]<<" ";
    cout<<endl;

    // 测试模板函数，传入字符串数组
    string c[4] = {"D","C","B","A"};
    selectionSort(c,4);
    for( int i = 0 ; i < 4 ; i ++ )
        cout<<c[i]<<" ";
    cout<<endl;

    // 测试模板函数，传入自定义结构体Student数组
    Student d[4] = { {"D",90} , {"C",100} , {"B",95} , {"A",95} };
    selectionSort(d,4);
    for( int i = 0 ; i < 4 ; i ++ )
        cout<<d[i];
    cout<<endl;

    return 0;
}

int main2() {

    int n = 100000;
    int *arr = SortTestHelper::generateRandomArray(n, 0, n);
    selectionSort(arr, n);
    SortTestHelper::printArray(arr, n);

    SortTestHelper::testSort("Selection Sort", selectionSort, arr, n);  // Selection Sort : 0.1259 s
    // 10000是0.12s，数据规模扩大10倍到100000是11.38 s大约100倍，符合时间复杂度O(n^2)

    delete[] arr;
}

// 比较SelectionSort和InsertionSort两种排序算法的性能效率
// 此时， 插入排序比选择排序性能略低
// Insertion Sort : 0.666882 s
// Selection Sort : 0.439258 s
// 插入排序用写法3的改进版时：
// Insertion Sort : 0.346263 s
// Selection Sort : 0.546894 s
int main() {

    int n = 20000;

    cout<<"Test for random array, size = "<<n<<", random range [0, "<<n<<"]"<<endl;
//    int *arr1 = SortTestHelper::generateRandomArray(n, 0, n);
    // 当数组有序时，插入排序效率更高，越有序，
//    int *arr1 = SortTestHelper::generateRandomArray(n, 0, n);
    int *arr1 = SortTestHelper::generateNearlyOrderedArray(n, 100);
    int *arr2 = SortTestHelper::copyIntArray(arr1, n);

    SortTestHelper::testSort("Insertion Sort", insertionSort,arr1,n);
    SortTestHelper::testSort("Selection Sort", selectionSort,arr2,n);

    delete[] arr1;
    delete[] arr2;

}