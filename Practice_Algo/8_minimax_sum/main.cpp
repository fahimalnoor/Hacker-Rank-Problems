#include <iostream>

using namespace std;

void miniMaxSum(int arr[]){

    long sum = 0;
    long sum1 = 0;
    long sum2 = 0;
    long sum3 = 0;
    long sum4 = 0;
    long sum5 = 0;
    long min = 0;
    long max = 0;

    for (int a=0; a<5; a++){
            sum += arr[a];
            sum1 += arr[a];
             sum2 += arr[a];
              sum3 += arr[a];
               sum4 += arr[a];
                sum5 += arr[a];
    }

    sum1 = sum1 - arr[0];
    sum2 = sum2 - arr[1];
    sum3 = sum3 - arr[2];
    sum4 = sum4 - arr[3];
    sum5 = sum5 - arr[4];

    //max value
    if(sum1 > sum2 && sum1 > sum3 && sum1 > sum4 && sum1 > sum5){
            max = sum1;
    }
    else if(sum2 > sum1 && sum2 > sum3 && sum2 > sum4 && sum2 > sum5){
            max = sum2;
    }
    else if(sum3 > sum1 && sum3 > sum2 && sum3 > sum4 && sum3 > sum5){
            max = sum3;
    }
    else if(sum4 > sum1 && sum4 > sum2 && sum4 > sum3 && sum4 > sum5){
            max = sum4;
    }
    else if(sum5 > sum1 && sum5 > sum2 && sum5 > sum3 && sum5 > sum4){
            max = sum5;
    }
    else if(sum1 == sum2 && sum2 == sum3 && sum3 == sum4 && sum4 == sum5)   {
            max = sum5;
    }

    //min value
    if(sum1 < sum2 && sum1 < sum3 && sum1 < sum4 && sum1 < sum5){
            min = sum1;
    }
    else if(sum2 < sum1 && sum2 < sum3 && sum2 < sum4 && sum2 < sum5){
            min = sum2;
    }
    else if(sum3 < sum1 && sum3 < sum2 && sum3 < sum4 && sum3 < sum5){
            min = sum3;
    }
    else if(sum4 < sum1 && sum4 < sum2 && sum4 < sum3 && sum4 < sum5){
            min = sum4;
    }
    else if(sum5 < sum1 && sum5 < sum2 && sum5 < sum3 && sum5 < sum4){
            min = sum5;
    }
    else if(sum1 == sum2 && sum2 == sum3 && sum3 == sum4 && sum4 == sum5)   {
            min = sum5;
    }

    cout << min << " " << max;

};

int main()
{
    int arr[5];
    for(int x=0 ; x<5; x++){
        cin >> arr[x];
    }
    miniMaxSum(arr);
    return 0;
}
