#include<bits/stdc++.h>
int main ()
{
    std::vector<int> vec{1,2,3,4,5};

    for (std::vector<int>::const_iterator iter=vec.cbegin(); iter!=vec.cend(); ++iter){
        std::cout << "old element:" << *iter;				// 打印元素									// 需要可以进行修改的左值

        std::cout << ", new:" << *iter << std::endl;

    }
}
