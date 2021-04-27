//
// Created by mingguo on 2020/5/24.
//

//
// Created by mingguo on 2020/5/19.
//

#include "iostream"
#include <vector>
#include <typeinfo>
#include <unordered_map>
#include "math.h"
#include "float.h"

using std::vector;
using std::string;
using std::unordered_map;
using std::pair;

using namespace std;

void print_nums(int *nums, int size){
    for (int i = 0; i < size; i++){
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

int maxSubArray(int* nums, int size) {
    if (nums == NULL || size == 0) {
        return 0;
    }
    int n = size;
    /*
    int* dp = new int[n]();
    dp[0] = nums[0];
    int result = dp[0];
     for (int i = 1; i < n; ++i) {
        dp[i] = max(dp[i - 1], 0) + nums[i];
        result = max(result, dp[i]);
    }
     */

    int dp = nums[0];
    int result = dp;
    for (int i = 1; i < n; ++i) {
        dp = max(dp, 0) + nums[i];
        result = max(result, dp);
    }

    return result;
}

int maxSubArray2(int* nums, int numsSize) {
    if (nums == NULL || numsSize == 0) {
        return 0;
    }
    int max = INT_MIN;
    for(int i=0; i < numsSize; i++){
        int sum = 0;
        for (int j = i; j < numsSize; j++)
        {
            sum += nums[j];
            if (sum > max)
            {
                max = sum;
            }
        }
    }

    return max;
}

int maxSubArray3(int* nums, int numsSize) {
    if (nums == NULL || numsSize == 0) {
        return 0;
    }
    int result = INT_MIN;
    int sum = 0;
    for(int i=0; i < numsSize; i++){
        sum += nums[i];
        result = max(result, sum);
        if (sum < 0)
        {
            sum = 0;
        }
    }

    return result;
}
int findMaxCrossingSubarray(vector<int> &nums, int left, int mid, int right)
{
    int leftSum = INT_MIN;
    int sum = 0;
    for (int i = mid; i >= left; i--)
    {
        sum += nums[i];
        leftSum = max(leftSum, sum);
    }

    int rightSum = INT_MIN;
    sum = 0;
    //注意这里i = mid + 1，避免重复用到nums[i]
    for (int i = mid + 1; i <= right; i++)
    {
        sum += nums[i];
        rightSum = max(rightSum, sum);
    }
    return (leftSum + rightSum);
}

int maxSubArrayHelper(vector<int> &nums, int left, int right)
{
    if (left == right)
    {
        return nums[left];
    }
    int mid = (left + right) / 2;
    int leftSum = maxSubArrayHelper(nums, left, mid);
    //注意这里应是mid + 1，否则left + 1 = right时，会无线循环
    int rightSum = maxSubArrayHelper(nums, mid + 1, right);
    int midSum = findMaxCrossingSubarray(nums, left, mid, right);
    int result = max(leftSum, rightSum);
    result = max(result, midSum);
    return result;
}

int maxSubArray4(vector<int> &nums)
{
    //类似寻找最大最小值的题目，初始值一定要定义成理论上的最小最大值
    int result = INT_MIN;
    int numsSize = int(nums.size());
    result = maxSubArrayHelper(nums, 0, numsSize - 1);
    return result;
}

int uniquePaths(int m, int n) {
    int dp[m][n];

    for (int i = 0; i < m; ++i) {
        dp[i][0] = 1;
    }

    for (int j = 0; j < n; ++j) {
        dp[0][j] = 1;
    }

    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }

    return dp[m - 1][n - 1];
}

#include <stdio.h>

void fn(void)
{
    int n = 10;

    printf("n=%d\n", n);
    n++;
    printf("n++=%d\n", n);
}

void fn_static(void)
{
    static int n = 10;

    printf("static n=%d\n", n);
    n++;
    printf("n++=%d\n", n);
}

int* bubble_sort(int* nums, int size){
    //共需要N-1次比较，如果i从0开始，j的循环为0～size-1-i
    //因此i从1开始循环
    for (int i = 1; i < size; i++){
        bool flag = true; //如果没有没有发生交换，表示已经全部有序，不需要再循环了
        for (int j = 0; j < size-i; j++){
            if (nums[j] > nums[j+1]){
                int tmp = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = tmp;

                flag = false;
            }
        }
        print_nums(nums, size);
        if (flag == true){
            break;
        }
    }
    std::cout << "---------" << std::endl;

    return nums;
}


int* insert_sort(int* nums, int size){
    // 将左边认为是有序的，右边认为是无序的
    // 第一次循环下标为0的只有一个元素，默认是有序的，所以从下标为1的元素开始选择合适的位置插入
    for (int i = 1; i < size; i++){
        // 要插入的数据
        int tmp = nums[i];

        // 每次倒着查询左边的有序数组，如果要插入的数据比有序中最大的小，移动最大的数据到要插入数据的位置
        // 然后继续比较，知道找到不大于tmp的数据
        int j = i;
        while(j > 0 && tmp < nums[j-1]){
            nums[j] = nums[j - 1];
            j--;
        }
        // 存在比其小的数，插入
        if (i != j){
            nums[j] = tmp;
        }
        print_nums(nums, size);
    }
    return nums;
    std::cout << "---------" << std::endl;

    return nums;
}


int* qsort(int* nums, int low, int high){
    if (low > high){
        return nums;
    }

    int value = nums[low];
    int l = low;
    int r = high;

    while(l < r){
        if (l < r && value < nums[r]){
            r-=1;
        }
        nums[l] = nums[r];
        if (l < r && value >= nums[l]){
            l+=1;
        }
        nums[r] = nums[l];
    }

    nums[l] = value;

    qsort(nums, low, l-1);
    qsort(nums, l+1, high);

    print_nums(nums, high-low);
    sqrt(2);
    return nums;
}

double Sqrt(double a, int num) {
    double i = 0;
    double j = a;
    while (i != j) {
        double m = (i + j) / 2;
        double s = m * m;
        if (s == a)
            return m;
        else if (s > a)
            j = m;
        else
            i = m;
    }
    return j;
}

double Sqrt2(double a, int num) {
    double i = 1;
    double j = a;
    while (i != j) {
        i = j;
        j = (j + a / j) / 2;
    }
    return j;
}

double Sqrt3(double a, int num) {
    if (a < 0) return DBL_MIN;
    if (a == 0) return 0;

    double e = 1e-1;
    double x;
    double y = a;
    do {
        x = y;
        y = (x + a / x) / 2;
    } while (abs(x - y) > e);
    return x;
}

int main() {
    int size = 5;
    double result = Sqrt3(size, 2);
    int nums[9] = {9,8,7,6,5,4,3,2,1};
    std::cout << result << std::endl;

//    for (int i = 0; i < size; i++){
//        std::cout << nums[i] << " ";
//    }
//    std::cout << std::endl;

    //int *result = bubble_sort(nums, size);
    //int *result = insert_sort(nums, size);
//    int *result = qsort(nums, 0, size);
//    for (int i = 0; i < size; i++){
//        std::cout << result[i] << " ";
//    }
//    std::cout << std::endl;

    /*
    int size = 9;
    int nums[9] = {-2,1,-3,4,-1,-2,-1,-5,4};
    //int nums[9] = {-2,1,-3};
    int result = maxSubArray(nums, size);
    std::cout << result << std::endl;
    result = maxSubArray2(nums, size);
    std::cout << result << std::endl;
    result = maxSubArray3(nums, size);
    std::cout << result << std::endl;

    vector<int> nums_arr = {-2,1,-3,4,-1,-2,-1,-5,4};
    result = maxSubArray4(nums_arr);
    std::cout << result << std::endl;
    */

//    int result = uniquePaths(3, 2);
//    std::cout << result << std::endl;

    /*
    //vector<int> nums;//不指定长度
    vector<int> nums(5); // 指定长度为n
    nums.push_back(5);
    nums[1] = 2;
    nums.resize(nums.size()-2);
    //nums.pop_back();
    std::cout << nums.size() << std::endl;
    std::cout << nums[0] << nums[1] << nums[2] << nums[3] << nums[4] << nums[5] << nums[6] << std::endl;
    */
//    fn();
//    printf("--------------------\n");
//    fn_static();
//    printf("--------------------\n");
//    fn();
//    printf("--------------------\n");
//    fn_static();

    return 0;
}


//string a = "";
//std::cin >> a;
//std::cout << "Hello, World!" << std::endl;
//std::cout << a << std::endl;
