class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> resultVector;
        resultVector.push_back(0);
        for (int j = 1; j <= num; j++){
            int i=floor(log2(j));
            if (j - pow(2, i) == 0){
                resultVector.push_back(1);
                //cout << 1 + resultVector[j - pow(2, i)] << ' ';
                continue;
            }
            //cout << 1 + resultVector[j - pow(2, i)] << ' ';
            resultVector.push_back(1 + resultVector[j - pow(2, i)]);
        }
        return resultVector;
    }
};
