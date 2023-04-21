class solution{
    public:
    int unvisitedLeaves(int N, int leaves, int frogs[]) {
        // Code here
        map<int,int> map;
        int count = 0;
        
        for(int i=0;i<N;i++){
            int pos = frogs[i];
            if(m[pos]==1) continue;
            
            while(pos <= leaves){
                m[pos] = 1;
                pos += frogs[i];
            }
        }
        
        for(int i=1;i<=leaves;i++){
            if(m[i]==0) count++;
        }
        
        return count;
    }
};
