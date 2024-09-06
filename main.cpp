//Insertion sort
//Date: 8/10/2024

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> a = {4,6,1,2,3,9,7};

    for (int i=1; i<a.size(); i++){
        int current_pos = i;
        int current_num = a.at(i);
        for (int j = i-1; j>-1; j--){
            int previous = j;

            while (previous>-1 && current_num < a.at(previous) && current_pos>-1){
                swap(a.at(current_pos), a.at(previous));
                previous--;
                current_pos--;
                for (int value: a) cout << value << " ";
                cout << endl;
            }
        }
    }

    for (int value: a){
        cout << value << " ";
    }


    return 0;
}
