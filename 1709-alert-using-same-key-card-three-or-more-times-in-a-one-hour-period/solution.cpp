class Solution {
public:
    vector<string> alertNames(vector<string>& keyName, vector<string>& keyTime) {
        map<string , vector<int>> logBook;

        for(int i =0; i<keyName.size(); i++){
            string name = keyName[i];
            string timeStr = keyTime[i];

            int hours = stoi(timeStr.substr(0,2));
            int minutes = stoi(timeStr.substr(3,2));
            int totalMinutes = hours * 60 + minutes;

            logBook[name].push_back(totalMinutes);
        }
        set<string> alertedEmployees;
        
        
        for (auto& [name, times] : logBook) {
            
            sort(times.begin(), times.end());
            
            
            if (times.size() < 3) continue;
            
            for (int i = 0; i < times.size() - 2; i++) {
                if (times[i + 2] - times[i] <= 60) {
                    alertedEmployees.insert(name);
                    break; 
                }
            }
        }
        
        
        return vector<string>(alertedEmployees.begin(), alertedEmployees.end());
    }
};
