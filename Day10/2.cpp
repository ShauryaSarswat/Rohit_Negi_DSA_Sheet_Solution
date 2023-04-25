class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int s = 0,curr = capacity;
        for(int i=0;i<plants.size();i++)
        {
            if(curr>=plants[i])
            {
                s+=1;
                curr-=plants[i];
            }
            else
            {
                curr = capacity;
                curr = curr-plants[i];
                s+=((2*i)+1);
            }
        }
        return s;
        
    }
};