#include <iostream>

//内联函数
inline int add(int a, int b){
    return a + b;
}

//auto + for
void auto_for()
{
    int arr[] = {1, 2, 3, 4, 5};
    for(auto i : arr) //循环变量加范围，i为arr拷贝，但i的修改不会影响arr
    {
        i *= 2;
    }
    for(auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl; //换行
    for(auto &i : arr) //循环变量加范围，i为arr的引用，i的修改会影响arr
    {
        i *= 2;
    }
    for(auto i : arr)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl; //换行
}

int main(int, char**)
{
    printf("Hello, from hello!\n");
    auto_for();
}
