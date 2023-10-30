
vector <int> result;
void addno(int x){
    if (x!= 0){
        result.push_back(x);
        addno(x-1);
    }
}
vector<int> printNos(int x) {
    // Write Your Code Here
    addno(x);
    reverse(result.begin(), result.end());

    return result;
}