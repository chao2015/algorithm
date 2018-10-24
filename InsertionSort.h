//
// Created by chenchao on 2018/10/25.
//

#ifndef ALGORITHM_INSERTIONSORT_H
#define ALGORITHM_INSERTIONSORT_H

template<typename T>
void insertionSort(T arr[], int n){

    for( int i = 1 ; i < n ; i ++ ) {

        // 寻找元素arr[i]合适的插入位置
        // 写法1
//        for( int j = i ; j > 0 ; j-- )
//            if( arr[j] < arr[j-1] )
//                swap( arr[j] , arr[j-1] );
//            else
//                break;

        // 写法2
        // 插入排序的循环会提前结束，理论上应该比选择排序更快?
        // 实际上交换操作太多，反而慢了
//        for( int j = i ; j > 0 && arr[j] < arr[j-1] ; j -- )
//            swap( arr[j] , arr[j-1] );

        // 写法3
        T e = arr[i];
        int j; // j保存元素e应该插入的位置
        for (j = i; j > 0 && arr[j-1] > e; j--)
            arr[j] = arr[j-1];
        arr[j] = e;
    }

    return;
}

#endif //ALGORITHM_INSERTIONSORT_H
