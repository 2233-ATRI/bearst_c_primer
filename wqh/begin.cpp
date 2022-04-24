#include<bits/stdc++.h>
int main ()
{
    std::vector<int> vec{1,2,3,4,5};

    for (std::vector<int>::iterator iter=vec.begin(); iter!=vec.end(); ++iter){
        std::cout << "old element:" << *iter;				// 打印元素

        (*iter) += 1;										// 通过迭代器修改对应元素
        std::cout << ", new:" << *iter << std::endl;

    }
}
