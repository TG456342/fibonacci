#include <iostream>

using namespace std;

void fibonacci(int n) {
    if (n == 0) {
        return;
    }

    int a = 0, b = 1;

    cout<<b<<endl;

    for (int i = 1; i <= n-1; i++) {
        int c = a + b;
        a = b;
        b = c;

        cout<<b<<endl;

    }

}

int main() {

    int n;
    cin >> n;

    fibonacci(n);

    return 0;
}



// #include <iostream>
//
// using namespace std;
//
// unsigned long int factorialItt(int n) {
//     unsigned long int res = 1;
//     for (unsigned long int i = 1; i <= n; i++) {
//         res *= i;
//     }
//     return res;
// }
//
// unsigned long int factorialRec(unsigned long int n) {
//     if (n == 0 ) {
//         return 1;
//     }else {
//         return (n * factorialRec(n - 1));
//     }
// }
//
// int main() {
//
//     unsigned long int i = factorialItt(20);
//     unsigned long int i1 = factorialItt(23);
//     unsigned long int i2 = factorialItt(26);
//     unsigned long int i3 = factorialItt(29);
//     unsigned long int j = factorialRec(4);
//
//     cout<< i<<endl;
//     cout<< i1<<endl;
//     cout<< i2<<endl;
//     cout<< i3<<endl;
//     cout<< j<<endl;
//
//     return 0;
// }





//
// #include <iostream>
//
// using namespace std;
//
// int main() {
//     for (int i = 0;i<255;i++) {
//         cout<<char(i)<<endl;
//     }
// }











// /**
// * TODO: fix me! I was really in a hurry this morning...
//  */
// #include <iostream>
// #include <vector>
//
//
// using namespace std;
// /**
//  * Prints a vector of integers to cout
//  */
// void printVec(vector<int> v) {
//     for (int i = 0; i < v.size(); ++i) {
//         cout << "v[" << i << "] = "  << v[i] << endl;
//     }
// }
//
// /**
//  * Returns the sorted version of the provided vector of integers.
//  * Sorting is done by means of the almighty bubble sort algorithm.
//  */
// vector<int> bubbleSort(vector<int> v) {
//     bool sorted = false;
//     while (!sorted) {
//         sorted = true;
//         for (int i = 0; i < v.size(); ++i) {
//             if (v[i] > v[i+1]) {
//                 swap(v[i], v[i+1]);
//                 sorted = false;
//             }
//         }
//     }
//     return v;
// }
//
// int main(int argc, char* argv[]) {
//     // Define the vector to be sorted
//     vector<int> w;
//     w.push_back(2);
//     w.push_back(4);
//     w.push_back(1);
//     w.push_back(7);
//     w.push_back(5);
//
//     // Check how it looks like
//     cout << "unsorted:" << endl;
//     printVec(w);
//
//     // Get a sorted version of w
//     vector<int> sorted_w;
//     sorted_w = bubbleSort(w);
//
//     // Check if it's really sorted
//     cout << "sorted:" << endl;
//     printVec(sorted_w);
//
//     return 0;
// }