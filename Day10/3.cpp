class SmallestInfiniteSet {

public:
    set<int> sets;
    SmallestInfiniteSet() {
        for(int i=1;i<=1000;i+=1)
        {
            sets.insert(i);
        }
    }
    
    int popSmallest() {
        int x = *sets.begin();
        sets.erase(sets.begin());
        return x;
    }
    
    void addBack(int num) {
        sets.insert(num);
    }
};