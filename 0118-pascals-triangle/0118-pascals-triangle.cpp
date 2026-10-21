class Solution {
public:
    vector<vector<int>> generate(int numRows) {
       vector<vector<int>> ans;
       
       vector<int> row;
       for(int i = 0; i < numRows; i++) {
            vector<int> newrow(i+1);

            newrow[0] = 1;

            for(int j = 1; j < i; j++) {
                newrow[j] = row[j] + row[j-1];
            }

            newrow[i] = 1;

            ans.push_back(newrow);
            row = newrow;
       }

       return  ans;


    }
};