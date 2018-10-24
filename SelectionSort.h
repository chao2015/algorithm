//
// Created by chenchao on 2018/10/24.
//

#ifndef MYSORT_SELECTIONSORT_H
#define MYSORT_SELECTIONSORT_H

template<typename T>
void selectionSort(T arr[], int n){

    for(int i = 0 ; i < n ; i ++){

        // 寻找[i, n)区间里的最小值
        int minIndex = i;
        for( int j = i + 1 ; j < n ; j ++ )
            if( arr[j] < arr[minIndex] )
                minIndex = j;

        swap( arr[i] , arr[minIndex] );
    }
}

#endif //MYSORT_SELECTIONSORT_H
