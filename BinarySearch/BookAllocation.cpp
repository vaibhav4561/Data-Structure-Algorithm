#include <bits/stdc++.h>
using namespace std;

int nOfS(vector<int> books, int maxAllowedPage){
    int student = 1;
    int page = books[0];
    for(int i=1; i< books.size(); i++){
        if(page + books[i] > maxAllowedPage){
            student++;
            page = books[i];
        }else{
            page += books[i];
        }
    }
    return student;
}

int bookAllocation(vector<int> books, int m){
    if(m > books.size() ) return -1;
    int low = *max_element(books.begin(), books.end());
    int high = accumulate(books.begin(), books.end(), 0);
    int ans = -1;

    while(low <= high){
        int mid =  (low + high) /2;
        int stud = nOfS(books,mid);

        if(stud > m){
            low = mid +1;
        }
        else{
            ans = mid;
            high = mid - 1;

        }
    }
    return ans;
}

int main()
{
    vector<int> books = {2, 1, 3, 4};
    int m = 2;
    cout<<bookAllocation(books,m)<<endl;
    return 0;
}