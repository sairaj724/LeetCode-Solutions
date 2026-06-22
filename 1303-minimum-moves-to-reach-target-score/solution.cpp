class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int steps  = 0;
        while(target > 1){

            if(maxDoubles == 0){
                steps += target -1;
                break;
            }
            
            if(target % 2 == 0){
               target /= 2;
               maxDoubles--;
            }
            else{
                target--;
            }
            steps++;
        }
        return steps;
    }
};
