////
//// Created by pavan on 14/4/22.
////
//#include <iostream>
//#include <vector>
//#define v(type, arr, size) std::vector<type> arr(size)
//#define vpush(arr, val) arr.push_back(val)
//#define vpop(arr) arr.pop_back()
//#define f(i,n,inc) for(int x = i; x < n; x+=inc)
//std::vector<int> rotate(std::vector<int> arr, int d, int n)
//{
//    f(1, n, 1)
//    {
//        int temp = arr.back();
//        vpop(arr);
//        arr.insert(arr.begin(), temp);
//    }
//    return arr;
//}
//int main()
//{
//    int n;
//    std::cin >> n;
//    int d;
//    std::cin >> d;
//    v(int, arr, n);
//    f(0,n,1)
//    {
//        int temp;
//        std::cin >> temp;
//        vpush(arr, temp);
//    }
//    arr = rotate(arr, d, n);
//    for(auto i : arr)
//    {
//        if (i != 0)
//        std::cout << i << " ";
//    }
//
//}