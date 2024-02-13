#include <iostream>
#include <stack>
#include <vector>

void printReverseOrder(std::vector<std::string> words){
    std::stack<std::string> s;
    
    for(int i = 0; i < words.size(); i++)
        s.push(words[i]);             //LINE-1

    while(!s.empty()){

        std::cout << s.top() << " ";    //LINE-2

        s.pop();             //LINE-3                       
    }
}
int main() {
    int n;
    std::cin >> n;
    std::vector<std::string> vec;
    for(int i = 0; i < n; i++){
        std::string wd;
        std::cin >> wd;
        vec.push_back(wd);
    }
    printReverseOrder(vec);
    return 0;
}
