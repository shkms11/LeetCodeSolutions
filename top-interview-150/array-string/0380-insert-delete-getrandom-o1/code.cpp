class RandomizedSet {
  private:
    vector<int>num;
    unordered_map<int, int> idx_map;

  public:
    RandomizedSet() {}

    bool insert(int val){
      if(idx_map.count(val)) return false;

      num.push_back(val);
      idx_map[val] = num.size() -1;

      return true;

    }

    bool remove(int val) {
      if(!idx_map.count(val))
        return false;

      int idx = idx_map[val];
      int last = num.back();

      num[idx] = last;
      idx_map[last] = idx;

      num.pop_back();
      idx_map.erase(val);
      return true;
    }

    int getRandom() {
      int idx = rand() % num.size();
      return num[idx];
    }
    
};
