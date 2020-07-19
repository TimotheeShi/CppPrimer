# include <iostream>
# include <vector>
# include <numeric>
# include <string>

using namespace std;

int main() {
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    cout << accumulate(v.begin(), v.end(), 0) << endl;
    vector<string> svec;
    string str;
    while(cin >> str) svec.push_back(str);
    cout << accumulate(svec.begin(), svec.end(), string("")) <<endl;
    return 0;

}