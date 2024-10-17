// day2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

static int minSubArrayLen(int s, std::vector<int>& nums);
static std::vector<std::vector<int>> generateMatrix(int n);

int main()
{
    std::cout << "Hello World!\n";
    std::vector<int> vec = { 1,2,3,4,5,6 };
    int target = 4;
    int result = minSubArrayLen(target, vec);
    std::cout << result << std::endl;

    int hh = 4;
    std::vector<std::vector<int>> r = generateMatrix(hh);
    std::cout << r[3][3];
}

static int minSubArrayLen(int s, std::vector<int>& nums) {
    int result = INT32_MAX;
    int sum = 0;
    int i = 0;
    int subLength = 0;
    for (int j = 0; j < nums.size(); j++) {
        sum += nums[j];
        while (sum >= s) {
            subLength = (j - i + 1);
            result = result < subLength ? result : subLength;
            sum -= nums[i++];
        }
    }
    return result == INT32_MAX ? 0 : result;
}

static std::vector<std::vector<int>> generateMatrix(int n)
{
    std::vector<std::vector<int>> res(n, std::vector<int>(n, 0));
    int startx = 0, starty = 0;
    int loop = n / 2;
    int mid = n / 2;
    int count = 1;
    int offset = 1;
    int i, j;
    while (loop--) {
        i = startx;
        j = starty;

        for (j; j < n - offset; j++) {
            res[i][j] = count++;
        }
        for (i; i < n - offset; i++) {
            res[i][j] = count++;
        }
        for (; j > starty; j--) {
            res[i][j] = count++;
        }
        for (; i > startx; i--) {
            res[i][j] = count++;
        }

        startx++;
        starty++;

        offset += 1;
    }

    if (n % 2) {
        res[mid][mid] = count;
    }
    return res;
}
