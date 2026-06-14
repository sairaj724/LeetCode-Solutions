class Solution {
public:
    int countPoints(string rings) {
        vector< vector<bool>> rodColors(10, vector<bool>(3,false));

        for(int i =0; i< rings.length(); i+= 2){
            char color = rings[i];
            int rodIdx = rings[i+1] - '0';

            if(color == 'R') rodColors[rodIdx][0] = true;
            else if (color == 'G') rodColors[rodIdx][1] = true;
            else if (color == 'B') rodColors[rodIdx][2] = true;
        }
        int compRod = 0;

        for(int i =0; i<10; i++){
            if(rodColors[i][0] && rodColors[i][1] && rodColors[i][2] ) compRod++;
        }
        return compRod;
    }
};
