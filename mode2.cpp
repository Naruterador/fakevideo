#include <iostream>
/*
*冷链食品追溯系统单元测试项目逻辑覆盖法测试代码
*
*
*
*/

int logictest(int x,int y,int magic)
{
    int value = 0;
    if (x > 0 && y > 0)
    {
        value = x + y + 10;
    }
    else
    {
        value = x + y - 10;
    }
    if(magic < 0)
    {
        value = 0;
    }
    return value;
}


int main(void)
{
    int data;
    data = logictest(10,10,10);
    std::cout << "Test data is " << data << std::endl;
}

