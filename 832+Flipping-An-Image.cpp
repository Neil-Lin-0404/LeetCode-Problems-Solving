#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
    for(int i=0;i<image.size();i++)
    {
        vector<int>vec1 = image[i];
                reverse(vec1.begin(),vec1.end());
        for(int k=0;k<image.size();k++)
        {
            vec1[k] = !vec1[k];
        }
        for(int j=0;j<vec1.size();j++)
        {
            image[i][j] = vec1[j];
        }
    }
    return image;
    }
};