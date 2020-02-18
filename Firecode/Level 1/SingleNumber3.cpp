int single_number(int arr[], int sz)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < sz; ++i) {
        ++hash[arr[i]];
    }
    
    for (auto it = hash.begin(); it != hash.end(); ++it) {
        if (it->second == 1) return it->first;
    }
    
    return 0;
}